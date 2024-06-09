#ifndef CADETS_H
#define CADETS_H

#include <QMainWindow>

namespace Ui {
class cadets;
}

class cadets : public QMainWindow
{
    Q_OBJECT

public:
    explicit cadets(QWidget *parent = nullptr);
    ~cadets();

private:
    Ui::cadets *ui;
};

#endif // CADETS_H
