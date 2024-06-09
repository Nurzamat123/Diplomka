#ifndef PAPER_H
#define PAPER_H

#include <QMainWindow>

namespace Ui {
class paper;
}

class paper : public QMainWindow
{
    Q_OBJECT

public:
    explicit paper(QWidget *parent = nullptr);
    ~paper();

signals:
    void send_pap_signal();

private slots:
    void exitButton_clicked();

private:
    Ui::paper *ui;
};

#endif // PAPER_H
