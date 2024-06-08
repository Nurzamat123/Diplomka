#ifndef ADD_TT_WINDOW_H
#define ADD_TT_WINDOW_H

#include <QMainWindow>

namespace Ui {
class add_tt_window;
}

class add_tt_window : public QMainWindow
{
    Q_OBJECT

public:



    explicit add_tt_window(QWidget *parent = nullptr);
    ~add_tt_window();

private:
    Ui::add_tt_window *ui;

signals:
    void send_timet_strings(QString,QString,QString,QString,QString);
    void send_signal();

public slots:
    void add_button_clicked();
    void exit_button_clicked();
};

#endif // ADD_TT_WINDOW_H
