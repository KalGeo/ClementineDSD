/****************************************************************************
** Meta object code from reading C++ file 'librarybackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/library/librarybackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarybackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LibraryBackendInterface_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryBackendInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryBackendInterface_t qt_meta_stringdata_LibraryBackendInterface = {
    {
QT_MOC_LITERAL(0, 0, 23) // "LibraryBackendInterface"

    },
    "LibraryBackendInterface"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryBackendInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LibraryBackendInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LibraryBackendInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LibraryBackendInterface.data,
    qt_meta_data_LibraryBackendInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibraryBackendInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryBackendInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryBackendInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LibraryBackendInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LibraryBackend_t {
    QByteArrayData data[52];
    char stringdata0[653];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryBackend_t qt_meta_stringdata_LibraryBackend = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LibraryBackend"
QT_MOC_LITERAL(1, 15, 19), // "DirectoryDiscovered"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "Directory"
QT_MOC_LITERAL(4, 46, 3), // "dir"
QT_MOC_LITERAL(5, 50, 16), // "SubdirectoryList"
QT_MOC_LITERAL(6, 67, 7), // "subdirs"
QT_MOC_LITERAL(7, 75, 16), // "DirectoryDeleted"
QT_MOC_LITERAL(8, 92, 6), // "dir_id"
QT_MOC_LITERAL(9, 99, 15), // "SongsDiscovered"
QT_MOC_LITERAL(10, 115, 8), // "SongList"
QT_MOC_LITERAL(11, 124, 5), // "songs"
QT_MOC_LITERAL(12, 130, 12), // "SongsDeleted"
QT_MOC_LITERAL(13, 143, 22), // "SongsStatisticsChanged"
QT_MOC_LITERAL(14, 166, 18), // "SongsRatingChanged"
QT_MOC_LITERAL(15, 185, 13), // "DatabaseReset"
QT_MOC_LITERAL(16, 199, 21), // "TotalSongCountUpdated"
QT_MOC_LITERAL(17, 221, 5), // "total"
QT_MOC_LITERAL(18, 227, 15), // "LoadDirectories"
QT_MOC_LITERAL(19, 243, 20), // "UpdateTotalSongCount"
QT_MOC_LITERAL(20, 264, 16), // "AddOrUpdateSongs"
QT_MOC_LITERAL(21, 281, 16), // "UpdateMTimesOnly"
QT_MOC_LITERAL(22, 298, 11), // "DeleteSongs"
QT_MOC_LITERAL(23, 310, 20), // "MarkSongsUnavailable"
QT_MOC_LITERAL(24, 331, 11), // "unavailable"
QT_MOC_LITERAL(25, 343, 18), // "AddOrUpdateSubdirs"
QT_MOC_LITERAL(26, 362, 18), // "UpdateCompilations"
QT_MOC_LITERAL(27, 381, 20), // "UpdateManualAlbumArt"
QT_MOC_LITERAL(28, 402, 6), // "artist"
QT_MOC_LITERAL(29, 409, 11), // "albumartist"
QT_MOC_LITERAL(30, 421, 5), // "album"
QT_MOC_LITERAL(31, 427, 3), // "art"
QT_MOC_LITERAL(32, 431, 16), // "ForceCompilation"
QT_MOC_LITERAL(33, 448, 14), // "QList<QString>"
QT_MOC_LITERAL(34, 463, 7), // "artists"
QT_MOC_LITERAL(35, 471, 2), // "on"
QT_MOC_LITERAL(36, 474, 18), // "IncrementPlayCount"
QT_MOC_LITERAL(37, 493, 2), // "id"
QT_MOC_LITERAL(38, 496, 18), // "IncrementSkipCount"
QT_MOC_LITERAL(39, 515, 8), // "progress"
QT_MOC_LITERAL(40, 524, 15), // "ResetStatistics"
QT_MOC_LITERAL(41, 540, 16), // "UpdateSongRating"
QT_MOC_LITERAL(42, 557, 6), // "rating"
QT_MOC_LITERAL(43, 564, 17), // "UpdateSongsRating"
QT_MOC_LITERAL(44, 582, 10), // "QList<int>"
QT_MOC_LITERAL(45, 593, 7), // "id_list"
QT_MOC_LITERAL(46, 601, 15), // "SongPathChanged"
QT_MOC_LITERAL(47, 617, 4), // "Song"
QT_MOC_LITERAL(48, 622, 4), // "song"
QT_MOC_LITERAL(49, 627, 9), // "QFileInfo"
QT_MOC_LITERAL(50, 637, 8), // "new_file"
QT_MOC_LITERAL(51, 646, 6) // "parent"

    },
    "LibraryBackend\0DirectoryDiscovered\0\0"
    "Directory\0dir\0SubdirectoryList\0subdirs\0"
    "DirectoryDeleted\0dir_id\0SongsDiscovered\0"
    "SongList\0songs\0SongsDeleted\0"
    "SongsStatisticsChanged\0SongsRatingChanged\0"
    "DatabaseReset\0TotalSongCountUpdated\0"
    "total\0LoadDirectories\0UpdateTotalSongCount\0"
    "AddOrUpdateSongs\0UpdateMTimesOnly\0"
    "DeleteSongs\0MarkSongsUnavailable\0"
    "unavailable\0AddOrUpdateSubdirs\0"
    "UpdateCompilations\0UpdateManualAlbumArt\0"
    "artist\0albumartist\0album\0art\0"
    "ForceCompilation\0QList<QString>\0artists\0"
    "on\0IncrementPlayCount\0id\0IncrementSkipCount\0"
    "progress\0ResetStatistics\0UpdateSongRating\0"
    "rating\0UpdateSongsRating\0QList<int>\0"
    "id_list\0SongPathChanged\0Song\0song\0"
    "QFileInfo\0new_file\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       2,  232, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  139,    2, 0x06 /* Public */,
       7,    1,  144,    2, 0x06 /* Public */,
       9,    1,  147,    2, 0x06 /* Public */,
      12,    1,  150,    2, 0x06 /* Public */,
      13,    1,  153,    2, 0x06 /* Public */,
      14,    1,  156,    2, 0x06 /* Public */,
      15,    0,  159,    2, 0x06 /* Public */,
      16,    1,  160,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  163,    2, 0x0a /* Public */,
      19,    0,  164,    2, 0x0a /* Public */,
      20,    1,  165,    2, 0x0a /* Public */,
      21,    1,  168,    2, 0x0a /* Public */,
      22,    1,  171,    2, 0x0a /* Public */,
      23,    2,  174,    2, 0x0a /* Public */,
      23,    1,  179,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  182,    2, 0x0a /* Public */,
      26,    0,  185,    2, 0x0a /* Public */,
      27,    4,  186,    2, 0x0a /* Public */,
      32,    3,  195,    2, 0x0a /* Public */,
      36,    1,  202,    2, 0x0a /* Public */,
      38,    2,  205,    2, 0x0a /* Public */,
      40,    1,  210,    2, 0x0a /* Public */,
      41,    2,  213,    2, 0x0a /* Public */,
      43,    2,  218,    2, 0x0a /* Public */,
      46,    2,  223,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Bool,   11,   24,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   28,   29,   30,   31,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 33, QMetaType::Bool,   30,   34,   35,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   37,   39,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::Float,   37,   42,
    QMetaType::Void, 0x80000000 | 44, QMetaType::Float,   45,   42,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 49,   48,   50,

 // constructors: parameters
    0x80000000 | 2, QMetaType::QObjectStar,   51,
    0x80000000 | 2,

 // constructors: name, argc, parameters, tag, flags
       0,    1,  228,    2, 0x0e /* Public */,
       0,    0,  231,    2, 0x2e /* Public | MethodCloned */,

       0        // eod
};

void LibraryBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { LibraryBackend *_r = new LibraryBackend((*reinterpret_cast< QObject*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        case 1: { LibraryBackend *_r = new LibraryBackend();
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    } else if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DirectoryDiscovered((*reinterpret_cast< const Directory(*)>(_a[1])),(*reinterpret_cast< const SubdirectoryList(*)>(_a[2]))); break;
        case 1: _t->DirectoryDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->SongsDeleted((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 4: _t->SongsStatisticsChanged((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 5: _t->SongsRatingChanged((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 6: _t->DatabaseReset(); break;
        case 7: _t->TotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->LoadDirectories(); break;
        case 9: _t->UpdateTotalSongCount(); break;
        case 10: _t->AddOrUpdateSongs((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 11: _t->UpdateMTimesOnly((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 12: _t->DeleteSongs((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 13: _t->MarkSongsUnavailable((*reinterpret_cast< const SongList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->MarkSongsUnavailable((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 15: _t->AddOrUpdateSubdirs((*reinterpret_cast< const SubdirectoryList(*)>(_a[1]))); break;
        case 16: _t->UpdateCompilations(); break;
        case 17: _t->UpdateManualAlbumArt((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 18: _t->ForceCompilation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QString>(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 19: _t->IncrementPlayCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->IncrementSkipCount((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 21: _t->ResetStatistics((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->UpdateSongRating((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 23: _t->UpdateSongsRating((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 24: _t->SongPathChanged((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Directory >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SubdirectoryList >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SubdirectoryList >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibraryBackend::*)(const Directory & , const SubdirectoryList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::DirectoryDiscovered)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::DirectoryDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::SongsDiscovered)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::SongsDeleted)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::SongsStatisticsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::SongsRatingChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::DatabaseReset)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LibraryBackend::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryBackend::TotalSongCountUpdated)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LibraryBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<LibraryBackendInterface::staticMetaObject>(),
    qt_meta_stringdata_LibraryBackend.data,
    qt_meta_data_LibraryBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibraryBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryBackend.stringdata0))
        return static_cast<void*>(this);
    return LibraryBackendInterface::qt_metacast(_clname);
}

int LibraryBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LibraryBackendInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void LibraryBackend::DirectoryDiscovered(const Directory & _t1, const SubdirectoryList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibraryBackend::DirectoryDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibraryBackend::SongsDiscovered(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibraryBackend::SongsDeleted(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LibraryBackend::SongsStatisticsChanged(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void LibraryBackend::SongsRatingChanged(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LibraryBackend::DatabaseReset()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void LibraryBackend::TotalSongCountUpdated(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
