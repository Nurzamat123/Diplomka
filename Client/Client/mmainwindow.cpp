#include "mmainwindow.h"
#include "ui_mmainwindow.h"

mmainwindow::mmainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mmainwindow)
{
    ui->setupUi(this);

    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(exitButton_clicked()));
    connect(ui->EmpButton,SIGNAL(clicked()),this,SLOT(empButton_clicked()));

}

void mmainwindow::exitButton_clicked()
{
    emit send_end_signal();
    this->deleteLater();
}

void mmainwindow::empButton_clicked()
{
    emit emp_clicked();
    this->setEnabled(false);
    this->setVisible(false);
    emp_window = new employers();
    emp_window->show();
    connect(emp_window,SIGNAL(send_emp_signal()),this,SLOT(SetEnabled_True()));
}

void mmainwindow::SetEnabled_True()
{
    this->setEnabled(true);
    this->setVisible(true);
}

mmainwindow::~mmainwindow()
{
    delete ui;
}
