/****************************************************************************
** Meta object code from reading C++ file 'cddadevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/cddadevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cddadevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CddaDevice_t {
    QByteArrayData data[19];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CddaDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CddaDevice_t qt_meta_stringdata_CddaDevice = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CddaDevice"
QT_MOC_LITERAL(1, 11, 15), // "SongsDiscovered"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "SongList"
QT_MOC_LITERAL(4, 37, 5), // "songs"
QT_MOC_LITERAL(5, 43, 11), // "DiscChanged"
QT_MOC_LITERAL(6, 55, 11), // "SongsLoaded"
QT_MOC_LITERAL(7, 67, 20), // "SongsLoadingFinished"
QT_MOC_LITERAL(8, 88, 16), // "CheckDiscChanged"
QT_MOC_LITERAL(9, 105, 3), // "url"
QT_MOC_LITERAL(10, 109, 13), // "DeviceLister*"
QT_MOC_LITERAL(11, 123, 6), // "lister"
QT_MOC_LITERAL(12, 130, 9), // "unique_id"
QT_MOC_LITERAL(13, 140, 14), // "DeviceManager*"
QT_MOC_LITERAL(14, 155, 7), // "manager"
QT_MOC_LITERAL(15, 163, 12), // "Application*"
QT_MOC_LITERAL(16, 176, 3), // "app"
QT_MOC_LITERAL(17, 180, 11), // "database_id"
QT_MOC_LITERAL(18, 192, 10) // "first_time"

    },
    "CddaDevice\0SongsDiscovered\0\0SongList\0"
    "songs\0DiscChanged\0SongsLoaded\0"
    "SongsLoadingFinished\0CheckDiscChanged\0"
    "url\0DeviceLister*\0lister\0unique_id\0"
    "DeviceManager*\0manager\0Application*\0"
    "app\0database_id\0first_time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CddaDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   63, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   43,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QUrl, 0x80000000 | 10, QMetaType::QString, 0x80000000 | 13, 0x80000000 | 15, QMetaType::Int, QMetaType::Bool,    9,   11,   12,   14,   16,   17,   18,

 // constructors: name, argc, parameters, tag, flags
       0,    7,   48,    2, 0x0e /* Public */,

       0        // eod
};

void CddaDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { CddaDevice *_r = new CddaDevice((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< DeviceLister*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< DeviceManager*(*)>(_a[4])),(*reinterpret_cast< Application*(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CddaDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 1: _t->DiscChanged(); break;
        case 2: _t->SongsLoaded((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->SongsLoadingFinished(); break;
        case 4: _t->CheckDiscChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CddaDevice::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaDevice::SongsDiscovered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CddaDevice::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaDevice::DiscChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CddaDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<ConnectedDevice::staticMetaObject>(),
    qt_meta_stringdata_CddaDevice.data,
    qt_meta_data_CddaDevice,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CddaDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CddaDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CddaDevice.stringdata0))
        return static_cast<void*>(this);
    return ConnectedDevice::qt_metacast(_clname);
}

int CddaDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConnectedDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void CddaDevice::SongsDiscovered(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CddaDevice::DiscChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
