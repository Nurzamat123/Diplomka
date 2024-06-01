#include "connect_db.h"
#include "ui_connect_db.h"

connect_db::connect_db(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::connect_db)
{
    ui->setupUi(this);
}

connect_db::~connect_db()
{
    delete ui;
}
