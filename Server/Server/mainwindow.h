#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTime>
#include <QTextStream>
#include <QSqlDatabase>
#include <connect_db.h>
#include <myserver.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString get_time_and_text(QString str);

private:
    Ui::MainWindow *ui;
    myserver *server;
    connect_db *m_connect_db;
    QSqlDatabase db;
    QTime time;
    QByteArray data;

public slots:
    void start_button_clicked();
    void stop_button_clicked();
    void db_button_clicked();

    void by_server(QString str);
    void is_open_db(bool);
    void get_login_pass(QString,QString);
    void hellomessage_slot();
    void reg_login_pass(QString,QString);
    void delete_slot(QString);
    void add_newval_totable_slot(QString,QString,QString,QString);

};
#endif // MAINWINDOW_H
