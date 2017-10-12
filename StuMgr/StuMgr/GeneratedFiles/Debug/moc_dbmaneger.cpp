/****************************************************************************
** Meta object code from reading C++ file 'dbmaneger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbmaneger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbmaneger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_dbManeger_t {
    QByteArrayData data[11];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dbManeger_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dbManeger_t qt_meta_stringdata_dbManeger = {
    {
QT_MOC_LITERAL(0, 0, 9), // "dbManeger"
QT_MOC_LITERAL(1, 10, 11), // "showAllUser"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "bluSearch"
QT_MOC_LITERAL(4, 33, 8), // "exSearch"
QT_MOC_LITERAL(5, 42, 7), // "closeDB"
QT_MOC_LITERAL(6, 50, 6), // "initDB"
QT_MOC_LITERAL(7, 57, 7), // "writeDB"
QT_MOC_LITERAL(8, 65, 14), // "QList<student>"
QT_MOC_LITERAL(9, 80, 8), // "students"
QT_MOC_LITERAL(10, 89, 8) // "initData"

    },
    "dbManeger\0showAllUser\0\0bluSearch\0"
    "exSearch\0closeDB\0initDB\0writeDB\0"
    "QList<student>\0students\0initData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dbManeger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

       0        // eod
};

void dbManeger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        dbManeger *_t = static_cast<dbManeger *>(_o);
        switch (_id) {
        case 0: _t->showAllUser(); break;
        case 1: _t->bluSearch(); break;
        case 2: _t->exSearch(); break;
        case 3: _t->closeDB(); break;
        case 4: _t->initDB(); break;
        case 5: _t->writeDB((*reinterpret_cast< QList<student>(*)>(_a[1]))); break;
        case 6: _t->initData(); break;
        default: ;
        }
    }
}

const QMetaObject dbManeger::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_dbManeger.data,
      qt_meta_data_dbManeger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *dbManeger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dbManeger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_dbManeger.stringdata))
        return static_cast<void*>(const_cast< dbManeger*>(this));
    return QDialog::qt_metacast(_clname);
}

int dbManeger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
