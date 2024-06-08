#ifndef MMAINWINDOW_H
#define MMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class mmainwindow;
}

class mmainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mmainwindow(QWidget *parent = nullptr);
    ~mmainwindow();

private:
    Ui::mmainwindow *ui;
};

#endif // MMAINWINDOW_H
