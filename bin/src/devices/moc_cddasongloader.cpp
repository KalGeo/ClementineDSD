/****************************************************************************
** Meta object code from reading C++ file 'cddasongloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/cddasongloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cddasongloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CddaSongLoader_t {
    QByteArrayData data[19];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CddaSongLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CddaSongLoader_t qt_meta_stringdata_CddaSongLoader = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CddaSongLoader"
QT_MOC_LITERAL(1, 15, 12), // "SongsUpdated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "SongList"
QT_MOC_LITERAL(4, 38, 5), // "songs"
QT_MOC_LITERAL(5, 44, 8), // "Finished"
QT_MOC_LITERAL(6, 53, 11), // "SongsLoaded"
QT_MOC_LITERAL(7, 65, 19), // "SongsDurationLoaded"
QT_MOC_LITERAL(8, 85, 19), // "SongsMetadataLoaded"
QT_MOC_LITERAL(9, 105, 23), // "MusicBrainzDiscIdLoaded"
QT_MOC_LITERAL(10, 129, 18), // "musicbrainz_discid"
QT_MOC_LITERAL(11, 148, 15), // "LoadAudioCDTags"
QT_MOC_LITERAL(12, 164, 26), // "ProcessMusicBrainzResponse"
QT_MOC_LITERAL(13, 191, 6), // "artist"
QT_MOC_LITERAL(14, 198, 5), // "album"
QT_MOC_LITERAL(15, 204, 29), // "MusicBrainzClient::ResultList"
QT_MOC_LITERAL(16, 234, 7), // "results"
QT_MOC_LITERAL(17, 242, 13), // "SetDiscTracks"
QT_MOC_LITERAL(18, 256, 10) // "has_titles"

    },
    "CddaSongLoader\0SongsUpdated\0\0SongList\0"
    "songs\0Finished\0SongsLoaded\0"
    "SongsDurationLoaded\0SongsMetadataLoaded\0"
    "MusicBrainzDiscIdLoaded\0musicbrainz_discid\0"
    "LoadAudioCDTags\0ProcessMusicBrainzResponse\0"
    "artist\0album\0MusicBrainzClient::ResultList\0"
    "results\0SetDiscTracks\0has_titles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CddaSongLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    1,   63,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,
       8,    1,   69,    2, 0x06 /* Public */,
       9,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   75,    2, 0x08 /* Private */,
      12,    3,   78,    2, 0x08 /* Private */,
      17,    2,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,   18,

       0        // eod
};

void CddaSongLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CddaSongLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SongsUpdated((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 1: _t->Finished(); break;
        case 2: _t->SongsLoaded((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->SongsDurationLoaded((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 4: _t->SongsMetadataLoaded((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 5: _t->MusicBrainzDiscIdLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->LoadAudioCDTags((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->ProcessMusicBrainzResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[3]))); break;
        case 8: _t->SetDiscTracks((*reinterpret_cast< const SongList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CddaSongLoader::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaSongLoader::SongsUpdated)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CddaSongLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaSongLoader::Finished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CddaSongLoader::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaSongLoader::SongsLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CddaSongLoader::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaSongLoader::SongsDurationLoaded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CddaSongLoader::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaSongLoader::SongsMetadataLoaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CddaSongLoader::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CddaSongLoader::MusicBrainzDiscIdLoaded)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CddaSongLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CddaSongLoader.data,
    qt_meta_data_CddaSongLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CddaSongLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CddaSongLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CddaSongLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CddaSongLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CddaSongLoader::SongsUpdated(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CddaSongLoader::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CddaSongLoader::SongsLoaded(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CddaSongLoader::SongsDurationLoaded(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CddaSongLoader::SongsMetadataLoaded(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CddaSongLoader::MusicBrainzDiscIdLoaded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
