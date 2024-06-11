/********************************************************************************
** Form generated from reading UI file 'mmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MMAINWINDOW_H
#define UI_MMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mmainwindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *nameofAuto_label;
    QLabel *maintext_label;
    QVBoxLayout *verticalLayout_2;
    QPushButton *EmpButton;
    QPushButton *CadButton;
    QPushButton *paperButton;
    QPushButton *timetButton;
    QPushButton *exitButton;
    QStatusBar *statusbar_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mmainwindow)
    {
        if (mmainwindow->objectName().isEmpty())
            mmainwindow->setObjectName("mmainwindow");
        mmainwindow->resize(800, 600);
        centralwidget = new QWidget(mmainwindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(0, -10, 811, 551));
        centralwidget_2->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        gridLayoutWidget = new QWidget(centralwidget_2);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(70, 30, 671, 491));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        nameofAuto_label = new QLabel(gridLayoutWidget);
        nameofAuto_label->setObjectName("nameofAuto_label");
        nameofAuto_label->setStyleSheet(QString::fromUtf8("font-size: 32px; font-weight: bold;\n"
"background: color #d80000;\n"
""));
        nameofAuto_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(nameofAuto_label);

        maintext_label = new QLabel(gridLayoutWidget);
        maintext_label->setObjectName("maintext_label");
        QFont font;
        font.setBold(true);
        maintext_label->setFont(font);
        maintext_label->setStyleSheet(QString::fromUtf8("font-size: 20px; margin-bottom: 20px;\n"
"background: color #008800;\n"
"\n"
"\n"
""));
        maintext_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(maintext_label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        EmpButton = new QPushButton(gridLayoutWidget);
        EmpButton->setObjectName("EmpButton");
        EmpButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"                 background-color: #b97b00;\n"
"                 color: white;\n"
"                 font-size: 16px;\n"
"                 padding: 10px;\n"
"                 border-radius: 5px;\n"
"             }\n"
"             QPushButton:hover {\n"
"                 background-color: #45a049;\n"
"             }\n"
"            "));

        verticalLayout_2->addWidget(EmpButton);

        CadButton = new QPushButton(gridLayoutWidget);
        CadButton->setObjectName("CadButton");
        CadButton->setStyleSheet(QString::fromUtf8("\n"
"             QPushButton {\n"
"                 background-color: #b97b00;\n"
"                 color: white;\n"
"                 font-size: 16px;\n"
"                 padding: 10px;\n"
"                 border-radius: 5px;\n"
"             }\n"
"             QPushButton:hover {\n"
"                 background-color: #0b7dda;\n"
"             }\n"
"            "));

        verticalLayout_2->addWidget(CadButton);

        paperButton = new QPushButton(gridLayoutWidget);
        paperButton->setObjectName("paperButton");
        paperButton->setStyleSheet(QString::fromUtf8("\n"
"             QPushButton {\n"
"                 background-color: #b97b00;\n"
"                 color: white;\n"
"                 font-size: 16px;\n"
"                 padding: 10px;\n"
"                 border-radius: 5px;\n"
"             }\n"
"             QPushButton:hover {\n"
"                 background-color: #da190b;\n"
"             }\n"
"            "));

        verticalLayout_2->addWidget(paperButton);

        timetButton = new QPushButton(gridLayoutWidget);
        timetButton->setObjectName("timetButton");
        timetButton->setStyleSheet(QString::fromUtf8("\n"
"             QPushButton {\n"
"                 background-color: #b97b00;\n"
"                 color: white;\n"
"                 font-size: 16px;\n"
"                 padding: 10px;\n"
"                 border-radius: 5px;\n"
"             }\n"
"             QPushButton:hover {\n"
"                 background-color: #e68900;\n"
"             }\n"
"            "));

        verticalLayout_2->addWidget(timetButton);

        exitButton = new QPushButton(gridLayoutWidget);
        exitButton->setObjectName("exitButton");
        exitButton->setStyleSheet(QString::fromUtf8("\n"
"             QPushButton {\n"
"                 background-color: #d80000;\n"
"                 color: white;\n"
"                 font-size: 16px;\n"
"                 padding: 10px;\n"
"                 border-radius: 5px;\n"
"             }\n"
"             QPushButton:hover {\n"
"                 background-color: #757575;\n"
"             }\n"
"            "));

        verticalLayout_2->addWidget(exitButton);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        statusbar_2 = new QStatusBar(centralwidget);
        statusbar_2->setObjectName("statusbar_2");
        statusbar_2->setGeometry(QRect(0, -10, 3, 22));
        mmainwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mmainwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        mmainwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mmainwindow);
        statusbar->setObjectName("statusbar");
        mmainwindow->setStatusBar(statusbar);

        retranslateUi(mmainwindow);

        QMetaObject::connectSlotsByName(mmainwindow);
    } // setupUi

    void retranslateUi(QMainWindow *mmainwindow)
    {
        mmainwindow->setWindowTitle(QCoreApplication::translate("mmainwindow", "MainWindow", nullptr));
        nameofAuto_label->setText(QCoreApplication::translate("mmainwindow", "\320\220\320\262\321\202\320\276\321\210\320\272\320\276\320\273\320\260 \320\220\320\262\321\202\320\276\320\273\321\216\320\272\321\201", nullptr));
        maintext_label->setText(QCoreApplication::translate("mmainwindow", "\320\223\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        EmpButton->setText(QCoreApplication::translate("mmainwindow", "\320\244\320\276\321\200\320\274\320\260 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262", nullptr));
        CadButton->setText(QCoreApplication::translate("mmainwindow", "\320\244\320\276\321\200\320\274\320\260 \320\272\321\203\321\200\321\201\320\260\320\275\321\202\320\276\320\262", nullptr));
        paperButton->setText(QCoreApplication::translate("mmainwindow", "\320\243\321\207\320\265\320\261\320\275\321\213\320\271 \320\274\320\260\321\202\320\265\321\200\320\270\320\260\320\273", nullptr));
        timetButton->setText(QCoreApplication::translate("mmainwindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        exitButton->setText(QCoreApplication::translate("mmainwindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mmainwindow: public Ui_mmainwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MMAINWINDOW_H
