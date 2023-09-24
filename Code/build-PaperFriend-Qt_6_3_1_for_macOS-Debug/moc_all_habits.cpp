/****************************************************************************
** Meta object code from reading C++ file 'all_habits.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../PaperFriend/Frontend/all_habits.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'all_habits.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_All_Habits_t {
    uint offsetsAndSizes[8];
    char stringdata0[11];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_All_Habits_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_All_Habits_t qt_meta_stringdata_All_Habits = {
    {
        QT_MOC_LITERAL(0, 10),  // "All_Habits"
        QT_MOC_LITERAL(11, 27),  // "on_add_habit_button_clicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 28)   // "on_save_habit_button_clicked"
    },
    "All_Habits",
    "on_add_habit_button_clicked",
    "",
    "on_save_habit_button_clicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_All_Habits[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    0,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject All_Habits::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_All_Habits.offsetsAndSizes,
    qt_meta_data_All_Habits,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_All_Habits_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<All_Habits, std::true_type>,
        // method 'on_add_habit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_save_habit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void All_Habits::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<All_Habits *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_add_habit_button_clicked(); break;
        case 1: _t->on_save_habit_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *All_Habits::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *All_Habits::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_All_Habits.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int All_Habits::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {
struct qt_meta_stringdata_Add_Habit_Cell_t {
    uint offsetsAndSizes[6];
    char stringdata0[15];
    char stringdata1[31];
    char stringdata2[1];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Add_Habit_Cell_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Add_Habit_Cell_t qt_meta_stringdata_Add_Habit_Cell = {
    {
        QT_MOC_LITERAL(0, 14),  // "Add_Habit_Cell"
        QT_MOC_LITERAL(15, 30),  // "on_delete_habit_button_clicked"
        QT_MOC_LITERAL(46, 0)   // ""
    },
    "Add_Habit_Cell",
    "on_delete_habit_button_clicked",
    ""
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Add_Habit_Cell[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Add_Habit_Cell::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Add_Habit_Cell.offsetsAndSizes,
    qt_meta_data_Add_Habit_Cell,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Add_Habit_Cell_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Add_Habit_Cell, std::true_type>,
        // method 'on_delete_habit_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Add_Habit_Cell::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Add_Habit_Cell *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_delete_habit_button_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *Add_Habit_Cell::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Add_Habit_Cell::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Add_Habit_Cell.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Add_Habit_Cell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
