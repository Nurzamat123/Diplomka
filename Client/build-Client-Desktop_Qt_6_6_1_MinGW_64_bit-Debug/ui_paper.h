/********************************************************************************
** Form generated from reading UI file 'paper.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAPER_H
#define UI_PAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_paper
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *ExitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *paper)
    {
        if (paper->objectName().isEmpty())
            paper->setObjectName("paper");
        paper->resize(1262, 798);
        centralwidget = new QWidget(paper);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, -20, 1000, 750));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/icons/images/ForStats.png);"));
        ExitButton = new QPushButton(centralwidget);
        ExitButton->setObjectName("ExitButton");
        ExitButton->setGeometry(QRect(1000, 0, 121, 31));
        ExitButton->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 0, 0);\n"
""));
        paper->setCentralWidget(centralwidget);
        menubar = new QMenuBar(paper);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1262, 21));
        paper->setMenuBar(menubar);
        statusbar = new QStatusBar(paper);
        statusbar->setObjectName("statusbar");
        paper->setStatusBar(statusbar);

        retranslateUi(paper);

        QMetaObject::connectSlotsByName(paper);
    } // setupUi

    void retranslateUi(QMainWindow *paper)
    {
        paper->setWindowTitle(QCoreApplication::translate("paper", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("paper", "<html><head/><body><h3 style=\" margin-top:0px; margin-bottom:15px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; line-height:120%; background-color:#ffffff;\"><a name=\"11_0\"/><span style=\" font-family:'Nunito Sans','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:large; font-weight:700; color:#085294;\">1</span><span style=\" font-family:'Nunito Sans','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:large; font-weight:700; color:#085294;\">1. \320\236\320\261\320\263\320\276\320\275, \320\262\321\201\321\202\321\200\320\265\321\207\320\275\321\213\320\271 \321\200\320\260\320\267\321\212\320\265\320\267\320\264</span></h3><p><a name=\"11_1\"/><span style=\" font-family:'Nunito Sans','-apple-system','"
                        "BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:17px; font-weight:700; color:#085294;\">1</span><span style=\" font-family:'Nunito Sans','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:17px; font-weight:700; color:#085294;\">1.1.</span><span style=\" font-family:'Nunito Sans','-apple-system','BlinkMacSystemFont','Segoe UI','Roboto','Helvetica Neue','Arial','Noto Sans','sans-serif','Apple Color Emoji','Segoe UI Emoji','Segoe UI Symbol','Noto Color Emoji'; font-size:17px; color:#000000;\">\302\240\320\237\321\200\320\265\320\266\320\264\320\265 \321\207\320\265\320\274 \320\275\320\260\321\207\320\260\321\202\321\214 \320\276\320\261\320\263\320\276\320\275, \320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214 \320\276\320\261\321\217"
                        "\320\267\320\260\320\275 \321\203\320\261\320\265\320\264\320\270\321\202\321\214\321\201\321\217 \320\262 \321\202\320\276\320\274, \321\207\321\202\320\276:</span></p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        label->setWhatsThis(QCoreApplication::translate("paper", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        ExitButton->setText(QCoreApplication::translate("paper", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class paper: public Ui_paper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAPER_H
