#include "mmainwindow.h"
#include "ui_mmainwindow.h"

mmainwindow::mmainwindow(QTcpSocket &_socket, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mmainwindow)
{
    ui->setupUi(this);

    this->socket=&_socket;

    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(exitButton_clicked()));
    connect(ui->EmpButton,SIGNAL(clicked()),this,SLOT(empButton_clicked()));
    connect(ui->CadButton,SIGNAL(clicked()),this,SLOT(cadButton_clicked()));
    connect(ui->paperButton,SIGNAL(clicked()),this,SLOT(paperButton_clicked()));
    connect(ui->timetButton,SIGNAL(clicked()),this,SLOT(timetButton_clicked()));
}

void mmainwindow::exitButton_clicked()
{
    emit send_end_signal();
    this->deleteLater();
}

void mmainwindow::empButton_clicked()
{
    this->setEnabled(false);
    this->setVisible(false);
    emp_window = new employers(*socket);
    emp_window->show();
    connect(emp_window,SIGNAL(send_emp_signal()),this,SLOT(SetEnabled_True()));
}

void mmainwindow::cadButton_clicked()
{

    this->setEnabled(false);
    this->setVisible(false);
    cad_window = new cadets(*socket);
    cad_window->show();
    connect(cad_window,SIGNAL(send_cad_signal()),this,SLOT(SetEnabled_True()));
}

void mmainwindow::paperButton_clicked()
{
    this->setEnabled(false);
    this->setVisible(false);
    pap_window = new paper;
    pap_window->show();
    connect(pap_window,SIGNAL(send_pap_signal()),this,SLOT(SetEnabled_True()));
}

void mmainwindow::timetButton_clicked()
{
    emit send_back_signal();
    this->deleteLater();
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
