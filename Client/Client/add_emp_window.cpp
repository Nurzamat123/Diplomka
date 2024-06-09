#include "add_emp_window.h"
#include "ui_add_emp_window.h"
#include "QMessageBox"

add_emp_window::add_emp_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::add_emp_window)
{
    ui->setupUi(this);
    connect(ui->add_but,SIGNAL(clicked()),this,SLOT(add_button_clicked()));
    connect(ui->exit_but,SIGNAL(clicked()),this,SLOT(exit_button_clicked()));
}

void add_emp_window::add_button_clicked(){
    QString number,name,inn,position,tel;
    number = ui->number->text();
    name = ui->name->text();
    inn = ui->inn->text();
    position = ui->position->text();
    tel = ui->tel->text();

    if(number.isEmpty()||name.isEmpty() || inn.isEmpty() || position.isEmpty() || tel.isEmpty()){
        QMessageBox::critical(this,"Error","Вы неправильно ввели значения!",QMessageBox::Ok);
    }
    else {
        emit send_emp_strings(number,name,inn,position,tel);
    }

}

void add_emp_window::exit_button_clicked(){
    emit send_signal();
    this->deleteLater();
}

add_emp_window::~add_emp_window()
{
    delete ui;
}
