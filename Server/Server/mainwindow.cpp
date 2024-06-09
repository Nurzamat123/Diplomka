#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Серверная");


    server = new myserver;

    connect(ui->start_button,SIGNAL(clicked(bool)),this,SLOT(start_button_clicked()));
    connect(ui->stop_button,SIGNAL(clicked(bool)),this,SLOT(stop_button_clicked()));
    connect(server,SIGNAL(send_to_textbrowser(QString)),this,SLOT(by_server(QString)));
    connect(ui->db_button,SIGNAL(clicked(bool)),this,SLOT(db_button_clicked()));
    connect(server,SIGNAL(send_login_pass(QString,QString)),this,SLOT(get_login_pass(QString,QString)));

    connect(server,SIGNAL(timetable_signal()),this,SLOT(timetable_slot()));
    connect(server,SIGNAL(add_timetStrings_signal(QString,QString,QString,QString,QString)),this,SLOT(add_newval_totimet_slot(QString,QString,QString,QString,QString)));

    connect(server,SIGNAL(employers_signal()),this,SLOT(employers_slot()));
    connect(server,SIGNAL(add_empstrings_signal(QString,QString,QString,QString,QString)),this,SLOT(add_newval_toemp_slot(QString,QString,QString,QString,QString)));

    connect(server,SIGNAL(hellomessage_signal()),this,SLOT(hellomessage_slot()));
    connect(server,SIGNAL(reg_login_password(QString,QString)),this,SLOT(reg_login_pass(QString,QString)));
    connect(server,SIGNAL(del_signal(QString)),this,SLOT(delete_slot(QString)));
    connect(server,SIGNAL(add_strings_signal(QString,QString,QString,QString)),this,SLOT(add_newval_totable_slot(QString,QString,QString,QString)));
}

void MainWindow::start_button_clicked()
{
    by_server("Start!");
    server->run();
}

void MainWindow::stop_button_clicked()
{
    server->deleteLater();
    by_server("Server stop!");
}

QString MainWindow::get_time_and_text(QString str)
{
    time=QTime::currentTime();
    QString s;
    s.append("[");
    s.append(time.toString("hh:mm:ss"));
    s.append("]");
    s.append(str);

    return s;
}

void MainWindow::db_button_clicked()
{
    m_connect_db=new connect_db();
    connect(m_connect_db,SIGNAL(is_open_signal(bool)),this,SLOT(is_open_db(bool)));
    m_connect_db->show();
}

void MainWindow::by_server(QString str)
{
    ui->textBrowser->append(get_time_and_text(str));
}

void MainWindow::is_open_db(bool open)
{
    if(open){
        by_server("База данных подключена!");
    }
    else{
        by_server("База данных не подключена!");
    }
}

void MainWindow::get_login_pass(QString login, QString pass)
{
    db = m_connect_db->get_db();
    if(db.open()){
        QSqlQuery query(db);
        query.prepare("SELECT * FROM Users WHERE Login = :login AND Password = :pass");
        query.bindValue(":login", login);
        query.bindValue(":pass", pass);

        if(query.exec()){
            if(query.next()){
                ui->textBrowser->append(get_time_and_text("Клиент с логином = " + login + " успешно подключился!"));
                data.clear();
                QString access = query.value(3).toString();
                QString h = "ok";
                QDataStream out(&data, QIODevice::WriteOnly);
                out.setVersion(QDataStream::Qt_6_3);
                out << qint16(0) << h << access;
                out.device()->seek(0);
                out << qint16(data.size() - sizeof(qint16));
                server->send_to_client(data);
            } else {
                ui->textBrowser->append(get_time_and_text("Клиент с логином = " + login + " не смог подключиться к серверу!"));
                data.clear();
                QString h = "no";
                QDataStream out(&data, QIODevice::WriteOnly);
                out.setVersion(QDataStream::Qt_6_3);
                out << qint16(0) << h;
                out.device()->seek(0);
                out << qint16(data.size() - sizeof(qint16));
                server->send_to_client(data);
            }
        } else {
            qDebug() << "Query execution error: " << query.lastError().text();
        }
        db.close();
    } else {
        qDebug() << "Database open error: " << db.lastError().text();
    }
}


void MainWindow::timetable_slot()
{
    if(db.open()){
        QSqlQuery *query = new QSqlQuery(db);
        QDataStream out(&data,QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_3);
        data.clear();
        out<<qint16(0);
        query->exec("select * from [Нагрузка преподавателей]");
        while(query->next()){
            QString s1,s2,s3,s4,s5;
            s1 = query->value(0).toString();
            s2 = query->value(1).toString();
            s3 = query->value(2).toString();
            s4 = query->value(3).toString();
            s5 = query->value(4).toString();
            out<<s1<<s2<<s3<<s4<<s5;
        }
        out.device()->seek(0);
        out<<qint16(data.size()-sizeof(qint16));
        server->send_to_client(data);
        db.close();
    }
    else {
        qDebug()<<"db not open!";
    }
}

void MainWindow::hellomessage_slot()
{
    if(db.open()){
        QSqlQuery *query = new QSqlQuery(db);
        QDataStream out(&data,QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_3);
        data.clear();
        out<<qint16(0);
        query->exec("select * from Курсанты");
        while(query->next()){
            QString s1,s2,s3,s4;
            s1 = query->value(0).toString();
            s2 = query->value(1).toString();
            s3 = query->value(2).toString();
            s4 = query->value(3).toString();
            out<<s1<<s2<<s3<<s4;
        }
        out.device()->seek(0);
        out<<qint16(data.size()-sizeof(qint16));
        server->send_to_client(data);
        db.close();
    }
    else {
        qDebug()<<"db not open!";
    }
}

void MainWindow::reg_login_pass(QString login, QString pass)
{
    if(db.open()){
        QSqlQuery *q = new QSqlQuery(db);
        q->exec("select count(*) from Users where Login = '"+login+"'");
        QString s;
        while(q->next()){
            qDebug()<<q->value(0).toInt();
            if(q->value(0).toInt() >0 && login!=""){
                s = "reg_no_success";
            }
            else {
                s = "reg_success";
                q->exec("insert into Users (Login,Password,Access) values ('"+login+"','"+pass+"','READ')");
            }
        }
        if(s == "reg_success"){
            by_server("Клиент login = "+login+" успешно зарегистрирован!");
        }

        data.clear();
        QDataStream out(&data,QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_3);
        out<<qint16(0)<<s;
        out.device()->seek(0);
        out<<qint16(data.size()-sizeof(qint16));
        server->send_to_client(data);
        db.close();
    }
}

void MainWindow::delete_slot(QString tmp)
{
    if(db.open()){
        QSqlQuery*q=new QSqlQuery(db);
        q->exec("delete from Курсанты where [ID] = " + tmp);
        hellomessage_slot();
        db.close();
    }
    else{
        qDebug()<<"База данных не доступна!";
    }
}

void MainWindow::add_newval_totimet_slot(QString number, QString name, QString day, QString start, QString end)
{
    if (db.open()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO [Нагрузка преподавателей] ([ФИО], [День недели], [Начало урока],[Конец урока]) VALUES (:name, :day, :start, :end)");
        if(!number.isEmpty()){
            query.bindValue(":name", name);
            query.bindValue(":day", day);
            query.bindValue(":start", start);
            query.bindValue(":end", end);
        }
        if (query.exec()) {
            timetable_slot();
        } else {
            qDebug() << "11111" << query.lastError().text();
        }

        db.close();
    } else {
        qDebug() << "База данных не доступна!";
    }
}

void MainWindow::employers_slot()
{
    if(db.open()){
        QSqlQuery *query = new QSqlQuery(db);
        QDataStream out(&data,QIODevice::WriteOnly);
        out.setVersion(QDataStream::Qt_6_3);
        data.clear();
        out<<qint16(0);
        query->exec("select * from [Сотрудники]");
        while(query->next()){
            QString s1,s2,s3,s4,s5;
            s1 = query->value(0).toString();
            s2 = query->value(1).toString();
            s3 = query->value(2).toString();
            s4 = query->value(3).toString();
            s5 = query->value(4).toString();
            out<<s1<<s2<<s3<<s4<<s5;
        }

        out.device()->seek(0);
        out<<qint16(data.size()-sizeof(qint16));
        server->send_to_client(data);
        db.close();
    }
    else {
        qDebug()<<"db not open!";
    }
}

void MainWindow::add_newval_toemp_slot(QString number, QString name, QString inn, QString position, QString tel)
{
    if (db.open()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO Сотрудники (ФИО, ИНН, Должность,[Номер телефона]) VALUES (:name, :inn, :position, :tel)");
        if(!number.isEmpty()){
            query.bindValue(":name", name);
            query.bindValue(":inn", inn);
            query.bindValue(":position", position);
            query.bindValue(":tel", tel);
        }
        if (query.exec()) {
            employers_slot();
        } else {
            qDebug() << "11111" << query.lastError().text();
        }

        db.close();
    } else {
        qDebug() << "База данных не доступна!";
    }
}

void MainWindow::add_newval_totable_slot(QString number,QString name, QString tel, QString group)
{
    if (db.open()) {
        QSqlQuery query(db);
        query.prepare("INSERT INTO Курсанты ([ФИО], [Телефон], [Группа]) VALUES (:name, :tel, :group)");
        if(!number.isEmpty()){
            query.bindValue(":name", name);
            query.bindValue(":tel", tel);
            query.bindValue(":group", group);
        }
        if (query.exec()) {
            hellomessage_slot();
        } else {
            qDebug() << "11111" << query.lastError().text();
        }

        db.close();
    } else {
        qDebug() << "База данных не доступна!";
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

