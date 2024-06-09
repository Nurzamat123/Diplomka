#ifndef CADETS_H
#define CADETS_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>
#include <QLabel>
#include <QStandardItemModel>
#include <add_window.h>

namespace Ui {
class cadets;
}

class cadets : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadets(QTcpSocket &_socket,QWidget *parent = nullptr);
    ~cadets();

private:
    Ui::cadets *ui;

    add_window *ad_window;

    QByteArray data;
    qint16 sizeblock = 0;
    QVector<QString>list_string;

    QTcpSocket *socket;

    void send_to_server(QString str);

    void start();

signals:
    void send_cad_signal();

public slots:

    void read_server();
    void get_cadstrings(QString,QString,QString,QString);
    void SetEnabled_True();

    void addButton_clicked();
    void deleteButton_clicked();
    void exitButton_clicked();
};

#endif // CADETS_H
