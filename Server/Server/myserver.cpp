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
    emit send_to_textbrowser("Not listening...");
}

void myserver::send_to_client(QByteArray &byte)
{
    emit send_to_client_query(byte);
}

void myserver::newconnect()
{
    mythread *mthread=new mythread(server->nextPendingConnection());
}

void myserver::by_thread(QString)
{

}

void myserver::get_login_pass(QString login, QString pass)
{

}

void myserver::hellomessage_slot()
{

}

void myserver::reg_check(QString, QString)
{

}

void myserver::vector_del_list_slot(QString)
{

}

void myserver::add_strings_slot(QString, QString, QString)
{

}
