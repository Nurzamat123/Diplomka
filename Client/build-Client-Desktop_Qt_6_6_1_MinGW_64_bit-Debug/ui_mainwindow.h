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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStatusBar *statusBar;
    QWidget *centralwidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *scheduleLabel;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *viewStatsButton;
    QPushButton *mainMenuButton;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(840, 580);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(171, 171, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        statusBar = new QStatusBar(centralwidget);
        statusBar->setObjectName("statusBar");
        statusBar->setGeometry(QRect(0, 10, 3, 22));
        centralwidget_4 = new QWidget(centralwidget);
        centralwidget_4->setObjectName("centralwidget_4");
        centralwidget_4->setGeometry(QRect(50, 20, 671, 401));
        verticalLayout = new QVBoxLayout(centralwidget_4);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(centralwidget_4);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("font-size: 24px; color: white; background-color: #3a9ad9; padding: 10px; border-radius: 10px;"));
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        scheduleLabel = new QLabel(centralwidget_4);
        scheduleLabel->setObjectName("scheduleLabel");
        scheduleLabel->setStyleSheet(QString::fromUtf8("font-size: 18px; color: white; background-color: #3a9ad9; padding: 5px; border-radius: 5px;"));
        scheduleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(scheduleLabel);

        tableView = new QTableView(centralwidget_4);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border: 1px solid #3a9ad9; border-radius: 5px;"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        viewStatsButton = new QPushButton(centralwidget_4);
        viewStatsButton->setObjectName("viewStatsButton");
        viewStatsButton->setStyleSheet(QString::fromUtf8("background-color: #3a9ad9; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/articles.png"), QSize(), QIcon::Normal, QIcon::Off);
        viewStatsButton->setIcon(icon);

        horizontalLayout->addWidget(viewStatsButton);

        mainMenuButton = new QPushButton(centralwidget_4);
        mainMenuButton->setObjectName("mainMenuButton");
        mainMenuButton->setStyleSheet(QString::fromUtf8("background-color: #d93a3a; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainMenuButton->setIcon(icon1);

        horizontalLayout->addWidget(mainMenuButton);

        addButton = new QPushButton(centralwidget_4);
        addButton->setObjectName("addButton");
        addButton->setStyleSheet(QString::fromUtf8("background-color: #3ad97b; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon2);

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralwidget_4);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: #d93ad9; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon3);

        horizontalLayout->addWidget(deleteButton);

        exitButton = new QPushButton(centralwidget_4);
        exitButton->setObjectName("exitButton");
        exitButton->setStyleSheet(QString::fromUtf8("background-color: #d9a63a; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon4);

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 840, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\210\320\272\320\276\320\273\320\260 \320\220\320\262\321\202\320\276\320\273\321\216\320\272\321\201", nullptr));
        scheduleLabel->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\267\320\260\320\275\321\217\321\202\320\270\320\271", nullptr));
        viewStatsButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\201\321\202\320\260\321\202\321\214\320\270 \320\260\320\262\321\202\320\276\321\210\320\272\320\276\320\273\321\213", nullptr));
        mainMenuButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\271\321\202\320\270 \320\275\320\260 \320\263\320\273\320\260\320\262\320\275\320\276\320\265 \320\274\320\265\320\275\321\216", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
