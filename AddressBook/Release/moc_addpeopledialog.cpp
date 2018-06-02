/****************************************************************************
** Meta object code from reading C++ file 'addpeopledialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addpeopledialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addpeopledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddPeopleDialog_t {
    QByteArrayData data[6];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddPeopleDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddPeopleDialog_t qt_meta_stringdata_AddPeopleDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "AddPeopleDialog"
QT_MOC_LITERAL(1, 16, 23), // "on_okPushButton_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 34), // "on_relationBox_currentIndexCh..."
QT_MOC_LITERAL(4, 76, 5), // "index"
QT_MOC_LITERAL(5, 82, 27) // "on_cancelPushButton_clicked"

    },
    "AddPeopleDialog\0on_okPushButton_clicked\0"
    "\0on_relationBox_currentIndexChanged\0"
    "index\0on_cancelPushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddPeopleDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void AddPeopleDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddPeopleDialog *_t = static_cast<AddPeopleDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_okPushButton_clicked(); break;
        case 1: _t->on_relationBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_cancelPushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject AddPeopleDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddPeopleDialog.data,
      qt_meta_data_AddPeopleDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddPeopleDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddPeopleDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddPeopleDialog.stringdata0))
        return static_cast<void*>(const_cast< AddPeopleDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddPeopleDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
