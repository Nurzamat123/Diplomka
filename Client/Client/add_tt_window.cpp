#include "add_tt_window.h"
#include "ui_add_tt_window.h"
#include <QMessageBox>

add_tt_window::add_tt_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::add_tt_window)
{
    ui->setupUi(this);
    connect(ui->add_but,SIGNAL(clicked()),this,SLOT(add_button_clicked()));
    connect(ui->exit_but,SIGNAL(clicked()),this,SLOT(exit_button_clicked()));
}

void add_tt_window::add_button_clicked(){
    QString number,name,day,start,end;
    number = ui->number->text();
    name = ui->name->text();
    day = ui->day->text();
    start = ui->start->text();
    end = ui->end->text();

    if(number.isEmpty()||name.isEmpty() || day.isEmpty() || start.isEmpty() || end.isEmpty()){
        QMessageBox::critical(this,"Error","Вы неправильно ввели значения!",QMessageBox::Ok);
    }
    else {
        emit send_timet_strings(number,name,day,start,end);
    }

}

void add_tt_window::exit_button_clicked(){
    emit send_signal();
    this->deleteLater();
}

add_tt_window::~add_tt_window()
{
    delete ui;
}
