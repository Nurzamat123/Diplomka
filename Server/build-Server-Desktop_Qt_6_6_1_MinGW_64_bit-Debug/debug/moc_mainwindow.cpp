/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Server/mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "start_button_clicked",
    "",
    "stop_button_clicked",
    "db_button_clicked",
    "by_server",
    "str",
    "is_open_db",
    "get_login_pass",
    "gettable_slot",
    "reg_login_pass",
    "delete_slot",
    "add_new_totable_slot"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[18];
    char stringdata5[10];
    char stringdata6[4];
    char stringdata7[11];
    char stringdata8[15];
    char stringdata9[14];
    char stringdata10[15];
    char stringdata11[12];
    char stringdata12[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 20),  // "start_button_clicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 19),  // "stop_button_clicked"
        QT_MOC_LITERAL(53, 17),  // "db_button_clicked"
        QT_MOC_LITERAL(71, 9),  // "by_server"
        QT_MOC_LITERAL(81, 3),  // "str"
        QT_MOC_LITERAL(85, 10),  // "is_open_db"
        QT_MOC_LITERAL(96, 14),  // "get_login_pass"
        QT_MOC_LITERAL(111, 13),  // "gettable_slot"
        QT_MOC_LITERAL(125, 14),  // "reg_login_pass"
        QT_MOC_LITERAL(140, 11),  // "delete_slot"
        QT_MOC_LITERAL(152, 20)   // "add_new_totable_slot"
    },
    "MainWindow",
    "start_button_clicked",
    "",
    "stop_button_clicked",
    "db_button_clicked",
    "by_server",
    "str",
    "is_open_db",
    "get_login_pass",
    "gettable_slot",
    "reg_login_pass",
    "delete_slot",
    "add_new_totable_slot"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x0a,    2 /* Public */,
       4,    0,   76,    2, 0x0a,    3 /* Public */,
       5,    1,   77,    2, 0x0a,    4 /* Public */,
       7,    1,   80,    2, 0x0a,    6 /* Public */,
       8,    2,   83,    2, 0x0a,    8 /* Public */,
       9,    0,   88,    2, 0x0a,   11 /* Public */,
      10,    2,   89,    2, 0x0a,   12 /* Public */,
      11,    1,   94,    2, 0x0a,   15 /* Public */,
      12,    3,   97,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'start_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'db_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'by_server'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'is_open_db'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'get_login_pass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'gettable_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reg_login_pass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'delete_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'add_new_totable_slot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start_button_clicked(); break;
        case 1: _t->stop_button_clicked(); break;
        case 2: _t->db_button_clicked(); break;
        case 3: _t->by_server((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->is_open_db((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->get_login_pass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->gettable_slot(); break;
        case 7: _t->reg_login_pass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->delete_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->add_new_totable_slot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
