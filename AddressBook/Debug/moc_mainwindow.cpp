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
    QByteArrayData data[19];
    char stringdata0[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "findByName"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 14), // "findByRelation"
QT_MOC_LITERAL(5, 43, 11), // "findByMonth"
QT_MOC_LITERAL(6, 55, 5), // "month"
QT_MOC_LITERAL(7, 61, 14), // "showDataChange"
QT_MOC_LITERAL(8, 76, 7), // "topLeft"
QT_MOC_LITERAL(9, 84, 11), // "bottomRight"
QT_MOC_LITERAL(10, 96, 24), // "on_actionAdd_A_triggered"
QT_MOC_LITERAL(11, 121, 27), // "on_actionDelete_D_triggered"
QT_MOC_LITERAL(12, 149, 25), // "on_actionFind_F_triggered"
QT_MOC_LITERAL(13, 175, 29), // "on_actionBirthday_B_triggered"
QT_MOC_LITERAL(14, 205, 25), // "on_actionName_N_triggered"
QT_MOC_LITERAL(15, 231, 31), // "on_actionRelationship_triggered"
QT_MOC_LITERAL(16, 263, 27), // "on_actionBirthday_triggered"
QT_MOC_LITERAL(17, 291, 31), // "on_actionBirthday_B_2_triggered"
QT_MOC_LITERAL(18, 323, 34) // "on_actionBirthdayEmail_E_trig..."

    },
    "MainWindow\0findByName\0\0name\0findByRelation\0"
    "findByMonth\0month\0showDataChange\0"
    "topLeft\0bottomRight\0on_actionAdd_A_triggered\0"
    "on_actionDelete_D_triggered\0"
    "on_actionFind_F_triggered\0"
    "on_actionBirthday_B_triggered\0"
    "on_actionName_N_triggered\0"
    "on_actionRelationship_triggered\0"
    "on_actionBirthday_triggered\0"
    "on_actionBirthday_B_2_triggered\0"
    "on_actionBirthdayEmail_E_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       7,    2,   88,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    8,    9,
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
        case 0: _t->findByName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->findByRelation((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->findByMonth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->showDataChange((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QModelIndex(*)>(_a[2]))); break;
        case 4: _t->on_actionAdd_A_triggered(); break;
        case 5: _t->on_actionDelete_D_triggered(); break;
        case 6: _t->on_actionFind_F_triggered(); break;
        case 7: _t->on_actionBirthday_B_triggered(); break;
        case 8: _t->on_actionName_N_triggered(); break;
        case 9: _t->on_actionRelationship_triggered(); break;
        case 10: _t->on_actionBirthday_triggered(); break;
        case 11: _t->on_actionBirthday_B_2_triggered(); break;
        case 12: _t->on_actionBirthdayEmail_E_triggered(); break;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
