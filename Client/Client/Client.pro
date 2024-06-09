QT       += core gui
QT       += core network sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_emp_window.cpp \
    add_tt_window.cpp \
    add_window.cpp \
    cadets.cpp \
    employers.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    mmainwindow.cpp \
    paper.cpp

HEADERS += \
    add_emp_window.h \
    add_tt_window.h \
    add_window.h \
    cadets.h \
    employers.h \
    mainwindow.h \
    mainwindow1.h \
    mmainwindow.h \
    paper.h

FORMS += \
    add_emp_window.ui \
    add_tt_window.ui \
    add_window.ui \
    cadets.ui \
    employers.ui \
    mainwindow.ui \
    mainwindow1.ui \
    mmainwindow.ui \
    paper.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    icons.qrc
