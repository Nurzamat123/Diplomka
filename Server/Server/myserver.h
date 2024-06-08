#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QSqlQuery>

class myserver : public QTcpServer
{
    Q_OBJECT
public:
    myserver();
    ~myserver();

    void run();

    void send_to_client(QByteArray &);

private:
    QTcpServer *server;

public slots:
    void newconnect();
    void by_thread(QString);
    void get_login_pass(QString login,QString pass);
    void hellomessage_slot();
    void reg_check(QString,QString);
    void vector_del_list_slot(QString);
    void add_strings_slot(QString,QString,QString,QString);

    void timetable_slot();
    void add_timetstrings_slot(QString,QString,QString,QString,QString);

signals:
    void send_to_textbrowser(QString str);
    void send_login_pass(QString,QString);
    void send_to_client_query(QByteArray &);
    void hellomessage_signal();
    void reg_login_password(QString,QString);
    void del_signal(QString);
    void add_strings_signal(QString,QString,QString,QString);

    void timetable_signal();
    void add_timetStrings_signal(QString,QString,QString,QString,QString);

};

#endif // MYSERVER_H
