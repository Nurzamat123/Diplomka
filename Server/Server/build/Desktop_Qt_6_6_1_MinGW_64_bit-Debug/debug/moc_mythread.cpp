/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mythread.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmythreadENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSmythreadENDCLASS = QtMocHelpers::stringData(
    "mythread",
    "send_to_server",
    "",
    "send_login_pass",
    "login",
    "pass",
    "timetable_signal",
    "hellomessage_signal",
    "reg_login_pass",
    "vector_del_list",
    "add_strings",
    "add_timetstrings",
    "read_client",
    "send_to_client",
    "QByteArray&"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSmythreadENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[9];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[17];
    char stringdata7[20];
    char stringdata8[15];
    char stringdata9[16];
    char stringdata10[12];
    char stringdata11[17];
    char stringdata12[12];
    char stringdata13[15];
    char stringdata14[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSmythreadENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSmythreadENDCLASS_t qt_meta_stringdata_CLASSmythreadENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "mythread"
        QT_MOC_LITERAL(9, 14),  // "send_to_server"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 15),  // "send_login_pass"
        QT_MOC_LITERAL(41, 5),  // "login"
        QT_MOC_LITERAL(47, 4),  // "pass"
        QT_MOC_LITERAL(52, 16),  // "timetable_signal"
        QT_MOC_LITERAL(69, 19),  // "hellomessage_signal"
        QT_MOC_LITERAL(89, 14),  // "reg_login_pass"
        QT_MOC_LITERAL(104, 15),  // "vector_del_list"
        QT_MOC_LITERAL(120, 11),  // "add_strings"
        QT_MOC_LITERAL(132, 16),  // "add_timetstrings"
        QT_MOC_LITERAL(149, 11),  // "read_client"
        QT_MOC_LITERAL(161, 14),  // "send_to_client"
        QT_MOC_LITERAL(176, 11)   // "QByteArray&"
    },
    "mythread",
    "send_to_server",
    "",
    "send_login_pass",
    "login",
    "pass",
    "timetable_signal",
    "hellomessage_signal",
    "reg_login_pass",
    "vector_del_list",
    "add_strings",
    "add_timetstrings",
    "read_client",
    "send_to_client",
    "QByteArray&"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmythreadENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       3,    2,   77,    2, 0x06,    3 /* Public */,
       6,    0,   82,    2, 0x06,    6 /* Public */,
       7,    0,   83,    2, 0x06,    7 /* Public */,
       8,    2,   84,    2, 0x06,    8 /* Public */,
       9,    1,   89,    2, 0x06,   11 /* Public */,
      10,    4,   92,    2, 0x06,   13 /* Public */,
      11,    5,  101,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  112,    2, 0x0a,   24 /* Public */,
      13,    1,  113,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject mythread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_CLASSmythreadENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmythreadENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmythreadENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mythread, std::true_type>,
        // method 'send_to_server'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'send_login_pass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'timetable_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hellomessage_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reg_login_pass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'vector_del_list'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'add_strings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'add_timetstrings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'read_client'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_to_client'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray &, std::false_type>
    >,
    nullptr
} };

void mythread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mythread *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send_to_server((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->send_login_pass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->timetable_signal(); break;
        case 3: _t->hellomessage_signal(); break;
        case 4: _t->reg_login_pass((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->vector_del_list((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->add_strings((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 7: _t->add_timetstrings((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 8: _t->read_client(); break;
        case 9: _t->send_to_client((*reinterpret_cast< std::add_pointer_t<QByteArray&>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mythread::*)(QString );
            if (_t _q_method = &mythread::send_to_server; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mythread::*)(QString , QString );
            if (_t _q_method = &mythread::send_login_pass; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (mythread::*)();
            if (_t _q_method = &mythread::timetable_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (mythread::*)();
            if (_t _q_method = &mythread::hellomessage_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (mythread::*)(QString , QString );
            if (_t _q_method = &mythread::reg_login_pass; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (mythread::*)(QString );
            if (_t _q_method = &mythread::vector_del_list; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (mythread::*)(QString , QString , QString , QString );
            if (_t _q_method = &mythread::add_strings; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (mythread::*)(QString , QString , QString , QString , QString );
            if (_t _q_method = &mythread::add_timetstrings; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *mythread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mythread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmythreadENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int mythread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void mythread::send_to_server(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void mythread::send_login_pass(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mythread::timetable_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void mythread::hellomessage_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void mythread::reg_login_pass(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void mythread::vector_del_list(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void mythread::add_strings(QString _t1, QString _t2, QString _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void mythread::add_timetstrings(QString _t1, QString _t2, QString _t3, QString _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
