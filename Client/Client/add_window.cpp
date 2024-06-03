#include "add_window.h"
#include "ui_add_window.h"
#include <QMessageBox>

add_window::add_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::add_window)
{
    ui->setupUi(this);
    connect(ui->add_but,SIGNAL(clicked(bool)),this,SLOT(add_button_clicked()));
    connect(ui->exit_but,SIGNAL(clicked(bool)),this,SLOT(exit_button_clicked()));
}

void add_window::add_button_clicked(){
    QString number,name,tel,group;
    number = ui->number->text();
    name = ui->name->text();
    tel = ui->tel->text();
    group = ui->group->text();

    if(number == "" || name == "" || tel == "" || group == ""){
        QMessageBox::critical(this,"Error","Вы неправильно ввели значения!",QMessageBox::Ok);
    }
    else {
        emit send_strings(number,name,tel,group);
    }

}

void add_window::exit_button_clicked(){
    this->deleteLater();
}

add_window::~add_window()
{
    delete ui;
}
