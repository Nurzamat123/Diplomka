/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *buttonLayou;
    QPushButton *start_button;
    QPushButton *stop_button;
    QPushButton *db_button;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(50, 20, 711, 521));
        verticalLayout = new QVBoxLayout(centralwidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(centralwidget_2);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMinimumSize(QSize(0, 400));
        textBrowser->setStyleSheet(QString::fromUtf8("\n"
"        QTextBrowser {\n"
"            background-color: #f0f0f0;\n"
"            border: 1px solid #cccccc;\n"
"            border-radius: 10px;\n"
"            padding: 10px;\n"
"            font-family: Arial, sans-serif;\n"
"            font-size: 14pt;\n"
"        }\n"
"rgb(136, 255, 134);\n"
"       "));

        verticalLayout->addWidget(textBrowser);

        buttonLayou = new QHBoxLayout();
        buttonLayou->setSpacing(10);
        buttonLayou->setObjectName("buttonLayou");
        buttonLayou->setContentsMargins(20, 10, 20, 10);
        start_button = new QPushButton(centralwidget_2);
        start_button->setObjectName("start_button");
        start_button->setMinimumSize(QSize(80, 40));

        buttonLayou->addWidget(start_button);

        stop_button = new QPushButton(centralwidget_2);
        stop_button->setObjectName("stop_button");
        stop_button->setMinimumSize(QSize(80, 40));

        buttonLayou->addWidget(stop_button);

        db_button = new QPushButton(centralwidget_2);
        db_button->setObjectName("db_button");
        db_button->setMinimumSize(QSize(80, 40));
        db_button->setStyleSheet(QString::fromUtf8("\n"
"          QPushButton {\n"
"              background-color: #008CBA;\n"
"              color: white;\n"
"              border: none;\n"
"              border-radius: 10px;\n"
"              padding: 10px 20px;\n"
"              font-size: 14pt;\n"
"          }\n"
"          QPushButton:hover {\n"
"              background-color: #007bb5;\n"
"          }\n"
"         "));

        buttonLayou->addWidget(db_button);


        verticalLayout->addLayout(buttonLayou);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        start_button->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"          QPushButton {\n"
"              background-color: #4CAF50;\n"
"              color: white;\n"
"              border: none;\n"
"              border-radius: 10px;\n"
"              padding: 10px 20px;\n"
"              font-size: 14pt;\n"
"          }\n"
"          QPushButton:hover {\n"
"              background-color: #45a049;\n"
"          }\n"
"         ", nullptr));
        start_button->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        stop_button->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"          QPushButton {\n"
"              background-color: #f44336;\n"
"              color: white;\n"
"              border: none;\n"
"              border-radius: 10px;\n"
"              padding: 10px 20px;\n"
"              font-size: 14pt;\n"
"          }\n"
"          QPushButton:hover {\n"
"              background-color: #da190b;\n"
"          }\n"
"         ", nullptr));
        stop_button->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        db_button->setText(QCoreApplication::translate("MainWindow", "Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
