#include "myserver.h"
#include <mythread.h>

myserver::myserver() {}
myserver::~myserver(){}

void myserver::run()
{
    server = new QTcpServer;
    connect(server,SIGNAL(newConnection()),this,SLOT(newconnect()));
    if(server->listen(QHostAddress::Any,2003))
    {
       emit send_to_textbrowser("Listening...");
    }
    else
    {
    emit send_to_textbrowser("Not listening...");
    }
}

void myserver::send_to_client(QByteArray &byte)
{
    emit send_to_client_query(byte);
}

void myserver::newconnect()
{
    mythread *mthread=new mythread(server->nextPendingConnection());
    connect(mthread,SIGNAL(send_to_server(QString)),this,SLOT(by_thread(QString)));
    connect(mthread,SIGNAL(send_login_pass(QString,QString)),this,SLOT(get_login_pass(QString,QString)));
    connect(this,SIGNAL(send_to_client_query(QByteArray&)),mthread,SLOT(sent_to_client(QByteArray&)));
    connect(mthread,SIGNAL(hellomessage_signal()),this,SLOT(hellomessage_slot()));
    connect(mthread,SIGNAL(reg_login_pass(QString,QString)),this,SLOT(reg_check(QString,QString)));
    connect(mthread,SIGNAL(vector_del_list(QString)),this,SLOT(vector_del_list_slot(QString)));
    connect(mthread,SIGNAL(add_strings(QString,QString,QString,QString)),this,SLOT(add_strings_slot(QString,QString,QString,QString)));
    mthread->run();
}

void myserver::by_thread(QString str)
{
    emit send_to_textbrowser(str);
}

void myserver::get_login_pass(QString login, QString pass)
{
    emit send_login_pass(login,pass);
}

void myserver::hellomessage_slot()
{
    emit hellomessage_signal();
}

void myserver::reg_check(QString login, QString pass)
{
    emit reg_login_password(login,pass);
}

void myserver::vector_del_list_slot(QString tmp)
{
    emit del_signal(tmp);
}

void myserver::add_strings_slot(QString number, QString name, QString tel,QString group)
{
    emit  add_strings_signal(number, name, tel, group);
}
