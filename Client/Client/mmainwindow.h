#ifndef MMAINWINDOW_H
#define MMAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>
#include <QLabel>
#include <QStandardItemModel>
#include <employers.h>
#include <cadets.h>
#include <paper.h>

namespace Ui {
class mmainwindow;
}

class mmainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mmainwindow(QTcpSocket &_socket,QWidget *parent = nullptr);
    ~mmainwindow();

private:
    Ui::mmainwindow *ui;

    QTcpSocket *socket;

    employers *emp_window;
    cadets *cad_window;
    paper *pap_window;


signals:
    void send_end_signal();
    void send_back_signal();

public slots:
    void exitButton_clicked();
    void empButton_clicked();
    void cadButton_clicked();
    void paperButton_clicked();
    void timetButton_clicked();

    void SetEnabled_True();

};

#endif // MMAINWINDOW_H
