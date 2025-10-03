/****************************************************************************
** Meta object code from reading C++ file 'mtpdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/mtpdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mtpdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MtpDevice_t {
    QByteArrayData data[16];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MtpDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MtpDevice_t qt_meta_stringdata_MtpDevice = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MtpDevice"
QT_MOC_LITERAL(1, 10, 12), // "LoadFinished"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "success"
QT_MOC_LITERAL(4, 32, 11), // "LoaderError"
QT_MOC_LITERAL(5, 44, 7), // "message"
QT_MOC_LITERAL(6, 52, 3), // "url"
QT_MOC_LITERAL(7, 56, 13), // "DeviceLister*"
QT_MOC_LITERAL(8, 70, 6), // "lister"
QT_MOC_LITERAL(9, 77, 9), // "unique_id"
QT_MOC_LITERAL(10, 87, 14), // "DeviceManager*"
QT_MOC_LITERAL(11, 102, 7), // "manager"
QT_MOC_LITERAL(12, 110, 12), // "Application*"
QT_MOC_LITERAL(13, 123, 3), // "app"
QT_MOC_LITERAL(14, 127, 11), // "database_id"
QT_MOC_LITERAL(15, 139, 10) // "first_time"

    },
    "MtpDevice\0LoadFinished\0\0success\0"
    "LoaderError\0message\0url\0DeviceLister*\0"
    "lister\0unique_id\0DeviceManager*\0manager\0"
    "Application*\0app\0database_id\0first_time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MtpDevice[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    5,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 7, QMetaType::QString, 0x80000000 | 10, 0x80000000 | 12, QMetaType::Int, QMetaType::Bool,    6,    8,    9,   11,   13,   14,   15,

 // constructors: name, argc, parameters, tag, flags
       0,    7,   30,    2, 0x0e /* Public */,

       0        // eod
};

void MtpDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { MtpDevice *_r = new MtpDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MtpDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->LoaderError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MtpDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_MtpDevice.data,
    qt_meta_data_MtpDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MtpDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MtpDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MtpDevice.stringdata0))
        return static_cast<void*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int MtpDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
