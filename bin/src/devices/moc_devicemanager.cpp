/****************************************************************************
** Meta object code from reading C++ file 'devicemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/devicemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceManager_t {
    QByteArrayData data[22];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceManager_t qt_meta_stringdata_DeviceManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DeviceManager"
QT_MOC_LITERAL(1, 14, 15), // "DeviceConnected"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 43, 3), // "idx"
QT_MOC_LITERAL(5, 47, 18), // "DeviceDisconnected"
QT_MOC_LITERAL(6, 66, 19), // "DeviceCreatedFromDb"
QT_MOC_LITERAL(7, 86, 11), // "DeviceInfo*"
QT_MOC_LITERAL(8, 98, 4), // "info"
QT_MOC_LITERAL(9, 103, 7), // "Unmount"
QT_MOC_LITERAL(10, 111, 19), // "PhysicalDeviceAdded"
QT_MOC_LITERAL(11, 131, 2), // "id"
QT_MOC_LITERAL(12, 134, 21), // "PhysicalDeviceRemoved"
QT_MOC_LITERAL(13, 156, 21), // "PhysicalDeviceChanged"
QT_MOC_LITERAL(14, 178, 17), // "DeviceTaskStarted"
QT_MOC_LITERAL(15, 196, 12), // "TasksChanged"
QT_MOC_LITERAL(16, 209, 22), // "DeviceSongCountUpdated"
QT_MOC_LITERAL(17, 232, 5), // "count"
QT_MOC_LITERAL(18, 238, 14), // "LoadAllDevices"
QT_MOC_LITERAL(19, 253, 21), // "DeviceConnectFinished"
QT_MOC_LITERAL(20, 275, 7), // "success"
QT_MOC_LITERAL(21, 283, 15) // "AddDeviceFromDb"

    },
    "DeviceManager\0DeviceConnected\0\0"
    "QModelIndex\0idx\0DeviceDisconnected\0"
    "DeviceCreatedFromDb\0DeviceInfo*\0info\0"
    "Unmount\0PhysicalDeviceAdded\0id\0"
    "PhysicalDeviceRemoved\0PhysicalDeviceChanged\0"
    "DeviceTaskStarted\0TasksChanged\0"
    "DeviceSongCountUpdated\0count\0"
    "LoadAllDevices\0DeviceConnectFinished\0"
    "success\0AddDeviceFromDb"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   88,    2, 0x0a /* Public */,
      10,    1,   91,    2, 0x08 /* Private */,
      12,    1,   94,    2, 0x08 /* Private */,
      13,    1,   97,    2, 0x08 /* Private */,
      14,    1,  100,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    1,  104,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    2,  108,    2, 0x08 /* Private */,
      21,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   11,   20,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void DeviceManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DeviceConnected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 1: _t->DeviceDisconnected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 2: _t->DeviceCreatedFromDb((*reinterpret_cast< DeviceInfo*(*)>(_a[1]))); break;
        case 3: _t->Unmount((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 4: _t->PhysicalDeviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->PhysicalDeviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->PhysicalDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->DeviceTaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->TasksChanged(); break;
        case 9: _t->DeviceSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->LoadAllDevices(); break;
        case 11: _t->DeviceConnectFinished((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->AddDeviceFromDb((*reinterpret_cast< DeviceInfo*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceManager::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::DeviceConnected)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(QModelIndex );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::DeviceDisconnected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceManager::*)(DeviceInfo * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeviceManager::DeviceCreatedFromDb)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceManager::staticMetaObject = { {
    QMetaObject::SuperData::link<SimpleTreeModel<DeviceInfo>::staticMetaObject>(),
    qt_meta_stringdata_DeviceManager.data,
    qt_meta_data_DeviceManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceManager.stringdata0))
        return static_cast<void*>(this);
    return SimpleTreeModel<DeviceInfo>::qt_metacast(_clname);
}

int DeviceManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SimpleTreeModel<DeviceInfo>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void DeviceManager::DeviceConnected(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeviceManager::DeviceDisconnected(QModelIndex _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeviceManager::DeviceCreatedFromDb(DeviceInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
