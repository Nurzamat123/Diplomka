/********************************************************************************
** Form generated from reading UI file 'add_emp_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EMP_WINDOW_H
#define UI_ADD_EMP_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_emp_window
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QPushButton *add_but;
    QPushButton *exit_but;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *number;
    QLineEdit *name;
    QLineEdit *inn;
    QLineEdit *position;
    QLineEdit *tel;
    QStatusBar *statusbar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *add_emp_window)
    {
        if (add_emp_window->objectName().isEmpty())
            add_emp_window->setObjectName("add_emp_window");
        add_emp_window->resize(800, 600);
        centralwidget = new QWidget(add_emp_window);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(10, 20, 780, 360));
        add_but = new QPushButton(centralwidget_2);
        add_but->setObjectName("add_but");
        add_but->setGeometry(QRect(319, 220, 205, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8("add_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_but->setIcon(icon);
        exit_but = new QPushButton(centralwidget_2);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(530, 220, 204, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("cancel_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_but->setIcon(icon1);
        horizontalLayoutWidget = new QWidget(centralwidget_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(40, 100, 700, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        number = new QLineEdit(horizontalLayoutWidget);
        number->setObjectName("number");
        number->setEnabled(true);
        QFont font;
        font.setPointSize(9);
        number->setFont(font);

        horizontalLayout->addWidget(number);

        name = new QLineEdit(horizontalLayoutWidget);
        name->setObjectName("name");

        horizontalLayout->addWidget(name);

        inn = new QLineEdit(horizontalLayoutWidget);
        inn->setObjectName("inn");

        horizontalLayout->addWidget(inn);

        position = new QLineEdit(horizontalLayoutWidget);
        position->setObjectName("position");

        horizontalLayout->addWidget(position);

        tel = new QLineEdit(horizontalLayoutWidget);
        tel->setObjectName("tel");

        horizontalLayout->addWidget(tel);

        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName("statusbar_2");
        statusbar_2->setGeometry(QRect(10, 20, 3, 22));
        add_emp_window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(add_emp_window);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        add_emp_window->setMenuBar(menubar);
        statusbar = new QStatusBar(add_emp_window);
        statusbar->setObjectName("statusbar");
        add_emp_window->setStatusBar(statusbar);

        retranslateUi(add_emp_window);

        QMetaObject::connectSlotsByName(add_emp_window);
    } // setupUi

    void retranslateUi(QMainWindow *add_emp_window)
    {
        add_emp_window->setWindowTitle(QCoreApplication::translate("add_emp_window", "MainWindow", nullptr));
        add_but->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"     background-color: #4CAF50;\n"
"     color: white;\n"
"     border: none;\n"
"     border-radius: 10px;\n"
"     padding: 10px;\n"
"    ", nullptr));
        add_but->setText(QCoreApplication::translate("add_emp_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        exit_but->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"     background-color: #F44336;\n"
"     color: white;\n"
"     border: none;\n"
"     border-radius: 10px;\n"
"     padding: 10px;\n"
"    ", nullptr));
        exit_but->setText(QCoreApplication::translate("add_emp_window", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        number->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        number->setPlaceholderText(QCoreApplication::translate("add_emp_window", "ID", nullptr));
        name->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("add_emp_window", "\320\244\320\230\320\236", nullptr));
        inn->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        inn->setText(QString());
        inn->setPlaceholderText(QCoreApplication::translate("add_emp_window", "INN", nullptr));
        position->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        position->setPlaceholderText(QCoreApplication::translate("add_emp_window", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        tel->setStyleSheet(QCoreApplication::translate("add_emp_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        tel->setPlaceholderText(QCoreApplication::translate("add_emp_window", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_emp_window: public Ui_add_emp_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EMP_WINDOW_H
