/********************************************************************************
** Form generated from reading UI file 'connect_db.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_DB_H
#define UI_CONNECT_DB_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connect_db
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *title_label;
    QLabel *info_label;
    QLabel *server_name_label;
    QLineEdit *server_name_lineedit;
    QLabel *db_name_label;
    QLineEdit *db_name_lineedit;
    QLabel *login_label;
    QLineEdit *login_lineedit;
    QLabel *pass_label;
    QLineEdit *pass_lineedit;
    QSpacerItem *verticalSpacer;
    QPushButton *connect_bot;
    QPushButton *exit_bot;

    void setupUi(QWidget *connect_db)
    {
        if (connect_db->objectName().isEmpty())
            connect_db->setObjectName("connect_db");
        layoutWidget = new QWidget(connect_db);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 70, 415, 443));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        title_label = new QLabel(layoutWidget);
        title_label->setObjectName("title_label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        title_label->setFont(font);
        title_label->setStyleSheet(QString::fromUtf8("color: #4A90E2; padding: 10px;"));
        title_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title_label, 0, 0, 1, 2);

        info_label = new QLabel(layoutWidget);
        info_label->setObjectName("info_label");
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        info_label->setFont(font1);
        info_label->setStyleSheet(QString::fromUtf8("color: #4A90E2; padding: 5px;"));
        info_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(info_label, 1, 0, 1, 2);

        server_name_label = new QLabel(layoutWidget);
        server_name_label->setObjectName("server_name_label");
        server_name_label->setStyleSheet(QString::fromUtf8("color: #333333; padding: 5px;"));

        gridLayout->addWidget(server_name_label, 2, 0, 1, 1);

        server_name_lineedit = new QLineEdit(layoutWidget);
        server_name_lineedit->setObjectName("server_name_lineedit");
        server_name_lineedit->setStyleSheet(QString::fromUtf8("padding: 5px; border: 1px solid #4A90E2; border-radius: 5px;"));

        gridLayout->addWidget(server_name_lineedit, 2, 1, 1, 1);

        db_name_label = new QLabel(layoutWidget);
        db_name_label->setObjectName("db_name_label");
        db_name_label->setStyleSheet(QString::fromUtf8("color: #333333; padding: 5px;"));

        gridLayout->addWidget(db_name_label, 3, 0, 1, 1);

        db_name_lineedit = new QLineEdit(layoutWidget);
        db_name_lineedit->setObjectName("db_name_lineedit");
        db_name_lineedit->setStyleSheet(QString::fromUtf8("padding: 5px; border: 1px solid #4A90E2; border-radius: 5px;"));

        gridLayout->addWidget(db_name_lineedit, 3, 1, 1, 1);

        login_label = new QLabel(layoutWidget);
        login_label->setObjectName("login_label");
        login_label->setStyleSheet(QString::fromUtf8("color: #333333; padding: 5px;"));

        gridLayout->addWidget(login_label, 4, 0, 1, 1);

        login_lineedit = new QLineEdit(layoutWidget);
        login_lineedit->setObjectName("login_lineedit");
        login_lineedit->setStyleSheet(QString::fromUtf8("padding: 5px; border: 1px solid #4A90E2; border-radius: 5px;"));

        gridLayout->addWidget(login_lineedit, 4, 1, 1, 1);

        pass_label = new QLabel(layoutWidget);
        pass_label->setObjectName("pass_label");
        pass_label->setStyleSheet(QString::fromUtf8("color: #333333; padding: 5px;"));

        gridLayout->addWidget(pass_label, 5, 0, 1, 1);

        pass_lineedit = new QLineEdit(layoutWidget);
        pass_lineedit->setObjectName("pass_lineedit");
        pass_lineedit->setStyleSheet(QString::fromUtf8("padding: 5px; border: 1px solid #4A90E2; border-radius: 5px;"));
        pass_lineedit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pass_lineedit, 5, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 2);

        connect_bot = new QPushButton(layoutWidget);
        connect_bot->setObjectName("connect_bot");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        connect_bot->setFont(font2);
        connect_bot->setStyleSheet(QString::fromUtf8("background-color: #4CAF50; color: white; padding: 10px; border: none; border-radius: 5px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/connect_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        connect_bot->setIcon(icon);

        gridLayout->addWidget(connect_bot, 7, 0, 1, 2);

        exit_bot = new QPushButton(layoutWidget);
        exit_bot->setObjectName("exit_bot");
        exit_bot->setFont(font2);
        exit_bot->setStyleSheet(QString::fromUtf8("background-color: #F44336; color: white; padding: 10px; border: none; border-radius: 5px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/exit_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        exit_bot->setIcon(icon1);

        gridLayout->addWidget(exit_bot, 8, 0, 1, 2);


        retranslateUi(connect_db);

        QMetaObject::connectSlotsByName(connect_db);
    } // setupUi

    void retranslateUi(QWidget *connect_db)
    {
        connect_db->setWindowTitle(QCoreApplication::translate("connect_db", "Form", nullptr));
        title_label->setText(QCoreApplication::translate("connect_db", "Database Connection", nullptr));
        info_label->setText(QCoreApplication::translate("connect_db", "Enter your database connection details below:", nullptr));
        server_name_label->setText(QCoreApplication::translate("connect_db", "Server Name:", nullptr));
        server_name_lineedit->setPlaceholderText(QCoreApplication::translate("connect_db", "Enter server name", nullptr));
        db_name_label->setText(QCoreApplication::translate("connect_db", "Database Name:", nullptr));
        db_name_lineedit->setPlaceholderText(QCoreApplication::translate("connect_db", "Enter database name", nullptr));
        login_label->setText(QCoreApplication::translate("connect_db", "Login:", nullptr));
        login_lineedit->setPlaceholderText(QCoreApplication::translate("connect_db", "Enter login", nullptr));
        pass_label->setText(QCoreApplication::translate("connect_db", "Password:", nullptr));
        pass_lineedit->setPlaceholderText(QCoreApplication::translate("connect_db", "Enter password", nullptr));
        connect_bot->setText(QCoreApplication::translate("connect_db", "Connect", nullptr));
        exit_bot->setText(QCoreApplication::translate("connect_db", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connect_db: public Ui_connect_db {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_DB_H
