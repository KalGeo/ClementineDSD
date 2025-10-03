/****************************************************************************
** Meta object code from reading C++ file 'filesystemdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/filesystemdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesystemdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FilesystemDevice_t {
    QByteArrayData data[12];
    char stringdata0[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FilesystemDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FilesystemDevice_t qt_meta_stringdata_FilesystemDevice = {
    {
QT_MOC_LITERAL(0, 0, 16), // "FilesystemDevice"
QT_MOC_LITERAL(1, 17, 0), // ""
QT_MOC_LITERAL(2, 18, 3), // "url"
QT_MOC_LITERAL(3, 22, 13), // "DeviceLister*"
QT_MOC_LITERAL(4, 36, 6), // "lister"
QT_MOC_LITERAL(5, 43, 9), // "unique_id"
QT_MOC_LITERAL(6, 53, 14), // "DeviceManager*"
QT_MOC_LITERAL(7, 68, 7), // "manager"
QT_MOC_LITERAL(8, 76, 12), // "Application*"
QT_MOC_LITERAL(9, 89, 3), // "app"
QT_MOC_LITERAL(10, 93, 11), // "database_id"
QT_MOC_LITERAL(11, 105, 10) // "first_time"

    },
    "FilesystemDevice\0\0url\0DeviceLister*\0"
    "lister\0unique_id\0DeviceManager*\0manager\0"
    "Application*\0app\0database_id\0first_time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FilesystemDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   29, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 1, QMetaType::QUrl, 0x80000000 | 3, QMetaType::QString, 0x80000000 | 6, 0x80000000 | 8, QMetaType::Int, QMetaType::Bool,    2,    4,    5,    7,    9,   10,   11,

 // constructors: name, argc, parameters, tag, flags
       0,    7,   14,    1, 0x0e /* Public */,

       0        // eod
};

void FilesystemDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { FilesystemDevice *_r = new FilesystemDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject FilesystemDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_FilesystemDevice.data,
    qt_meta_data_FilesystemDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FilesystemDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FilesystemDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FilesystemDevice.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FilesystemMusicStorage"))
        return static_cast< FilesystemMusicStorage*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int FilesystemDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
