#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QWidget>

namespace Ui {
class mainwindow1;
}

class mainwindow1 : public QWidget
{
    Q_OBJECT

public:
    explicit mainwindow1(QWidget *parent = nullptr);
    ~mainwindow1();

private:
    Ui::mainwindow1 *ui;
};

#endif // MAINWINDOW1_H
