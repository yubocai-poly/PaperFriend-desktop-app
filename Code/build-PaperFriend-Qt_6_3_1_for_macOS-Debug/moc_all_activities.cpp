/****************************************************************************
** Meta object code from reading C++ file 'all_activities.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../PaperFriend/Frontend/all_activities.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'all_activities.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_all_activities_t {
    uint offsetsAndSizes[18];
    char stringdata0[15];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[9];
    char stringdata5[5];
    char stringdata6[32];
    char stringdata7[15];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_all_activities_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_all_activities_t qt_meta_stringdata_all_activities = {
    {
        QT_MOC_LITERAL(0, 14),  // "all_activities"
        QT_MOC_LITERAL(15, 30),  // "on_add_activity_button_clicked"
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 10),  // "addNewCell"
        QT_MOC_LITERAL(58, 8),  // "cellName"
        QT_MOC_LITERAL(67, 4),  // "type"
        QT_MOC_LITERAL(72, 31),  // "on_save_activity_button_clicked"
        QT_MOC_LITERAL(104, 14),  // "error_messages"
        QT_MOC_LITERAL(119, 9)   // "closeCell"
    },
    "all_activities",
    "on_add_activity_button_clicked",
    "",
    "addNewCell",
    "cellName",
    "type",
    "on_save_activity_button_clicked",
    "error_messages",
    "closeCell"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_all_activities[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    2,   57,    2, 0x08,    2 /* Private */,
       3,    1,   62,    2, 0x28,    5 /* Private | MethodCloned */,
       3,    0,   65,    2, 0x28,    7 /* Private | MethodCloned */,
       6,    0,   66,    2, 0x08,    8 /* Private */,
       7,    0,   67,    2, 0x08,    9 /* Private */,
       8,    1,   68,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject all_activities::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_all_activities.offsetsAndSizes,
    qt_meta_data_all_activities,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_all_activities_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<all_activities, std::true_type>,
        // method 'on_add_activity_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addNewCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'addNewCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'addNewCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save_activity_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error_messages'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'closeCell'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void all_activities::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<all_activities *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_add_activity_button_clicked(); break;
        case 1: _t->addNewCell((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 2: _t->addNewCell((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->addNewCell(); break;
        case 4: _t->on_save_activity_button_clicked(); break;
        case 5: { bool _r = _t->error_messages();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->closeCell((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *all_activities::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *all_activities::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_all_activities.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int all_activities::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
