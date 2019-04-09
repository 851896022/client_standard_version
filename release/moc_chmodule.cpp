/****************************************************************************
** Meta object code from reading C++ file 'chmodule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UI/main/chmodule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chmodule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChModule_t {
    QByteArrayData data[16];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChModule_t qt_meta_stringdata_ChModule = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ChModule"
QT_MOC_LITERAL(1, 9, 12), // "changeListen"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "type"
QT_MOC_LITERAL(4, 28, 2), // "ch"
QT_MOC_LITERAL(5, 31, 38), // "on_ChModule_customContextMenu..."
QT_MOC_LITERAL(6, 70, 3), // "pos"
QT_MOC_LITERAL(7, 74, 24), // "on_startListen_triggered"
QT_MOC_LITERAL(8, 99, 6), // "refApm"
QT_MOC_LITERAL(9, 106, 6), // "refSim"
QT_MOC_LITERAL(10, 113, 26), // "on_addListenList_triggered"
QT_MOC_LITERAL(11, 140, 24), // "on_startRepair_triggered"
QT_MOC_LITERAL(12, 165, 8), // "initThis"
QT_MOC_LITERAL(13, 174, 18), // "onStarListenThisCH"
QT_MOC_LITERAL(14, 193, 7), // "onAlarm"
QT_MOC_LITERAL(15, 201, 9) // "startTime"

    },
    "ChModule\0changeListen\0\0type\0ch\0"
    "on_ChModule_customContextMenuRequested\0"
    "pos\0on_startListen_triggered\0refApm\0"
    "refSim\0on_addListenList_triggered\0"
    "on_startRepair_triggered\0initThis\0"
    "onStarListenThisCH\0onAlarm\0startTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChModule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   69,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    2,   78,    2, 0x0a /* Public */,
      14,    3,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDateTime,    4,    3,   15,

       0        // eod
};

void ChModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChModule *_t = static_cast<ChModule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeListen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_ChModule_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->on_startListen_triggered(); break;
        case 3: _t->refApm(); break;
        case 4: _t->refSim(); break;
        case 5: _t->on_addListenList_triggered(); break;
        case 6: _t->on_startRepair_triggered(); break;
        case 7: _t->initThis(); break;
        case 8: _t->onStarListenThisCH((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->onAlarm((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ChModule::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChModule::changeListen)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ChModule::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ChModule.data,
      qt_meta_data_ChModule,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ChModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChModule.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ChModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ChModule::changeListen(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
