#ifndef MMAINWINDOW_H
#define MMAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTcpSocket>
#include <QLabel>
#include <mainwindow1.h>
#include <QStandardItemModel>
#include <employers.h>

namespace Ui {
class mmainwindow;
}

class mmainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mmainwindow(QWidget *parent = nullptr);
    ~mmainwindow();

private:
    Ui::mmainwindow *ui;

    employers *emp_window;

signals:
    void send_end_signal();
    void emp_clicked();

public slots:
    void exitButton_clicked();
    void empButton_clicked();

    void SetEnabled_True();

};

#endif // MMAINWINDOW_H
