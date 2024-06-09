#include "cadets.h"
#include "ui_cadets.h"

cadets::cadets(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cadets)
{
    ui->setupUi(this);
}

cadets::~cadets()
{
    delete ui;
}
