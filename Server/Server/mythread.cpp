#include "mythread.h"

mythread::mythread(QTcpSocket *soc)
{
    socket = soc;
    connect(socket,SIGNAL(readyRead()),this,SLOT(read_client()));
    connect(socket,SIGNAL(disconnected()),this,SLOT(deleteLater()));

}

void mythread::run(){
    QByteArray tmp;
    tmp.clear();
    QString s = "serverready";
    QDataStream out(&tmp, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_3);
    out<<qint16(0)<<s;
    out.device()->seek(0);
    out<<qint16(tmp.size()-sizeof(qint16));

    socket->write(tmp);
    QString str = "Client connect! socketDescriptor = ";
    str.append(QString::number(socket->socketDescriptor()));
    emit send_to_server(str);

}

void mythread::read_client(){
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

            in>>login;
            if(login == "DEL"){
                QString str;
                in>>str;
                emit vector_del_list(str);
            }

            if(login == "ADD"){
                QString number,name,tel,group;
                in>>number;
                in>>name;
                in>>tel;
                in>>group;
                emit add_strings(number,name,tel,group);
            }

            if(login == "reg"){
                QString login,pass;
                in>>login;
                in>>pass;
                emit reg_login_pass(login,pass);
            }

            if(login == "Kursanty"){
                emit hellomessage_signal();
            }

            if(login =="TimeTable")
            {
                emit timetable_signal();
            }

            if(login == "DEL_timet"){
                QString str;
                in>>str;
                emit vector_del_list(str);
            }

            if(login == "ADD_timet"){
                QString number,name,day,start,end;
                in>>number;
                in>>name;
                in>>day;
                in>>start;
                in>>end;
                emit add_timetstrings(number,name,day,start,end);
            }

            else {
                in>>password;
            }
            sizeblock = 0;
            break;
        }
    }
    if(login == "__123__"){

    }
    else {
        emit send_login_pass(login,password);
    }
}


void mythread::send_to_client(QByteArray &byte){
    socket->write(byte);
}

mythread::~mythread(){
    socket->deleteLater();
}
