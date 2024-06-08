#include "mmainwindow.h"
#include "ui_mmainwindow.h"

mmainwindow::mmainwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::mmainwindow)
{
    ui->setupUi(this);
}

mmainwindow::~mmainwindow()
{
    delete ui;
}
