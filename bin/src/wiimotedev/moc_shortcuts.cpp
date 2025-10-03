/****************************************************************************
** Meta object code from reading C++ file 'shortcuts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/wiimotedev/shortcuts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shortcuts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WiimotedevShortcuts_t {
    QByteArrayData data[18];
    char stringdata0[304];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WiimotedevShortcuts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WiimotedevShortcuts_t qt_meta_stringdata_WiimotedevShortcuts = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WiimotedevShortcuts"
QT_MOC_LITERAL(1, 20, 16), // "WiiremoteActived"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "WiiremoteDeactived"
QT_MOC_LITERAL(4, 57, 18), // "WiiremoteConnected"
QT_MOC_LITERAL(5, 76, 21), // "WiiremoteDisconnected"
QT_MOC_LITERAL(6, 98, 19), // "WiiremoteLowBattery"
QT_MOC_LITERAL(7, 118, 24), // "WiiremoteCriticalBattery"
QT_MOC_LITERAL(8, 143, 29), // "SetWiimotedevInterfaceActived"
QT_MOC_LITERAL(9, 173, 7), // "actived"
QT_MOC_LITERAL(10, 181, 14), // "ReloadSettings"
QT_MOC_LITERAL(11, 196, 22), // "DbusWiimoteBatteryLife"
QT_MOC_LITERAL(12, 219, 2), // "id"
QT_MOC_LITERAL(13, 222, 4), // "life"
QT_MOC_LITERAL(14, 227, 20), // "DbusWiimoteConnected"
QT_MOC_LITERAL(15, 248, 23), // "DbusWiimoteDisconnected"
QT_MOC_LITERAL(16, 272, 25), // "DbusWiimoteGeneralButtons"
QT_MOC_LITERAL(17, 298, 5) // "value"

    },
    "WiimotedevShortcuts\0WiiremoteActived\0"
    "\0WiiremoteDeactived\0WiiremoteConnected\0"
    "WiiremoteDisconnected\0WiiremoteLowBattery\0"
    "WiiremoteCriticalBattery\0"
    "SetWiimotedevInterfaceActived\0actived\0"
    "ReloadSettings\0DbusWiimoteBatteryLife\0"
    "id\0life\0DbusWiimoteConnected\0"
    "DbusWiimoteDisconnected\0"
    "DbusWiimoteGeneralButtons\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WiimotedevShortcuts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       3,    1,   77,    2, 0x06 /* Public */,
       4,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       6,    2,   86,    2, 0x06 /* Public */,
       7,    2,   91,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   96,    2, 0x0a /* Public */,
      10,    0,   99,    2, 0x0a /* Public */,
      11,    2,  100,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,
      15,    1,  108,    2, 0x08 /* Private */,
      16,    2,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UChar,   12,   13,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::UInt,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong,   12,   17,

       0        // eod
};

void WiimotedevShortcuts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WiimotedevShortcuts *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->WiiremoteActived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->WiiremoteDeactived((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->WiiremoteConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->WiiremoteDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->WiiremoteLowBattery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->WiiremoteCriticalBattery((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->SetWiimotedevInterfaceActived((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->ReloadSettings(); break;
        case 8: _t->DbusWiimoteBatteryLife((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uchar(*)>(_a[2]))); break;
        case 9: _t->DbusWiimoteConnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 10: _t->DbusWiimoteDisconnected((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 11: _t->DbusWiimoteGeneralButtons((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WiimotedevShortcuts::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimotedevShortcuts::WiiremoteActived)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WiimotedevShortcuts::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimotedevShortcuts::WiiremoteDeactived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WiimotedevShortcuts::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimotedevShortcuts::WiiremoteConnected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WiimotedevShortcuts::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimotedevShortcuts::WiiremoteDisconnected)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WiimotedevShortcuts::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimotedevShortcuts::WiiremoteLowBattery)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WiimotedevShortcuts::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimotedevShortcuts::WiiremoteCriticalBattery)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WiimotedevShortcuts::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WiimotedevShortcuts.data,
    qt_meta_data_WiimotedevShortcuts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WiimotedevShortcuts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WiimotedevShortcuts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WiimotedevShortcuts.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WiimotedevShortcuts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void WiimotedevShortcuts::WiiremoteActived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WiimotedevShortcuts::WiiremoteDeactived(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WiimotedevShortcuts::WiiremoteConnected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WiimotedevShortcuts::WiiremoteDisconnected(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WiimotedevShortcuts::WiiremoteLowBattery(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WiimotedevShortcuts::WiiremoteCriticalBattery(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
