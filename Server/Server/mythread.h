#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QSqlQuery>

class mythread : public QThread
{
    Q_OBJECT
public:
   mythread(QTcpSocket*);
    ~mythread();
   void run();

private:


signals:
};

#endif // MYTHREAD_H
