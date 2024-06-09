#include "employers.h"
#include "ui_employers.h"
#include <add_emp_window.h>

employers::employers(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::employers)
{
    ui->setupUi(this);

    connect(socket,SIGNAL(readyRead()),this,SLOT(read_server()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(deleteLater()));

    connect(ui->addButton,SIGNAL(clicked()),this,SLOT(on_addButton_clicked()));
    start();
}

employers::~employers()
{
    delete ui;
}

void employers::send_to_server(QString str)
{
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}

void employers::enter_info(QString &)
{

}

void employers::start()
{
    ui->tableView->setEditTriggers(QAbstractItemView::EditTriggers());
    QString s = "Empoyers";
    send_to_server(s);
}

void employers::read_server()
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
        if(g==5){
            g=0;
            f++;
        }
        model->setItem(f,g,new QStandardItem(list_string[i]));
        g++;
    }
    ui->tableView->setModel(model);
    list_string.clear();
}

void employers::get_emp_strings(QString number, QString name, QString inn, QString position, QString tel)
{
    delete ad_emp_window;
    this->setEnabled(true);
    QString str = "ADD_emp";
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number<<name<<inn<<position<<tel;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}


void employers::SetEnabled_True()
{
    this->setEnabled(true);
}

void employers::on_addButton_clicked()
{
    this->setEnabled(false);
    ad_emp_window = new add_emp_window;
    ad_emp_window->show();
    connect(ad_emp_window,SIGNAL(send_emp_strings(QString,QString,QString,QString,QString)),this,SLOT(get_emp_strings(QString,QString,QString,QString,QString)));
    connect(ad_emp_window,SIGNAL(send_signal()),this,SLOT(SetEnabled_True()));
}


void employers::on_deleteButton_clicked()
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

    QString str = "DEL_emp";

    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}


void employers::on_exitButton_clicked()
{
    emit send_emp_signal();
    this->deleteLater();
}

