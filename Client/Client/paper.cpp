#include "paper.h"
#include "ui_paper.h"

paper::paper(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::paper)
{
    ui->setupUi(this);

    this->resize(600,500);

    this->setFixedWidth(1000);
    this->setFixedHeight(750);
}

paper::~paper()
{
    delete ui;
}

void paper::on_pushButton_clicked()
{
    this->deleteLater();
}

