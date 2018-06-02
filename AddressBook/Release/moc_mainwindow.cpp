/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[395];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 5), // "fresh"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "findByName"
QT_MOC_LITERAL(4, 29, 4), // "name"
QT_MOC_LITERAL(5, 34, 14), // "findByRelation"
QT_MOC_LITERAL(6, 49, 11), // "findByMonth"
QT_MOC_LITERAL(7, 61, 5), // "month"
QT_MOC_LITERAL(8, 67, 13), // "changUsername"
QT_MOC_LITERAL(9, 81, 24), // "on_actionAdd_A_triggered"
QT_MOC_LITERAL(10, 106, 27), // "on_actionDelete_D_triggered"
QT_MOC_LITERAL(11, 134, 25), // "on_actionFind_F_triggered"
QT_MOC_LITERAL(12, 160, 29), // "on_actionBirthday_B_triggered"
QT_MOC_LITERAL(13, 190, 25), // "on_actionName_N_triggered"
QT_MOC_LITERAL(14, 216, 31), // "on_actionRelationship_triggered"
QT_MOC_LITERAL(15, 248, 27), // "on_actionBirthday_triggered"
QT_MOC_LITERAL(16, 276, 31), // "on_actionBirthday_B_2_triggered"
QT_MOC_LITERAL(17, 308, 25), // "on_actionEdit_E_triggered"
QT_MOC_LITERAL(18, 334, 25), // "on_actionHome_H_triggered"
QT_MOC_LITERAL(19, 360, 34) // "on_actionChange_Username_trig..."

    },
    "MainWindow\0fresh\0\0findByName\0name\0"
    "findByRelation\0findByMonth\0month\0"
    "changUsername\0on_actionAdd_A_triggered\0"
    "on_actionDelete_D_triggered\0"
    "on_actionFind_F_triggered\0"
    "on_actionBirthday_B_triggered\0"
    "on_actionName_N_triggered\0"
    "on_actionRelationship_triggered\0"
    "on_actionBirthday_triggered\0"
    "on_actionBirthday_B_2_triggered\0"
    "on_actionEdit_E_triggered\0"
    "on_actionHome_H_triggered\0"
    "on_actionChange_Username_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x08 /* Private */,
       3,    1,   95,    2, 0x08 /* Private */,
       5,    1,   98,    2, 0x08 /* Private */,
       6,    1,  101,    2, 0x08 /* Private */,
       8,    1,  104,    2, 0x08 /* Private */,
       9,    0,  107,    2, 0x08 /* Private */,
      10,    0,  108,    2, 0x08 /* Private */,
      11,    0,  109,    2, 0x08 /* Private */,
      12,    0,  110,    2, 0x08 /* Private */,
      13,    0,  111,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fresh(); break;
        case 1: _t->findByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->findByRelation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->findByMonth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changUsername((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_actionAdd_A_triggered(); break;
        case 6: _t->on_actionDelete_D_triggered(); break;
        case 7: _t->on_actionFind_F_triggered(); break;
        case 8: _t->on_actionBirthday_B_triggered(); break;
        case 9: _t->on_actionName_N_triggered(); break;
        case 10: _t->on_actionRelationship_triggered(); break;
        case 11: _t->on_actionBirthday_triggered(); break;
        case 12: _t->on_actionBirthday_B_2_triggered(); break;
        case 13: _t->on_actionEdit_E_triggered(); break;
        case 14: _t->on_actionHome_H_triggered(); break;
        case 15: _t->on_actionChange_Username_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
