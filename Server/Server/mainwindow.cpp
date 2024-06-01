#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    server = new myserver;

    connect(ui->start_button,SIGNAL(clicked(bool)),this,SLOT(start_button_clicked()));
    connect(ui->stop_button,SIGNAL(clicked(bool)),this,SLOT(stop_button_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::start_button_clicked()
{

}

void MainWindow::stop_button_clicked()
{

}

void MainWindow::db_button_clicked()
{

}

void MainWindow::by_server(QString str)
{

}

void MainWindow::is_open_db(bool)
{

}

void MainWindow::get_login_pass(QString, QString)
{

}

void MainWindow::gettable_slot()
{

}

void MainWindow::reg_login_pass(QString, QString)
{

}

void MainWindow::delete_slot(QString)
{

}

void MainWindow::add_newval_totable_slot(QString, QString, QString)
{

}
