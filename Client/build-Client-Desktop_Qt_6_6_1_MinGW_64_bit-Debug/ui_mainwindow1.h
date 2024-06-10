/********************************************************************************
** Form generated from reading UI file 'mainwindow1.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW1_H
#define UI_MAINWINDOW1_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow1
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLineEdit *login_line;
    QLabel *info_check_label;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *button_enter;
    QLineEdit *pass_line;
    QLabel *info_label_enter;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *reg_pass_line;
    QLabel *info_label_reg;
    QPushButton *button_reg;
    QLineEdit *reg_login_line;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *mainwindow1)
    {
        if (mainwindow1->objectName().isEmpty())
            mainwindow1->setObjectName("mainwindow1");
        mainwindow1->resize(702, 621);
        gridLayout = new QGridLayout(mainwindow1);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(mainwindow1);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName("gridLayout_4");
        login_line = new QLineEdit(tab);
        login_line->setObjectName("login_line");
        login_line->setCursorMoveStyle(Qt::VisualMoveStyle);

        gridLayout_4->addWidget(login_line, 1, 0, 1, 1);

        info_check_label = new QLabel(tab);
        info_check_label->setObjectName("info_check_label");
        info_check_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(info_check_label, 5, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 7, 0, 1, 1);

        button_enter = new QPushButton(tab);
        button_enter->setObjectName("button_enter");
        button_enter->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(61, 140, 62);\n"
"       background-color: #4CAF50;\n"
"         color: white;\n"
"         border: none;\n"
"         border-radius: 10px;\n"
"         padding: 10px;\n"
"}\n"
"          QPushButton:hover {\n"
"              background-color: #3d8c3e;\n"
"          }\n"
"        "));
        QIcon icon;
        icon.addFile(QString::fromUtf8("login_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_enter->setIcon(icon);

        gridLayout_4->addWidget(button_enter, 3, 0, 1, 1);

        pass_line = new QLineEdit(tab);
        pass_line->setObjectName("pass_line");
        pass_line->setEchoMode(QLineEdit::Password);

        gridLayout_4->addWidget(pass_line, 2, 0, 1, 1);

        info_label_enter = new QLabel(tab);
        info_label_enter->setObjectName("info_label_enter");
        info_label_enter->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(info_label_enter, 6, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_3, 0, 0, 1, 1);

        reg_pass_line = new QLineEdit(tab_2);
        reg_pass_line->setObjectName("reg_pass_line");
        reg_pass_line->setEchoMode(QLineEdit::Password);

        gridLayout_5->addWidget(reg_pass_line, 2, 0, 1, 1);

        info_label_reg = new QLabel(tab_2);
        info_label_reg->setObjectName("info_label_reg");
        info_label_reg->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(info_label_reg, 4, 0, 1, 1);

        button_reg = new QPushButton(tab_2);
        button_reg->setObjectName("button_reg");
        button_reg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"         background-color: #2196F3;\n"
"         color: white;\n"
"         border: none;\n"
"         border-radius: 10px;\n"
"         padding: 10px;\n"
"  }\n"
"          QPushButton:hover {\n"
"              background-color: #1a74ba;\n"
"          }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("register_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_reg->setIcon(icon1);

        gridLayout_5->addWidget(button_reg, 3, 0, 1, 1);

        reg_login_line = new QLineEdit(tab_2);
        reg_login_line->setObjectName("reg_login_line");

        gridLayout_5->addWidget(reg_login_line, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 5, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(mainwindow1);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainwindow1);
    } // setupUi

    void retranslateUi(QWidget *mainwindow1)
    {
        mainwindow1->setWindowTitle(QCoreApplication::translate("mainwindow1", "Form", nullptr));
        login_line->setStyleSheet(QCoreApplication::translate("mainwindow1", "\n"
"         border-radius: 10px;\n"
"         padding: 5px;\n"
"        ", nullptr));
        login_line->setPlaceholderText(QCoreApplication::translate("mainwindow1", "Login", nullptr));
        info_check_label->setText(QString());
        button_enter->setText(QCoreApplication::translate("mainwindow1", "\320\222\321\205\320\276\320\264", nullptr));
        pass_line->setStyleSheet(QCoreApplication::translate("mainwindow1", "\n"
"         border-radius: 10px;\n"
"         padding: 5px;\n"
"        ", nullptr));
        pass_line->setPlaceholderText(QCoreApplication::translate("mainwindow1", "Password", nullptr));
        info_label_enter->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("mainwindow1", "\320\222\321\205\320\276\320\264", nullptr));
        reg_pass_line->setStyleSheet(QCoreApplication::translate("mainwindow1", "\n"
"         border-radius: 10px;\n"
"         padding: 5px;\n"
"        ", nullptr));
        reg_pass_line->setPlaceholderText(QCoreApplication::translate("mainwindow1", "Password", nullptr));
        info_label_reg->setText(QString());
        button_reg->setText(QCoreApplication::translate("mainwindow1", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        reg_login_line->setStyleSheet(QCoreApplication::translate("mainwindow1", "\n"
"         border-radius: 10px;\n"
"         padding: 5px;\n"
"        ", nullptr));
        reg_login_line->setPlaceholderText(QCoreApplication::translate("mainwindow1", "Login", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("mainwindow1", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainwindow1: public Ui_mainwindow1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW1_H
