/****************************************************************************
** Meta object code from reading C++ file 'gpoddevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/gpoddevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpoddevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPodDevice_t {
    QByteArrayData data[17];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPodDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPodDevice_t qt_meta_stringdata_GPodDevice = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GPodDevice"
QT_MOC_LITERAL(1, 11, 12), // "LoadFinished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "Itdb_iTunesDB*"
QT_MOC_LITERAL(4, 40, 2), // "db"
QT_MOC_LITERAL(5, 43, 11), // "LoaderError"
QT_MOC_LITERAL(6, 55, 7), // "message"
QT_MOC_LITERAL(7, 63, 3), // "url"
QT_MOC_LITERAL(8, 67, 13), // "DeviceLister*"
QT_MOC_LITERAL(9, 81, 6), // "lister"
QT_MOC_LITERAL(10, 88, 9), // "unique_id"
QT_MOC_LITERAL(11, 98, 14), // "DeviceManager*"
QT_MOC_LITERAL(12, 113, 7), // "manager"
QT_MOC_LITERAL(13, 121, 12), // "Application*"
QT_MOC_LITERAL(14, 134, 3), // "app"
QT_MOC_LITERAL(15, 138, 11), // "database_id"
QT_MOC_LITERAL(16, 150, 10) // "first_time"

    },
    "GPodDevice\0LoadFinished\0\0Itdb_iTunesDB*\0"
    "db\0LoaderError\0message\0url\0DeviceLister*\0"
    "lister\0unique_id\0DeviceManager*\0manager\0"
    "Application*\0app\0database_id\0first_time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPodDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   45, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       5,    1,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 8, QMetaType::QString, 0x80000000 | 11, 0x80000000 | 13, QMetaType::Int, QMetaType::Bool,    7,    9,   10,   12,   14,   15,   16,

 // constructors: name, argc, parameters, tag, flags
       0,    7,   30,    2, 0x0e /* Public */,

       0        // eod
};

void GPodDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { GPodDevice *_r = new GPodDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPodDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< Itdb_iTunesDB*(*)>(_a[1]))); break;
        case 1: _t->LoaderError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GPodDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_GPodDevice.data,
    qt_meta_data_GPodDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPodDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPodDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPodDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MusicStorage"))
        return static_cast< MusicStorage*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int GPodDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
