#include "add_window.h"
#include "ui_add_window.h"

add_window::add_window(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::add_window)
{
    ui->setupUi(this);
}

add_window::~add_window()
{
    delete ui;
}
