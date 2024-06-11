/********************************************************************************
** Form generated from reading UI file 'add_tt_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TT_WINDOW_H
#define UI_ADD_TT_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_tt_window
{
public:
    QWidget *centralwidget;
    QPushButton *add_but;
    QPushButton *exit_but;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *number;
    QLineEdit *name;
    QLineEdit *day;
    QLineEdit *start;
    QLineEdit *end;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *add_tt_window)
    {
        if (add_tt_window->objectName().isEmpty())
            add_tt_window->setObjectName("add_tt_window");
        add_tt_window->resize(800, 600);
        add_tt_window->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(add_tt_window);
        centralwidget->setObjectName("centralwidget");
        add_but = new QPushButton(centralwidget);
        add_but->setObjectName("add_but");
        add_but->setGeometry(QRect(319, 220, 205, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8("add_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_but->setIcon(icon);
        exit_but = new QPushButton(centralwidget);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(530, 220, 204, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("cancel_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_but->setIcon(icon1);
        horizontalLayoutWidget = new QWidget(centralwidget);
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

        day = new QLineEdit(horizontalLayoutWidget);
        day->setObjectName("day");

        horizontalLayout->addWidget(day);

        start = new QLineEdit(horizontalLayoutWidget);
        start->setObjectName("start");

        horizontalLayout->addWidget(start);

        end = new QLineEdit(horizontalLayoutWidget);
        end->setObjectName("end");

        horizontalLayout->addWidget(end);

        add_tt_window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(add_tt_window);
        statusbar->setObjectName("statusbar");
        add_tt_window->setStatusBar(statusbar);

        retranslateUi(add_tt_window);

        QMetaObject::connectSlotsByName(add_tt_window);
    } // setupUi

    void retranslateUi(QMainWindow *add_tt_window)
    {
        add_tt_window->setWindowTitle(QCoreApplication::translate("add_tt_window", "MainWindow", nullptr));
        add_but->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"     background-color: #4CAF50;\n"
"     color: white;\n"
"     border: none;\n"
"     border-radius: 10px;\n"
"     padding: 10px;\n"
"    ", nullptr));
        add_but->setText(QCoreApplication::translate("add_tt_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        exit_but->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"     background-color: #F44336;\n"
"     color: white;\n"
"     border: none;\n"
"     border-radius: 10px;\n"
"     padding: 10px;\n"
"    ", nullptr));
        exit_but->setText(QCoreApplication::translate("add_tt_window", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        number->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        number->setPlaceholderText(QCoreApplication::translate("add_tt_window", "ID", nullptr));
        name->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("add_tt_window", "\320\244\320\230\320\236", nullptr));
        day->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        day->setText(QString());
        day->setPlaceholderText(QCoreApplication::translate("add_tt_window", "\320\224\320\265\320\275\321\214 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        start->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        start->setPlaceholderText(QCoreApplication::translate("add_tt_window", "\320\235\320\260\321\207\320\260\320\273\320\276 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        end->setStyleSheet(QCoreApplication::translate("add_tt_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        end->setPlaceholderText(QCoreApplication::translate("add_tt_window", "\320\232\320\276\320\275\320\265\321\206 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_tt_window: public Ui_add_tt_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TT_WINDOW_H
