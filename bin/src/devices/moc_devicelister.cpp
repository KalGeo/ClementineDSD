/****************************************************************************
** Meta object code from reading C++ file 'devicelister.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/devicelister.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicelister.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceLister_t {
    QByteArrayData data[12];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceLister_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceLister_t qt_meta_stringdata_DeviceLister = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DeviceLister"
QT_MOC_LITERAL(1, 13, 11), // "DeviceAdded"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 2), // "id"
QT_MOC_LITERAL(4, 29, 13), // "DeviceRemoved"
QT_MOC_LITERAL(5, 43, 13), // "DeviceChanged"
QT_MOC_LITERAL(6, 57, 13), // "DeviceMounted"
QT_MOC_LITERAL(7, 71, 10), // "request_id"
QT_MOC_LITERAL(8, 82, 7), // "success"
QT_MOC_LITERAL(9, 90, 21), // "UpdateDeviceFreeSpace"
QT_MOC_LITERAL(10, 112, 8), // "ShutDown"
QT_MOC_LITERAL(11, 121, 13) // "ThreadStarted"

    },
    "DeviceLister\0DeviceAdded\0\0id\0DeviceRemoved\0"
    "DeviceChanged\0DeviceMounted\0request_id\0"
    "success\0UpdateDeviceFreeSpace\0ShutDown\0"
    "ThreadStarted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceLister[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    1,   52,    2, 0x06 /* Public */,
       5,    1,   55,    2, 0x06 /* Public */,
       6,    3,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   65,    2, 0x0a /* Public */,
      10,    0,   68,    2, 0x0a /* Public */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Bool,    3,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DeviceLister::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceLister *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DeviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->DeviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->DeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->DeviceMounted((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->UpdateDeviceFreeSpace((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->ShutDown(); break;
        case 6: _t->ThreadStarted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceLister::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceLister::DeviceAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceLister::DeviceRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceLister::DeviceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceLister::*)(const QString & , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceLister::DeviceMounted)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceLister::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeviceLister.data,
    qt_meta_data_DeviceLister,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceLister::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceLister::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceLister.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeviceLister::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DeviceLister::DeviceAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceLister::DeviceRemoved(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceLister::DeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeviceLister::DeviceMounted(const QString & _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
