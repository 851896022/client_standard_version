/****************************************************************************
** Meta object code from reading C++ file 'mysql.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../data/sql/mysql.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mysql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MySQL_t {
    QByteArrayData data[13];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MySQL_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MySQL_t qt_meta_stringdata_MySQL = {
    {
QT_MOC_LITERAL(0, 0, 5), // "MySQL"
QT_MOC_LITERAL(1, 6, 8), // "initThis"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "HostName"
QT_MOC_LITERAL(4, 25, 12), // "DataBaseName"
QT_MOC_LITERAL(5, 38, 8), // "UserName"
QT_MOC_LITERAL(6, 47, 8), // "PassWord"
QT_MOC_LITERAL(7, 56, 7), // "command"
QT_MOC_LITERAL(8, 64, 7), // "takeLog"
QT_MOC_LITERAL(9, 72, 3), // "log"
QT_MOC_LITERAL(10, 76, 5), // "sheet"
QT_MOC_LITERAL(11, 82, 4), // "type"
QT_MOC_LITERAL(12, 87, 4) // "user"

    },
    "MySQL\0initThis\0\0HostName\0DataBaseName\0"
    "UserName\0PassWord\0command\0takeLog\0log\0"
    "sheet\0type\0user"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MySQL[] = {

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
       1,    4,   49,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       8,    4,   61,    2, 0x0a /* Public */,
       8,    3,   70,    2, 0x2a /* Public | MethodCloned */,
       8,    2,   77,    2, 0x2a /* Public | MethodCloned */,
       8,    1,   82,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   85,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,
    QMetaType::Bool, QMetaType::QString,    2,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,   12,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Bool, QMetaType::QString,    9,
    QMetaType::Bool,

       0        // eod
};

void MySQL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MySQL *_t = static_cast<MySQL *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initThis((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 1: { bool _r = _t->command((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->takeLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->takeLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->takeLog((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->takeLog((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->takeLog();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject MySQL::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MySQL.data,
      qt_meta_data_MySQL,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MySQL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MySQL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MySQL.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MySQL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
