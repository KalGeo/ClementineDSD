/****************************************************************************
** Meta object code from reading C++ file 'playlistbackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistbackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistbackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaylistBackend_t {
    QByteArrayData data[12];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistBackend_t qt_meta_stringdata_PlaylistBackend = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlaylistBackend"
QT_MOC_LITERAL(1, 16, 12), // "SavePlaylist"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 8), // "playlist"
QT_MOC_LITERAL(4, 39, 16), // "PlaylistItemList"
QT_MOC_LITERAL(5, 56, 5), // "items"
QT_MOC_LITERAL(6, 62, 11), // "last_played"
QT_MOC_LITERAL(7, 74, 29), // "smart_playlists::GeneratorPtr"
QT_MOC_LITERAL(8, 104, 7), // "dynamic"
QT_MOC_LITERAL(9, 112, 12), // "Application*"
QT_MOC_LITERAL(10, 125, 3), // "app"
QT_MOC_LITERAL(11, 129, 6) // "parent"

    },
    "PlaylistBackend\0SavePlaylist\0\0playlist\0"
    "PlaylistItemList\0items\0last_played\0"
    "smart_playlists::GeneratorPtr\0dynamic\0"
    "Application*\0app\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,   36, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, 0x80000000 | 7,    3,    5,    6,    8,

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 9, QMetaType::QObjectStar,   10,   11,
    0x80000000 | 2, 0x80000000 | 9,   10,

 // constructors: name, argc, parameters, tag, flags
       0,    2,   28,    2, 0x0e /* Public */,
       0,    1,   33,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void PlaylistBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { PlaylistBackend *_r = new PlaylistBackend((*reinterpret_cast< Application*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { PlaylistBackend *_r = new PlaylistBackend((*reinterpret_cast< Application*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SavePlaylist((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const PlaylistItemList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[4]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaylistBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlaylistBackend.data,
    qt_meta_data_PlaylistBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaylistBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaylistBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
