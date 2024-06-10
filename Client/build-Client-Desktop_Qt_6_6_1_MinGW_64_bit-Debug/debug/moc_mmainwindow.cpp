/****************************************************************************
** Meta object code from reading C++ file 'mmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Client/mmainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mmainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmmainwindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSmmainwindowENDCLASS = QtMocHelpers::stringData(
    "mmainwindow",
    "send_end_signal",
    "",
    "send_back_signal",
    "exitButton_clicked",
    "empButton_clicked",
    "cadButton_clicked",
    "paperButton_clicked",
    "timetButton_clicked",
    "SetEnabled_True"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSmmainwindowENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[19];
    char stringdata5[18];
    char stringdata6[18];
    char stringdata7[20];
    char stringdata8[20];
    char stringdata9[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSmmainwindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSmmainwindowENDCLASS_t qt_meta_stringdata_CLASSmmainwindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "mmainwindow"
        QT_MOC_LITERAL(12, 15),  // "send_end_signal"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 16),  // "send_back_signal"
        QT_MOC_LITERAL(46, 18),  // "exitButton_clicked"
        QT_MOC_LITERAL(65, 17),  // "empButton_clicked"
        QT_MOC_LITERAL(83, 17),  // "cadButton_clicked"
        QT_MOC_LITERAL(101, 19),  // "paperButton_clicked"
        QT_MOC_LITERAL(121, 19),  // "timetButton_clicked"
        QT_MOC_LITERAL(141, 15)   // "SetEnabled_True"
    },
    "mmainwindow",
    "send_end_signal",
    "",
    "send_back_signal",
    "exitButton_clicked",
    "empButton_clicked",
    "cadButton_clicked",
    "paperButton_clicked",
    "timetButton_clicked",
    "SetEnabled_True"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmmainwindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   64,    2, 0x0a,    3 /* Public */,
       5,    0,   65,    2, 0x0a,    4 /* Public */,
       6,    0,   66,    2, 0x0a,    5 /* Public */,
       7,    0,   67,    2, 0x0a,    6 /* Public */,
       8,    0,   68,    2, 0x0a,    7 /* Public */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject mmainwindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSmmainwindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmmainwindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmmainwindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mmainwindow, std::true_type>,
        // method 'send_end_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'send_back_signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'exitButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'empButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cadButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'paperButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetEnabled_True'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mmainwindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mmainwindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->send_end_signal(); break;
        case 1: _t->send_back_signal(); break;
        case 2: _t->exitButton_clicked(); break;
        case 3: _t->empButton_clicked(); break;
        case 4: _t->cadButton_clicked(); break;
        case 5: _t->paperButton_clicked(); break;
        case 6: _t->timetButton_clicked(); break;
        case 7: _t->SetEnabled_True(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mmainwindow::*)();
            if (_t _q_method = &mmainwindow::send_end_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mmainwindow::*)();
            if (_t _q_method = &mmainwindow::send_back_signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *mmainwindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mmainwindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmmainwindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int mmainwindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void mmainwindow::send_end_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mmainwindow::send_back_signal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
