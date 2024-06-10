/********************************************************************************
** Form generated from reading UI file 'cadets.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CADETS_H
#define UI_CADETS_H

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

class Ui_cadets
{
public:
    QWidget *centralwidget;
    QWidget *centralwidget_2;
    QWidget *centralwidget_3;
    QWidget *centralwidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *scheduleLabel;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QPushButton *exitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cadets)
    {
        if (cadets->objectName().isEmpty())
            cadets->setObjectName("cadets");
        cadets->resize(800, 600);
        centralwidget = new QWidget(cadets);
        centralwidget->setObjectName("centralwidget");
        centralwidget_2 = new QWidget(centralwidget);
        centralwidget_2->setObjectName("centralwidget_2");
        centralwidget_2->setGeometry(QRect(10, 10, 790, 540));
        centralwidget_3 = new QWidget(centralwidget_2);
        centralwidget_3->setObjectName("centralwidget_3");
        centralwidget_3->setGeometry(QRect(10, 20, 770, 500));
        centralwidget_3->setLayoutDirection(Qt::LeftToRight);
        centralwidget_3->setStyleSheet(QString::fromUtf8("background-color: #297a00;\n"
"color: rgb(41, 122, 0);\n"
"\n"
"\n"
""));
        centralwidget_4 = new QWidget(centralwidget_3);
        centralwidget_4->setObjectName("centralwidget_4");
        centralwidget_4->setGeometry(QRect(50, 40, 671, 401));
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
        scheduleLabel->setStyleSheet(QString::fromUtf8("font-size: 18px; color: white; background-color: #38bd71; padding: 5px; border-radius: 5px;\n"
""));
        scheduleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(scheduleLabel);

        tableView = new QTableView(centralwidget_4);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color: white; color: black; border: 1px solid #3a9ad9; border-radius: 5px;"));

        verticalLayout->addWidget(tableView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        addButton = new QPushButton(centralwidget_4);
        addButton->setObjectName("addButton");
        addButton->setStyleSheet(QString::fromUtf8("background-color: #3ad97b; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        horizontalLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralwidget_4);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("background-color: #d93ad9; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon1);

        horizontalLayout->addWidget(deleteButton);

        exitButton = new QPushButton(centralwidget_4);
        exitButton->setObjectName("exitButton");
        exitButton->setStyleSheet(QString::fromUtf8("background-color: #d9a63a; color: white; border-radius: 10px; padding: 10px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitButton->setIcon(icon2);

        horizontalLayout->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout);

        cadets->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cadets);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        cadets->setMenuBar(menubar);
        statusbar = new QStatusBar(cadets);
        statusbar->setObjectName("statusbar");
        cadets->setStatusBar(statusbar);

        retranslateUi(cadets);

        QMetaObject::connectSlotsByName(cadets);
    } // setupUi

    void retranslateUi(QMainWindow *cadets)
    {
        cadets->setWindowTitle(QCoreApplication::translate("cadets", "MainWindow", nullptr));
        titleLabel->setText(QCoreApplication::translate("cadets", "\320\220\320\262\321\202\320\276\321\210\320\272\320\276\320\273\320\260 \320\220\320\262\321\202\320\276\320\273\321\216\320\272\321\201", nullptr));
        scheduleLabel->setText(QCoreApplication::translate("cadets", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\272\321\203\321\200\321\201\320\260\320\275\321\202\320\276\320\262", nullptr));
        addButton->setText(QCoreApplication::translate("cadets", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteButton->setText(QCoreApplication::translate("cadets", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        exitButton->setText(QCoreApplication::translate("cadets", "\320\222\321\213\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cadets: public Ui_cadets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CADETS_H
