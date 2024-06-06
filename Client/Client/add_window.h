#ifndef ADD_WINDOW_H
#define ADD_WINDOW_H

#include <QWidget>


namespace Ui {
class add_window;
}

class add_window : public QWidget
{
    Q_OBJECT

public:
    explicit add_window(QWidget *parent = nullptr);
    ~add_window();

private:
    Ui::add_window *ui;

signals:
    void send_strings(QString,QString,QString,QString);
    void send_signal();

public slots:
    void add_button_clicked();
    void exit_button_clicked();
};

#endif // ADD_WINDOW_H
