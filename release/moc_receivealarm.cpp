/****************************************************************************
** Meta object code from reading C++ file 'receivealarm.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../data/alarm/receivealarm.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'receivealarm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReceiveAlarm_t {
    QByteArrayData data[13];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReceiveAlarm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReceiveAlarm_t qt_meta_stringdata_ReceiveAlarm = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ReceiveAlarm"
QT_MOC_LITERAL(1, 13, 9), // "simChange"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 2), // "ch"
QT_MOC_LITERAL(4, 27, 3), // "sim"
QT_MOC_LITERAL(5, 31, 5), // "alarm"
QT_MOC_LITERAL(6, 37, 8), // "initThis"
QT_MOC_LITERAL(7, 46, 15), // "connectToServer"
QT_MOC_LITERAL(8, 62, 11), // "onReadyRead"
QT_MOC_LITERAL(9, 74, 7), // "onError"
QT_MOC_LITERAL(10, 82, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(11, 111, 11), // "onConnected"
QT_MOC_LITERAL(12, 123, 14) // "onDisConnected"

    },
    "ReceiveAlarm\0simChange\0\0ch\0sim\0alarm\0"
    "initThis\0connectToServer\0onReadyRead\0"
    "onError\0QAbstractSocket::SocketError\0"
    "onConnected\0onDisConnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReceiveAlarm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   54,    2, 0x06 /* Public */,
       5,    3,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   66,    2, 0x0a /* Public */,
       7,    0,   67,    2, 0x0a /* Public */,
       8,    0,   68,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      11,    0,   72,    2, 0x0a /* Public */,
      12,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Float,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDateTime,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ReceiveAlarm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReceiveAlarm *_t = static_cast<ReceiveAlarm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simChange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 1: _t->alarm((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3]))); break;
        case 2: _t->initThis(); break;
        case 3: _t->connectToServer(); break;
        case 4: _t->onReadyRead(); break;
        case 5: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->onConnected(); break;
        case 7: _t->onDisConnected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ReceiveAlarm::*_t)(int , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveAlarm::simChange)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ReceiveAlarm::*_t)(int , int , QDateTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ReceiveAlarm::alarm)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ReceiveAlarm::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ReceiveAlarm.data,
      qt_meta_data_ReceiveAlarm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ReceiveAlarm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReceiveAlarm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReceiveAlarm.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReceiveAlarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ReceiveAlarm::simChange(int _t1, float _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ReceiveAlarm::alarm(int _t1, int _t2, QDateTime _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
