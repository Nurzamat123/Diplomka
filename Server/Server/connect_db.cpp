#include "connect_db.h"
#include "qobjectdefs.h"
#include "ui_connect_db.h"
#include <QSqlQuery>

connect_db::connect_db(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::connect_db)
{
    ui->setupUi(this);

    this->setWindowTitle("Подключение базы данных");
    connect(ui->connect_but,SIGNAL(clicked(bool)),this,SLOT(start_connect_clicked()));
    connect(ui->exit_but,SIGNAL(clicked(bool)),this,SLOT(exit_button_clicked()));
}


void connect_db::start_connect_clicked(){
    connect_class = new con_class();
    ui->info_label->setText("Идет соединение!");
    connect(connect_class,SIGNAL(is_open(bool)),this,SLOT(is_open_db(bool)));

    thread = new QThread();
    connect_class->moveToThread(thread);

    server_name_str = ui->server_name_lineedit->text();
    db_name_str = ui->db_name_lineedit->text();
    user_name_str = ui->login_lineedit->text();
    password_str = ui->pass_lineedit->text();

    QSqlDatabase &tmp_db = db;


    connect(thread,&QThread::started,[&](){connect_class->connect_db_start(tmp_db,server_name_str,db_name_str,user_name_str,password_str);});
    connect(thread,&QThread::finished,thread,&QThread::deleteLater);

    thread->start();

}

void connect_db::is_open_db(bool is){
    if(is){
        ui->info_label->setText("База данных успешно подключена!");
        this->setEnabled(false);
        QThread::sleep(2);
        this->deleteLater();
    }
    else {
        ui->info_label->setText("База данных не подключена!");
    }
    emit is_open_signal(is);
}

connect_db::~connect_db()
{
    delete ui;
}


con_class::con_class(){}

void con_class::connect_db_start(QSqlDatabase &db,QString server_name,QString db_name,QString user_name,QString password){
    db = QSqlDatabase::addDatabase("QODBC");
    // server name = NURZAMAT\SQLEXPRESS
    db.setConnectOptions("SQL_ATTR_LOGIN_TIMEOUT="+QString::number(1));
    db.setDatabaseName("DRIVER={SQL Server};SERVER="+server_name+";DATABASE="+db_name+";");
    db.setUserName(user_name);
    db.setPassword(password);

    if(db.open()){
        emit is_open(true);
        db.close();
    }
    else {
        emit is_open(false);
    }


}

void connect_db::exit_button_clicked(){
    this->close();
}


con_class::~con_class(){}
