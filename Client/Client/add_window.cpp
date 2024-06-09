#include "add_window.h"
#include "ui_add_window.h"
#include <QMessageBox>

add_window::add_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_window)
{
    ui->setupUi(this);
    connect(ui->add_but,SIGNAL(clicked()),this,SLOT(add_button_clicked()));
    connect(ui->exit_but,SIGNAL(clicked()),this,SLOT(exit_button_clicked()));
}

void add_window::add_button_clicked(){
    QString number,name,tel,group;
    number = ui->number->text();
    name = ui->name->text();
    tel = ui->tel->text();
    group = ui->group->text();

    if(number.isEmpty()||name.isEmpty() || tel.isEmpty() || group.isEmpty()){
        QMessageBox::critical(this,"Error","Вы неправильно ввели значения!",QMessageBox::Ok);
    }
    else {
        emit send_cadstrings(number,name,tel,group);
    }

}

void add_window::exit_button_clicked(){
    emit send_cad_signal();
    this->deleteLater();
}

add_window::~add_window()
{
    delete ui;
}
