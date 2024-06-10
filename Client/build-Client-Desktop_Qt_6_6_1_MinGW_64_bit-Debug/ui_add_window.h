/********************************************************************************
** Form generated from reading UI file 'add_window.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WINDOW_H
#define UI_ADD_WINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_window
{
public:
    QPushButton *add_but;
    QPushButton *exit_but;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *number;
    QLineEdit *name;
    QLineEdit *tel;
    QLineEdit *group;

    void setupUi(QWidget *add_window)
    {
        if (add_window->objectName().isEmpty())
            add_window->setObjectName("add_window");
        add_window->setEnabled(true);
        add_window->resize(750, 658);
        add_but = new QPushButton(add_window);
        add_but->setObjectName("add_but");
        add_but->setGeometry(QRect(299, 230, 205, 40));
        QIcon icon;
        icon.addFile(QString::fromUtf8("add_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        add_but->setIcon(icon);
        exit_but = new QPushButton(add_window);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(510, 230, 204, 40));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("cancel_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_but->setIcon(icon1);
        horizontalLayoutWidget = new QWidget(add_window);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 700, 80));
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

        tel = new QLineEdit(horizontalLayoutWidget);
        tel->setObjectName("tel");

        horizontalLayout->addWidget(tel);

        group = new QLineEdit(horizontalLayoutWidget);
        group->setObjectName("group");

        horizontalLayout->addWidget(group);


        retranslateUi(add_window);

        QMetaObject::connectSlotsByName(add_window);
    } // setupUi

    void retranslateUi(QWidget *add_window)
    {
        add_window->setWindowTitle(QCoreApplication::translate("add_window", "Form", nullptr));
        add_but->setStyleSheet(QCoreApplication::translate("add_window", "\n"
"     background-color: #4CAF50;\n"
"     color: white;\n"
"     border: none;\n"
"     border-radius: 10px;\n"
"     padding: 10px;\n"
"    ", nullptr));
        add_but->setText(QCoreApplication::translate("add_window", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        exit_but->setStyleSheet(QCoreApplication::translate("add_window", "\n"
"     background-color: #F44336;\n"
"     color: white;\n"
"     border: none;\n"
"     border-radius: 10px;\n"
"     padding: 10px;\n"
"    ", nullptr));
        exit_but->setText(QCoreApplication::translate("add_window", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        number->setStyleSheet(QCoreApplication::translate("add_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        number->setPlaceholderText(QCoreApplication::translate("add_window", "ID", nullptr));
        name->setStyleSheet(QCoreApplication::translate("add_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("add_window", "\320\244\320\230\320\236", nullptr));
        tel->setStyleSheet(QCoreApplication::translate("add_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        tel->setText(QString());
        tel->setPlaceholderText(QCoreApplication::translate("add_window", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275 \320\275\320\276\320\274\320\265\321\200", nullptr));
        group->setStyleSheet(QCoreApplication::translate("add_window", "\n"
"        border-radius: 10px;\n"
"        padding: 5px;\n"
"       ", nullptr));
        group->setPlaceholderText(QCoreApplication::translate("add_window", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_window: public Ui_add_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WINDOW_H
