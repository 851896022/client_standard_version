/****************************************************************************
** Meta object code from reading C++ file 'listen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UI/left/listen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Listen_t {
    QByteArrayData data[20];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Listen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Listen_t qt_meta_stringdata_Listen = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Listen"
QT_MOC_LITERAL(1, 7, 10), // "listenInfo"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 14), // "onChangeListen"
QT_MOC_LITERAL(4, 34, 4), // "type"
QT_MOC_LITERAL(5, 39, 2), // "ch"
QT_MOC_LITERAL(6, 42, 17), // "refPlayListWidget"
QT_MOC_LITERAL(7, 60, 8), // "onSwitch"
QT_MOC_LITERAL(8, 69, 8), // "initThis"
QT_MOC_LITERAL(9, 78, 15), // "connectToServer"
QT_MOC_LITERAL(10, 94, 11), // "onReadyRead"
QT_MOC_LITERAL(11, 106, 7), // "onError"
QT_MOC_LITERAL(12, 114, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(13, 143, 11), // "onConnected"
QT_MOC_LITERAL(14, 155, 14), // "onDisConnected"
QT_MOC_LITERAL(15, 170, 8), // "sendData"
QT_MOC_LITERAL(16, 179, 16), // "on_putUp_clicked"
QT_MOC_LITERAL(17, 196, 18), // "on_putDown_clicked"
QT_MOC_LITERAL(18, 215, 20), // "on_putDelete_clicked"
QT_MOC_LITERAL(19, 236, 22) // "on_startOrStop_clicked"

    },
    "Listen\0listenInfo\0\0onChangeListen\0"
    "type\0ch\0refPlayListWidget\0onSwitch\0"
    "initThis\0connectToServer\0onReadyRead\0"
    "onError\0QAbstractSocket::SocketError\0"
    "onConnected\0onDisConnected\0sendData\0"
    "on_putUp_clicked\0on_putDown_clicked\0"
    "on_putDelete_clicked\0on_startOrStop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Listen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   94,    2, 0x0a /* Public */,
       6,    0,   99,    2, 0x0a /* Public */,
       7,    0,  100,    2, 0x0a /* Public */,
       8,    0,  101,    2, 0x0a /* Public */,
       9,    0,  102,    2, 0x0a /* Public */,
      10,    0,  103,    2, 0x0a /* Public */,
      11,    1,  104,    2, 0x0a /* Public */,
      13,    0,  107,    2, 0x0a /* Public */,
      14,    0,  108,    2, 0x0a /* Public */,
      15,    1,  109,    2, 0x0a /* Public */,
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Listen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Listen *_t = static_cast<Listen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->listenInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onChangeListen((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->refPlayListWidget(); break;
        case 3: _t->onSwitch(); break;
        case 4: _t->initThis(); break;
        case 5: _t->connectToServer(); break;
        case 6: _t->onReadyRead(); break;
        case 7: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 8: _t->onConnected(); break;
        case 9: _t->onDisConnected(); break;
        case 10: _t->sendData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_putUp_clicked(); break;
        case 12: _t->on_putDown_clicked(); break;
        case 13: _t->on_putDelete_clicked(); break;
        case 14: _t->on_startOrStop_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
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
            typedef void (Listen::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Listen::listenInfo)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Listen::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_Listen.data,
      qt_meta_data_Listen,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Listen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Listen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Listen.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int Listen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Listen::listenInfo(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
