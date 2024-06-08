/****************************************************************************
** Meta object code from reading C++ file 'connect_db.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../connect_db.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connect_db.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScon_classENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScon_classENDCLASS = QtMocHelpers::stringData(
    "con_class",
    "is_open",
    ""
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScon_classENDCLASS_t {
    uint offsetsAndSizes[6];
    char stringdata0[10];
    char stringdata1[8];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScon_classENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScon_classENDCLASS_t qt_meta_stringdata_CLASScon_classENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "con_class"
        QT_MOC_LITERAL(10, 7),  // "is_open"
        QT_MOC_LITERAL(18, 0)   // ""
    },
    "con_class",
    "is_open",
    ""
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScon_classENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject con_class::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASScon_classENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScon_classENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScon_classENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<con_class, std::true_type>,
        // method 'is_open'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void con_class::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<con_class *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->is_open((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (con_class::*)(bool );
            if (_t _q_method = &con_class::is_open; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *con_class::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *con_class::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScon_classENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int con_class::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void con_class::is_open(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSconnect_dbENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSconnect_dbENDCLASS = QtMocHelpers::stringData(
    "connect_db",
    "is_open_signal",
    "",
    "start_connect_clicked",
    "exit_button_clicked",
    "is_open_db"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSconnect_dbENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[20];
    char stringdata5[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSconnect_dbENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSconnect_dbENDCLASS_t qt_meta_stringdata_CLASSconnect_dbENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "connect_db"
        QT_MOC_LITERAL(11, 14),  // "is_open_signal"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 21),  // "start_connect_clicked"
        QT_MOC_LITERAL(49, 19),  // "exit_button_clicked"
        QT_MOC_LITERAL(69, 10)   // "is_open_db"
    },
    "connect_db",
    "is_open_signal",
    "",
    "start_connect_clicked",
    "exit_button_clicked",
    "is_open_db"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSconnect_dbENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   41,    2, 0x0a,    3 /* Public */,
       4,    0,   42,    2, 0x0a,    4 /* Public */,
       5,    1,   43,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject connect_db::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSconnect_dbENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSconnect_dbENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSconnect_dbENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<connect_db, std::true_type>,
        // method 'is_open_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'start_connect_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'is_open_db'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void connect_db::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<connect_db *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->is_open_signal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->start_connect_clicked(); break;
        case 2: _t->exit_button_clicked(); break;
        case 3: _t->is_open_db((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (connect_db::*)(bool );
            if (_t _q_method = &connect_db::is_open_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *connect_db::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *connect_db::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSconnect_dbENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int connect_db::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void connect_db::is_open_signal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
