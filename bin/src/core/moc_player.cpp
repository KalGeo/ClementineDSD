/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerInterface_t {
    QByteArrayData data[49];
    char stringdata0[495];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerInterface_t qt_meta_stringdata_PlayerInterface = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlayerInterface"
QT_MOC_LITERAL(1, 16, 7), // "Playing"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "Paused"
QT_MOC_LITERAL(4, 32, 7), // "Stopped"
QT_MOC_LITERAL(5, 40, 16), // "PlaylistFinished"
QT_MOC_LITERAL(6, 57, 13), // "VolumeChanged"
QT_MOC_LITERAL(7, 71, 6), // "volume"
QT_MOC_LITERAL(8, 78, 5), // "Error"
QT_MOC_LITERAL(9, 84, 7), // "message"
QT_MOC_LITERAL(10, 92, 12), // "TrackSkipped"
QT_MOC_LITERAL(11, 105, 15), // "PlaylistItemPtr"
QT_MOC_LITERAL(12, 121, 9), // "old_track"
QT_MOC_LITERAL(13, 131, 15), // "PositionChanged"
QT_MOC_LITERAL(14, 147, 12), // "microseconds"
QT_MOC_LITERAL(15, 160, 6), // "Seeked"
QT_MOC_LITERAL(16, 167, 26), // "SongChangeRequestProcessed"
QT_MOC_LITERAL(17, 194, 3), // "url"
QT_MOC_LITERAL(18, 198, 5), // "valid"
QT_MOC_LITERAL(19, 204, 12), // "ForceShowOSD"
QT_MOC_LITERAL(20, 217, 4), // "Song"
QT_MOC_LITERAL(21, 222, 6), // "toggle"
QT_MOC_LITERAL(22, 229, 14), // "ReloadSettings"
QT_MOC_LITERAL(23, 244, 6), // "PlayAt"
QT_MOC_LITERAL(24, 251, 1), // "i"
QT_MOC_LITERAL(25, 253, 24), // "Engine::TrackChangeFlags"
QT_MOC_LITERAL(26, 278, 6), // "change"
QT_MOC_LITERAL(27, 285, 9), // "reshuffle"
QT_MOC_LITERAL(28, 295, 9), // "PlayPause"
QT_MOC_LITERAL(29, 305, 17), // "RestartOrPrevious"
QT_MOC_LITERAL(30, 323, 4), // "Next"
QT_MOC_LITERAL(31, 328, 9), // "NextAlbum"
QT_MOC_LITERAL(32, 338, 8), // "Previous"
QT_MOC_LITERAL(33, 347, 9), // "SetVolume"
QT_MOC_LITERAL(34, 357, 5), // "value"
QT_MOC_LITERAL(35, 363, 8), // "VolumeUp"
QT_MOC_LITERAL(36, 372, 10), // "VolumeDown"
QT_MOC_LITERAL(37, 383, 6), // "SeekTo"
QT_MOC_LITERAL(38, 390, 7), // "seconds"
QT_MOC_LITERAL(39, 398, 11), // "SeekForward"
QT_MOC_LITERAL(40, 410, 12), // "SeekBackward"
QT_MOC_LITERAL(41, 423, 22), // "CurrentMetadataChanged"
QT_MOC_LITERAL(42, 446, 8), // "metadata"
QT_MOC_LITERAL(43, 455, 4), // "Mute"
QT_MOC_LITERAL(44, 460, 5), // "Pause"
QT_MOC_LITERAL(45, 466, 4), // "Stop"
QT_MOC_LITERAL(46, 471, 10), // "stop_after"
QT_MOC_LITERAL(47, 482, 4), // "Play"
QT_MOC_LITERAL(48, 487, 7) // "ShowOSD"

    },
    "PlayerInterface\0Playing\0\0Paused\0Stopped\0"
    "PlaylistFinished\0VolumeChanged\0volume\0"
    "Error\0message\0TrackSkipped\0PlaylistItemPtr\0"
    "old_track\0PositionChanged\0microseconds\0"
    "Seeked\0SongChangeRequestProcessed\0url\0"
    "valid\0ForceShowOSD\0Song\0toggle\0"
    "ReloadSettings\0PlayAt\0i\0"
    "Engine::TrackChangeFlags\0change\0"
    "reshuffle\0PlayPause\0RestartOrPrevious\0"
    "Next\0NextAlbum\0Previous\0SetVolume\0"
    "value\0VolumeUp\0VolumeDown\0SeekTo\0"
    "seconds\0SeekForward\0SeekBackward\0"
    "CurrentMetadataChanged\0metadata\0Mute\0"
    "Pause\0Stop\0stop_after\0Play\0ShowOSD"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  169,    2, 0x06 /* Public */,
       3,    0,  170,    2, 0x06 /* Public */,
       4,    0,  171,    2, 0x06 /* Public */,
       5,    0,  172,    2, 0x06 /* Public */,
       6,    1,  173,    2, 0x06 /* Public */,
       8,    1,  176,    2, 0x06 /* Public */,
      10,    1,  179,    2, 0x06 /* Public */,
      13,    1,  182,    2, 0x06 /* Public */,
      15,    1,  185,    2, 0x06 /* Public */,
      16,    2,  188,    2, 0x06 /* Public */,
      19,    2,  193,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  198,    2, 0x0a /* Public */,
      23,    3,  199,    2, 0x0a /* Public */,
      28,    0,  206,    2, 0x0a /* Public */,
      29,    0,  207,    2, 0x0a /* Public */,
      30,    0,  208,    2, 0x0a /* Public */,
      31,    0,  209,    2, 0x0a /* Public */,
      32,    0,  210,    2, 0x0a /* Public */,
      33,    1,  211,    2, 0x0a /* Public */,
      35,    0,  214,    2, 0x0a /* Public */,
      36,    0,  215,    2, 0x0a /* Public */,
      37,    1,  216,    2, 0x0a /* Public */,
      39,    0,  219,    2, 0x0a /* Public */,
      40,    0,  220,    2, 0x0a /* Public */,
      41,    1,  221,    2, 0x0a /* Public */,
      43,    0,  224,    2, 0x0a /* Public */,
      44,    0,  225,    2, 0x0a /* Public */,
      45,    1,  226,    2, 0x0a /* Public */,
      45,    0,  229,    2, 0x2a /* Public | MethodCloned */,
      47,    0,  230,    2, 0x0a /* Public */,
      48,    0,  231,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, QMetaType::LongLong,   14,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   17,   18,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Bool,    2,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 25, QMetaType::Bool,   24,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   38,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   42,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlayerInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Playing(); break;
        case 1: _t->Paused(); break;
        case 2: _t->Stopped(); break;
        case 3: _t->PlaylistFinished(); break;
        case 4: _t->VolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->TrackSkipped((*reinterpret_cast< PlaylistItemPtr(*)>(_a[1]))); break;
        case 7: _t->PositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 8: _t->Seeked((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 9: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->ForceShowOSD((*reinterpret_cast< Song(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->ReloadSettings(); break;
        case 12: _t->PlayAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 13: _t->PlayPause(); break;
        case 14: _t->RestartOrPrevious(); break;
        case 15: _t->Next(); break;
        case 16: _t->NextAlbum(); break;
        case 17: _t->Previous(); break;
        case 18: _t->SetVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->VolumeUp(); break;
        case 20: _t->VolumeDown(); break;
        case 21: _t->SeekTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->SeekForward(); break;
        case 23: _t->SeekBackward(); break;
        case 24: _t->CurrentMetadataChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 25: _t->Mute(); break;
        case 26: _t->Pause(); break;
        case 27: _t->Stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->Stop(); break;
        case 29: _t->Play(); break;
        case 30: _t->ShowOSD(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlaylistItemPtr >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
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
            using _t = void (PlayerInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::Playing)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::Paused)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::Stopped)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::PlaylistFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::VolumeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::Error)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(PlaylistItemPtr );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::TrackSkipped)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::PositionChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::Seeked)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(const QUrl & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::SongChangeRequestProcessed)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PlayerInterface::*)(Song , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerInterface::ForceShowOSD)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlayerInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlayerInterface.data,
    qt_meta_data_PlayerInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlayerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void PlayerInterface::Playing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerInterface::Paused()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlayerInterface::Stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlayerInterface::PlaylistFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerInterface::VolumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlayerInterface::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlayerInterface::TrackSkipped(PlaylistItemPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlayerInterface::PositionChanged(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlayerInterface::Seeked(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlayerInterface::SongChangeRequestProcessed(const QUrl & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PlayerInterface::ForceShowOSD(Song _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
struct qt_meta_stringdata_Player_t {
    QByteArrayData data[59];
    char stringdata0[747];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Player_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Player_t qt_meta_stringdata_Player = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Player"
QT_MOC_LITERAL(1, 7, 14), // "ReloadSettings"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "PlayAt"
QT_MOC_LITERAL(4, 30, 1), // "i"
QT_MOC_LITERAL(5, 32, 24), // "Engine::TrackChangeFlags"
QT_MOC_LITERAL(6, 57, 6), // "change"
QT_MOC_LITERAL(7, 64, 9), // "reshuffle"
QT_MOC_LITERAL(8, 74, 9), // "PlayPause"
QT_MOC_LITERAL(9, 84, 17), // "RestartOrPrevious"
QT_MOC_LITERAL(10, 102, 4), // "Next"
QT_MOC_LITERAL(11, 107, 9), // "NextAlbum"
QT_MOC_LITERAL(12, 117, 8), // "Previous"
QT_MOC_LITERAL(13, 126, 12), // "PlayPlaylist"
QT_MOC_LITERAL(14, 139, 12), // "playlistName"
QT_MOC_LITERAL(15, 152, 9), // "SetVolume"
QT_MOC_LITERAL(16, 162, 5), // "value"
QT_MOC_LITERAL(17, 168, 8), // "VolumeUp"
QT_MOC_LITERAL(18, 177, 10), // "VolumeDown"
QT_MOC_LITERAL(19, 188, 6), // "SeekTo"
QT_MOC_LITERAL(20, 195, 7), // "seconds"
QT_MOC_LITERAL(21, 203, 11), // "SeekForward"
QT_MOC_LITERAL(22, 215, 12), // "SeekBackward"
QT_MOC_LITERAL(23, 228, 22), // "CurrentMetadataChanged"
QT_MOC_LITERAL(24, 251, 4), // "Song"
QT_MOC_LITERAL(25, 256, 8), // "metadata"
QT_MOC_LITERAL(26, 265, 4), // "Mute"
QT_MOC_LITERAL(27, 270, 5), // "Pause"
QT_MOC_LITERAL(28, 276, 4), // "Stop"
QT_MOC_LITERAL(29, 281, 10), // "stop_after"
QT_MOC_LITERAL(30, 292, 16), // "StopAfterCurrent"
QT_MOC_LITERAL(31, 309, 17), // "IntroPointReached"
QT_MOC_LITERAL(32, 327, 4), // "Play"
QT_MOC_LITERAL(33, 332, 7), // "ShowOSD"
QT_MOC_LITERAL(34, 340, 15), // "TogglePrettyOSD"
QT_MOC_LITERAL(35, 356, 16), // "dummyLogPosition"
QT_MOC_LITERAL(36, 373, 2), // "us"
QT_MOC_LITERAL(37, 376, 18), // "EngineStateChanged"
QT_MOC_LITERAL(38, 395, 13), // "Engine::State"
QT_MOC_LITERAL(39, 409, 22), // "EngineMetadataReceived"
QT_MOC_LITERAL(40, 432, 24), // "Engine::SimpleMetaBundle"
QT_MOC_LITERAL(41, 457, 6), // "bundle"
QT_MOC_LITERAL(42, 464, 15), // "TrackAboutToEnd"
QT_MOC_LITERAL(43, 480, 10), // "TrackEnded"
QT_MOC_LITERAL(44, 491, 8), // "NextItem"
QT_MOC_LITERAL(45, 500, 24), // "NextTrackOrAlbumSelected"
QT_MOC_LITERAL(46, 525, 16), // "NextTrackOrAlbum"
QT_MOC_LITERAL(47, 542, 12), // "PreviousItem"
QT_MOC_LITERAL(48, 555, 12), // "NextInternal"
QT_MOC_LITERAL(49, 568, 20), // "PlayPlaylistInternal"
QT_MOC_LITERAL(50, 589, 19), // "ValidMediaRequested"
QT_MOC_LITERAL(51, 609, 20), // "MediaPlaybackRequest"
QT_MOC_LITERAL(52, 630, 21), // "InvalidMediaRequested"
QT_MOC_LITERAL(53, 652, 19), // "UrlHandlerDestroyed"
QT_MOC_LITERAL(54, 672, 6), // "object"
QT_MOC_LITERAL(55, 679, 16), // "HandleLoadResult"
QT_MOC_LITERAL(56, 696, 22), // "UrlHandler::LoadResult"
QT_MOC_LITERAL(57, 719, 6), // "result"
QT_MOC_LITERAL(58, 726, 20) // "OnDsdPositionChanged"

    },
    "Player\0ReloadSettings\0\0PlayAt\0i\0"
    "Engine::TrackChangeFlags\0change\0"
    "reshuffle\0PlayPause\0RestartOrPrevious\0"
    "Next\0NextAlbum\0Previous\0PlayPlaylist\0"
    "playlistName\0SetVolume\0value\0VolumeUp\0"
    "VolumeDown\0SeekTo\0seconds\0SeekForward\0"
    "SeekBackward\0CurrentMetadataChanged\0"
    "Song\0metadata\0Mute\0Pause\0Stop\0stop_after\0"
    "StopAfterCurrent\0IntroPointReached\0"
    "Play\0ShowOSD\0TogglePrettyOSD\0"
    "dummyLogPosition\0us\0EngineStateChanged\0"
    "Engine::State\0EngineMetadataReceived\0"
    "Engine::SimpleMetaBundle\0bundle\0"
    "TrackAboutToEnd\0TrackEnded\0NextItem\0"
    "NextTrackOrAlbumSelected\0NextTrackOrAlbum\0"
    "PreviousItem\0NextInternal\0"
    "PlayPlaylistInternal\0ValidMediaRequested\0"
    "MediaPlaybackRequest\0InvalidMediaRequested\0"
    "UrlHandlerDestroyed\0object\0HandleLoadResult\0"
    "UrlHandler::LoadResult\0result\0"
    "OnDsdPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Player[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x0a /* Public */,
       3,    3,  215,    2, 0x0a /* Public */,
       8,    0,  222,    2, 0x0a /* Public */,
       9,    0,  223,    2, 0x0a /* Public */,
      10,    0,  224,    2, 0x0a /* Public */,
      11,    0,  225,    2, 0x0a /* Public */,
      12,    0,  226,    2, 0x0a /* Public */,
      13,    1,  227,    2, 0x0a /* Public */,
      15,    1,  230,    2, 0x0a /* Public */,
      17,    0,  233,    2, 0x0a /* Public */,
      18,    0,  234,    2, 0x0a /* Public */,
      19,    1,  235,    2, 0x0a /* Public */,
      21,    0,  238,    2, 0x0a /* Public */,
      22,    0,  239,    2, 0x0a /* Public */,
      23,    1,  240,    2, 0x0a /* Public */,
      26,    0,  243,    2, 0x0a /* Public */,
      27,    0,  244,    2, 0x0a /* Public */,
      28,    1,  245,    2, 0x0a /* Public */,
      28,    0,  248,    2, 0x2a /* Public | MethodCloned */,
      30,    0,  249,    2, 0x0a /* Public */,
      31,    0,  250,    2, 0x0a /* Public */,
      32,    0,  251,    2, 0x0a /* Public */,
      33,    0,  252,    2, 0x0a /* Public */,
      34,    0,  253,    2, 0x0a /* Public */,
      35,    1,  254,    2, 0x08 /* Private */,
      37,    1,  257,    2, 0x08 /* Private */,
      39,    1,  260,    2, 0x08 /* Private */,
      42,    0,  263,    2, 0x08 /* Private */,
      43,    0,  264,    2, 0x08 /* Private */,
      44,    2,  265,    2, 0x08 /* Private */,
      44,    1,  270,    2, 0x28 /* Private | MethodCloned */,
      47,    1,  273,    2, 0x08 /* Private */,
      48,    2,  276,    2, 0x08 /* Private */,
      48,    1,  281,    2, 0x28 /* Private | MethodCloned */,
      49,    2,  284,    2, 0x08 /* Private */,
      50,    1,  289,    2, 0x08 /* Private */,
      52,    1,  292,    2, 0x08 /* Private */,
      53,    1,  295,    2, 0x08 /* Private */,
      55,    1,  298,    2, 0x08 /* Private */,
      58,    1,  301,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5, QMetaType::Bool,    4,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   36,
    QMetaType::Void, 0x80000000 | 38,    2,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 45,    6,   46,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 45,    2,   46,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    2,   14,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, 0x80000000 | 51,    2,
    QMetaType::Void, QMetaType::QObjectStar,   54,
    QMetaType::Void, 0x80000000 | 56,   57,
    QMetaType::Void, QMetaType::LongLong,   36,

       0        // eod
};

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->PlayAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->PlayPause(); break;
        case 3: _t->RestartOrPrevious(); break;
        case 4: _t->Next(); break;
        case 5: _t->NextAlbum(); break;
        case 6: _t->Previous(); break;
        case 7: _t->PlayPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->SetVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->VolumeUp(); break;
        case 10: _t->VolumeDown(); break;
        case 11: _t->SeekTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->SeekForward(); break;
        case 13: _t->SeekBackward(); break;
        case 14: _t->CurrentMetadataChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 15: _t->Mute(); break;
        case 16: _t->Pause(); break;
        case 17: _t->Stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->Stop(); break;
        case 19: _t->StopAfterCurrent(); break;
        case 20: _t->IntroPointReached(); break;
        case 21: _t->Play(); break;
        case 22: _t->ShowOSD(); break;
        case 23: _t->TogglePrettyOSD(); break;
        case 24: _t->dummyLogPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 25: _t->EngineStateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 26: _t->EngineMetadataReceived((*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[1]))); break;
        case 27: _t->TrackAboutToEnd(); break;
        case 28: _t->TrackEnded(); break;
        case 29: _t->NextItem((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1])),(*reinterpret_cast< NextTrackOrAlbumSelected(*)>(_a[2]))); break;
        case 30: _t->NextItem((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1]))); break;
        case 31: _t->PreviousItem((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1]))); break;
        case 32: _t->NextInternal((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1])),(*reinterpret_cast< NextTrackOrAlbumSelected(*)>(_a[2]))); break;
        case 33: _t->NextInternal((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1]))); break;
        case 34: _t->PlayPlaylistInternal((*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 35: _t->ValidMediaRequested((*reinterpret_cast< const MediaPlaybackRequest(*)>(_a[1]))); break;
        case 36: _t->InvalidMediaRequested((*reinterpret_cast< const MediaPlaybackRequest(*)>(_a[1]))); break;
        case 37: _t->UrlHandlerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 38: _t->HandleLoadResult((*reinterpret_cast< const UrlHandler::LoadResult(*)>(_a[1]))); break;
        case 39: _t->OnDsdPositionChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<PlayerInterface::staticMetaObject>(),
    qt_meta_stringdata_Player.data,
    qt_meta_data_Player,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Player.stringdata0))
        return static_cast<void*>(this);
    return PlayerInterface::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlayerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
