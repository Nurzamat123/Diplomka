#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mainwindow1.h"
#include <add_window.h>
#include <add_tt_window.h>
#include <paper.h>
#include <mmainwindow.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QTcpSocket(this);

    ///////////////////////////////
    second_window = new mainwindow1(*socket);
    second_window->setWindowModality(Qt::ApplicationModal);
    second_window->show();
    ///////////////////////////////
    connect(second_window,SIGNAL(enter_info(QString&)),this,SLOT(enter_info(QString&)));
    connect(ui->deleteButton,SIGNAL(clicked()),this,SLOT(button_delete()));

    this->setEnabled(false);


}

void MainWindow::enter_info(QString &_access){
    if(_access == ""){

    }
    else {
        connect(socket,SIGNAL(readyRead()),this,SLOT(read_server()));
        connect(socket,SIGNAL(disconnected()),this,SLOT(deleteLater()));
        access = _access;
        second_window->deleteLater();
        this->setEnabled(true);
        if(access == "READ"){
            //ui->addButton->setEnabled(false);
            //ui->deleteButton->setEnabled(false);
           // ui->mainMenuButton->setEnabled(false);
            ui->addButton->setVisible(false);
            ui->deleteButton->setVisible(false);
            ui->mainMenuButton->setVisible(false);
            ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
            //ui->tableView->setVisible(false);
        }
        else if(access=="RW")
            {
            ui->addButton->setEnabled(true);
            ui->deleteButton->setEnabled(true);
            ui->tableView->setEditTriggers(QAbstractItemView::EditTriggers());
            }
        QString s = "TimeTable";
        send_to_server(s);
    }
}

void MainWindow::read_server(){
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


void MainWindow::button_delete(){
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

    QString str = "DEL_timet";

    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);

}

void MainWindow::on_addButton_clicked()
{
    this->setEnabled(false);
    ad_tt_window = new add_tt_window;
    ad_tt_window->show();
    connect(ad_tt_window,SIGNAL(send_timet_strings(QString,QString,QString,QString,QString)),this,SLOT(get_timet_strings(QString,QString,QString,QString,QString)));
    connect(ad_tt_window,SIGNAL(send_signal()),this,SLOT(SetEnabled_True()));
}

void MainWindow::send_to_server(QString str){
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}


void MainWindow::get_strings(QString number,QString name,QString tel, QString group){
    delete ad_window;
    this->setEnabled(true);
    QString str = "ADD";
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number<<name<<tel<<group;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}

////////////Actual////////////////////////////
void MainWindow::get_timet_strings(QString number, QString name, QString day, QString start, QString end)
{
    delete ad_tt_window;
    this->setEnabled(true);
    QString str = "ADD_timet";
    data.clear();
    QDataStream out(&data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<str<<number<<name<<day<<start<<end;
    out.device()->seek(0);
    out<<qint16(data.size()-sizeof(qint16));
    socket->write(data);
}

void MainWindow::SetEnabled_True()
{
    this->setVisible(true);
    this->setEnabled(true);
}

void MainWindow::on_exitButton_clicked()
{
    this->deleteLater();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_viewStatsButton_clicked()
{
    paper_window = new paper;
    paper_window->show();
}


void MainWindow::on_mainMenuButton_clicked()
{
    this->setEnabled(false);
    this->setVisible(false);
    mmain_window = new mmainwindow;
    mmain_window ->show();
    connect(mmain_window,SIGNAL(send_end_signal()),this,SLOT(SetEnabled_True()));
}

