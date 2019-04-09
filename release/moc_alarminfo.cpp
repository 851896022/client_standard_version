/****************************************************************************
** Meta object code from reading C++ file 'alarminfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../UI/left/alarminfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarminfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlarmInfo_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlarmInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlarmInfo_t qt_meta_stringdata_AlarmInfo = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AlarmInfo"
QT_MOC_LITERAL(1, 10, 12), // "onSetClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "onResetClicked"
QT_MOC_LITERAL(4, 39, 14), // "onReachClicked"
QT_MOC_LITERAL(5, 54, 8), // "initThis"
QT_MOC_LITERAL(6, 63, 9), // "alarmTest"
QT_MOC_LITERAL(7, 73, 18), // "onReceiveAlarmInfo"
QT_MOC_LITERAL(8, 92, 19), // "on_btnReset_clicked"
QT_MOC_LITERAL(9, 112, 17), // "on_btnSet_clicked"
QT_MOC_LITERAL(10, 130, 19) // "on_btnReach_clicked"

    },
    "AlarmInfo\0onSetClicked\0\0onResetClicked\0"
    "onReachClicked\0initThis\0alarmTest\0"
    "onReceiveAlarmInfo\0on_btnReset_clicked\0"
    "on_btnSet_clicked\0on_btnReach_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlarmInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    3,   64,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QDateTime,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AlarmInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AlarmInfo *_t = static_cast<AlarmInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onSetClicked(); break;
        case 1: _t->onResetClicked(); break;
        case 2: _t->onReachClicked(); break;
        case 3: _t->initThis(); break;
        case 4: _t->alarmTest(); break;
        case 5: _t->onReceiveAlarmInfo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QDateTime(*)>(_a[3]))); break;
        case 6: _t->on_btnReset_clicked(); break;
        case 7: _t->on_btnSet_clicked(); break;
        case 8: _t->on_btnReach_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (AlarmInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlarmInfo::onSetClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AlarmInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlarmInfo::onResetClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AlarmInfo::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlarmInfo::onReachClicked)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject AlarmInfo::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_AlarmInfo.data,
      qt_meta_data_AlarmInfo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AlarmInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlarmInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlarmInfo.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int AlarmInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void AlarmInfo::onSetClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AlarmInfo::onResetClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AlarmInfo::onReachClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
