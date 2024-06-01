#ifndef CONNECT_DB_H
#define CONNECT_DB_H

#include <QWidget>
#include <QSqlDatabase>
#include <QThread>

namespace Ui {
class connect_db;
}

class connect_db : public QWidget
{
    Q_OBJECT

public:
    explicit connect_db(QWidget *parent = nullptr);
    ~connect_db();

private:
    Ui::connect_db *ui;
};

#endif // CONNECT_DB_H
