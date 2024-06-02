#include "mainwindow1.h"
#include "ui_mainwindow1.h"

mainwindow1::mainwindow1(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mainwindow1)
{
    ui->setupUi(this);
}

mainwindow1::~mainwindow1()
{
    delete ui;
}
