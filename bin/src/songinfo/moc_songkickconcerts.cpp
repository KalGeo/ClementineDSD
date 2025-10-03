/****************************************************************************
** Meta object code from reading C++ file 'songkickconcerts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/songinfo/songkickconcerts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songkickconcerts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongkickConcerts_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongkickConcerts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongkickConcerts_t qt_meta_stringdata_SongkickConcerts = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SongkickConcerts"
QT_MOC_LITERAL(1, 17, 20), // "ArtistSearchFinished"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 54, 5), // "reply"
QT_MOC_LITERAL(5, 60, 2), // "id"
QT_MOC_LITERAL(6, 63, 23), // "CalendarRequestFinished"
QT_MOC_LITERAL(7, 87, 17), // "GeolocateFinished"
QT_MOC_LITERAL(8, 105, 18), // "Geolocator::LatLng"
QT_MOC_LITERAL(9, 124, 6) // "latlng"

    },
    "SongkickConcerts\0ArtistSearchFinished\0"
    "\0QNetworkReply*\0reply\0id\0"
    "CalendarRequestFinished\0GeolocateFinished\0"
    "Geolocator::LatLng\0latlng"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongkickConcerts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x08 /* Private */,
       6,    2,   34,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void SongkickConcerts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongkickConcerts *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ArtistSearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->CalendarRequestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->GeolocateFinished((*reinterpret_cast< Geolocator::LatLng(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Geolocator::LatLng >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongkickConcerts::staticMetaObject = { {
    QMetaObject::SuperData::link<SongInfoProvider::staticMetaObject>(),
    qt_meta_stringdata_SongkickConcerts.data,
    qt_meta_data_SongkickConcerts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongkickConcerts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongkickConcerts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongkickConcerts.stringdata0))
        return static_cast<void*>(this);
    return SongInfoProvider::qt_metacast(_clname);
}

int SongkickConcerts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SongInfoProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
