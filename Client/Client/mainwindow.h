#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>
#include <QLabel>
#include <mainwindow1.h>
#include <QStandardItemModel>
#include "add_window.h"
#include <add_tt_window.h>
#include <paper.h>
#include <mmainwindow.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    mainwindow1 *second_window;

    QString access;

    QByteArray data;
    qint16 sizeblock = 0;
    QVector<QString> list_string;
    add_window *ad_window;

    add_tt_window *ad_tt_window;
    paper *paper_window;;
    mmainwindow *mmain_window;

    QTcpSocket *socket;

    void send_to_server(QString str);



public slots:
    void enter_info(QString &);
    void read_server();
    void button_delete();

    void get_timet_strings(QString,QString,QString,QString,QString);

    void addButton_clicked();

    void SetEnabled_True();

private slots:

    void finish();
    void exitButton_clicked();
    void viewStatsButton_clicked();
    void mainMenuButton_clicked();
};
#endif // MAINWINDOW_H
