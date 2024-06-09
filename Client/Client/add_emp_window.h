#ifndef ADD_EMP_WINDOW_H
#define ADD_EMP_WINDOW_H

#include <QMainWindow>

namespace Ui {
class add_emp_window;
}

class add_emp_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit add_emp_window(QWidget *parent = nullptr);
    ~add_emp_window();

private:
    Ui::add_emp_window *ui;

signals:
    void send_emp_strings(QString,QString,QString,QString,QString);
    void send_signal();

public slots:
    void add_button_clicked();
    void exit_button_clicked();
};

#endif // ADD_EMP_WINDOW_H
