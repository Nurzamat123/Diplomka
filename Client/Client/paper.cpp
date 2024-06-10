#include "paper.h"
#include "ui_paper.h"

paper::paper(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::paper)
{
    ui->setupUi(this);

    connect(ui->ExitButton,SIGNAL(clicked()),this,SLOT(exitButton_clicked()));

    this->resize(600,500);

    //this->setFixedWidth(800);
    //this->setFixedHeight(650);
}

paper::~paper()
{
    delete ui;
}

void paper::exitButton_clicked()
{
    emit send_pap_signal();
    this->deleteLater();
}



