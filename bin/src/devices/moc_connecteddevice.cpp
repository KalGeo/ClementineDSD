/****************************************************************************
** Meta object code from reading C++ file 'connecteddevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/connecteddevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connecteddevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConnectedDevice_t {
    QByteArrayData data[9];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConnectedDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConnectedDevice_t qt_meta_stringdata_ConnectedDevice = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ConnectedDevice"
QT_MOC_LITERAL(1, 16, 11), // "TaskStarted"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "id"
QT_MOC_LITERAL(4, 32, 16), // "SongCountUpdated"
QT_MOC_LITERAL(5, 49, 5), // "count"
QT_MOC_LITERAL(6, 55, 15), // "ConnectFinished"
QT_MOC_LITERAL(7, 71, 7), // "success"
QT_MOC_LITERAL(8, 79, 28) // "BackendTotalSongCountUpdated"

    },
    "ConnectedDevice\0TaskStarted\0\0id\0"
    "SongCountUpdated\0count\0ConnectFinished\0"
    "success\0BackendTotalSongCountUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConnectedDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    2,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void ConnectedDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectedDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ConnectFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->BackendTotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConnectedDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectedDevice::TaskStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConnectedDevice::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectedDevice::SongCountUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConnectedDevice::*)(const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConnectedDevice::ConnectFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConnectedDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ConnectedDevice.data,
    qt_meta_data_ConnectedDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConnectedDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConnectedDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConnectedDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MusicStorage"))
        return static_cast< MusicStorage*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<ConnectedDevice>"))
        return static_cast< std::enable_shared_from_this<ConnectedDevice>*>(this);
    return QObject::qt_metacast(_clname);
}

int ConnectedDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ConnectedDevice::TaskStarted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConnectedDevice::SongCountUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConnectedDevice::ConnectFinished(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
