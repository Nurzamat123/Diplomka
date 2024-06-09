#include "cadets.h"
#include "ui_cadets.h"
#include <add_window.h>

cadets::cadets(QTcpSocket &_socket, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cadets)
{
    ui->setupUi(this);

    this->socket=&_socket;

    connect(ui->addButton,SIGNAL(clicked()),this,SLOT(addButton_clicked()));
    connect(ui->deleteButton,SIGNAL(clicked()),this,SLOT(deleteButton_clicked()));
    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(exitButton_clicked()));

    connect(socket,SIGNAL(readyRead()),this,SLOT(read_server()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(deleteLater()));
    start();
}

cadets::~cadets()
{
    delete ui;
}

void cadets::send_to_server(QString str)
{
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}

void cadets::start()
{
    ui->tableView->setEditTriggers(QAbstractItemView::EditTriggers());
    QString s = "Cadets";
    send_to_server(s);
}

void cadets::read_server()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_3);
    if(in.status()==QDataStream::Ok){
        for(;;){
            if(sizeblock==0){
                if(socket->bytesAvailable()<2){
                    break;
                }
                in>>sizeblock;
            }
            if(socket->bytesAvailable()<sizeblock){
                break;
            }
            while (socket->bytesAvailable()) {
                QString tmp;
                in>>tmp;
                list_string.push_back(tmp);
            }

            sizeblock = 0;
            break;
        }
    }

    QStandardItemModel *model;
    model = new QStandardItemModel;
    int f=0,g=0;
    for(int i=0;i<list_string.size();i++){
        if(g==4){
            g=0;
            f++;
        }
        model->setItem(f,g,new QStandardItem(list_string[i]));
        g++;
    }
    ui->tableView->setModel(model);
    list_string.clear();
}

void cadets::get_cadstrings(QString number, QString name, QString tel, QString group)
{
    delete ad_window;
    this->setEnabled(true);
    QString str = "ADD_cad";
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number<<name<<tel<<group;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}

void cadets::SetEnabled_True()
{
    this->setEnabled(true);
}

void cadets::addButton_clicked()
{
    this->setEnabled(false);
    ad_window = new add_window;
    ad_window->show();
    connect(ad_window,SIGNAL(send_cadstrings(QString,QString,QString,QString)),this,SLOT(get_cadstrings(QString,QString,QString,QString)));
    connect(ad_window,SIGNAL(send_cad_signal()),this,SLOT(SetEnabled_True()));
}

void cadets::deleteButton_clicked()
{
    int row = ui->tableView->selectionModel()->currentIndex().row();
        //qDebug()<<ui->tableView->selectionModel()->currentIndex().column();
    QModelIndex myindex;
    int col = ui->tableView->model()->columnCount();
    QString number;
    for(int i=0;i<col;i++){
        myindex = ui->tableView->model()->index(row,i);
        if(myindex.data().toString() != ""){
            number = myindex.data().toString();
            break;
        }
    }
    qDebug()<<number;

    QString str = "DEL_cad";

    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}

void cadets::exitButton_clicked()
{
    emit send_cad_signal();
    this->deleteLater();
}
