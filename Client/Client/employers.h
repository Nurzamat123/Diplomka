#ifndef EMPLOYERS_H
#define EMPLOYERS_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>
#include <QLabel>
#include <QStandardItemModel>
#include <add_emp_window.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class employers;
}
QT_END_NAMESPACE

class employers : public QMainWindow
{
    Q_OBJECT

public:
    explicit employers(QTcpSocket &_socket,QWidget *parent = nullptr);
    ~employers();


private:
    Ui::employers *ui;

    add_emp_window *ad_emp_window;

    QByteArray data;
    qint16 sizeblock = 0;
    QVector<QString>list_string;

    QTcpSocket *socket;

    void send_to_server(QString str);

    void start();

signals:
        void send_emp_signal();
public slots:

    void read_server();
    void get_emp_strings(QString,QString,QString,QString,QString);
    void SetEnabled_True();

    void addButton_clicked();
    void deleteButton_clicked();
    void exitButton_clicked();
};

#endif // EMPLOYERS_H
