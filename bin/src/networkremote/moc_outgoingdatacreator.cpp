/****************************************************************************
** Meta object code from reading C++ file 'outgoingdatacreator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/networkremote/outgoingdatacreator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outgoingdatacreator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutgoingDataCreator_t {
    QByteArrayData data[57];
    char stringdata0[764];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutgoingDataCreator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutgoingDataCreator_t qt_meta_stringdata_OutgoingDataCreator = {
    {
QT_MOC_LITERAL(0, 0, 19), // "OutgoingDataCreator"
QT_MOC_LITERAL(1, 20, 18), // "SendClementineInfo"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "SendAllPlaylists"
QT_MOC_LITERAL(4, 57, 22), // "SendAllActivePlaylists"
QT_MOC_LITERAL(5, 80, 13), // "SendFirstData"
QT_MOC_LITERAL(6, 94, 19), // "send_playlist_songs"
QT_MOC_LITERAL(7, 114, 17), // "SendPlaylistSongs"
QT_MOC_LITERAL(8, 132, 2), // "id"
QT_MOC_LITERAL(9, 135, 15), // "PlaylistChanged"
QT_MOC_LITERAL(10, 151, 9), // "Playlist*"
QT_MOC_LITERAL(11, 161, 13), // "VolumeChanged"
QT_MOC_LITERAL(12, 175, 6), // "volume"
QT_MOC_LITERAL(13, 182, 13), // "PlaylistAdded"
QT_MOC_LITERAL(14, 196, 4), // "name"
QT_MOC_LITERAL(15, 201, 8), // "favorite"
QT_MOC_LITERAL(16, 210, 15), // "PlaylistDeleted"
QT_MOC_LITERAL(17, 226, 14), // "PlaylistClosed"
QT_MOC_LITERAL(18, 241, 15), // "PlaylistRenamed"
QT_MOC_LITERAL(19, 257, 8), // "new_name"
QT_MOC_LITERAL(20, 266, 13), // "ActiveChanged"
QT_MOC_LITERAL(21, 280, 18), // "CurrentSongChanged"
QT_MOC_LITERAL(22, 299, 4), // "Song"
QT_MOC_LITERAL(23, 304, 4), // "song"
QT_MOC_LITERAL(24, 309, 3), // "uri"
QT_MOC_LITERAL(25, 313, 3), // "img"
QT_MOC_LITERAL(26, 317, 16), // "SendSongMetadata"
QT_MOC_LITERAL(27, 334, 12), // "StateChanged"
QT_MOC_LITERAL(28, 347, 13), // "Engine::State"
QT_MOC_LITERAL(29, 361, 13), // "SendKeepAlive"
QT_MOC_LITERAL(30, 375, 14), // "SendRepeatMode"
QT_MOC_LITERAL(31, 390, 28), // "PlaylistSequence::RepeatMode"
QT_MOC_LITERAL(32, 419, 4), // "mode"
QT_MOC_LITERAL(33, 424, 15), // "SendShuffleMode"
QT_MOC_LITERAL(34, 440, 29), // "PlaylistSequence::ShuffleMode"
QT_MOC_LITERAL(35, 470, 19), // "UpdateTrackPosition"
QT_MOC_LITERAL(36, 490, 20), // "DisconnectAllClients"
QT_MOC_LITERAL(37, 511, 9), // "GetLyrics"
QT_MOC_LITERAL(38, 521, 10), // "SendLyrics"
QT_MOC_LITERAL(39, 532, 23), // "SongInfoFetcher::Result"
QT_MOC_LITERAL(40, 556, 6), // "result"
QT_MOC_LITERAL(41, 563, 11), // "SendLibrary"
QT_MOC_LITERAL(42, 575, 13), // "RemoteClient*"
QT_MOC_LITERAL(43, 589, 6), // "client"
QT_MOC_LITERAL(44, 596, 13), // "EnableKittens"
QT_MOC_LITERAL(45, 610, 3), // "aww"
QT_MOC_LITERAL(46, 614, 10), // "SendKitten"
QT_MOC_LITERAL(47, 625, 6), // "kitten"
QT_MOC_LITERAL(48, 632, 14), // "DoGlobalSearch"
QT_MOC_LITERAL(49, 647, 5), // "query"
QT_MOC_LITERAL(50, 653, 16), // "ResultsAvailable"
QT_MOC_LITERAL(51, 670, 26), // "SearchProvider::ResultList"
QT_MOC_LITERAL(52, 697, 7), // "results"
QT_MOC_LITERAL(53, 705, 14), // "SearchFinished"
QT_MOC_LITERAL(54, 720, 13), // "SendListFiles"
QT_MOC_LITERAL(55, 734, 13), // "relative_path"
QT_MOC_LITERAL(56, 748, 15) // "SendSavedRadios"

    },
    "OutgoingDataCreator\0SendClementineInfo\0"
    "\0SendAllPlaylists\0SendAllActivePlaylists\0"
    "SendFirstData\0send_playlist_songs\0"
    "SendPlaylistSongs\0id\0PlaylistChanged\0"
    "Playlist*\0VolumeChanged\0volume\0"
    "PlaylistAdded\0name\0favorite\0PlaylistDeleted\0"
    "PlaylistClosed\0PlaylistRenamed\0new_name\0"
    "ActiveChanged\0CurrentSongChanged\0Song\0"
    "song\0uri\0img\0SendSongMetadata\0"
    "StateChanged\0Engine::State\0SendKeepAlive\0"
    "SendRepeatMode\0PlaylistSequence::RepeatMode\0"
    "mode\0SendShuffleMode\0PlaylistSequence::ShuffleMode\0"
    "UpdateTrackPosition\0DisconnectAllClients\0"
    "GetLyrics\0SendLyrics\0SongInfoFetcher::Result\0"
    "result\0SendLibrary\0RemoteClient*\0"
    "client\0EnableKittens\0aww\0SendKitten\0"
    "kitten\0DoGlobalSearch\0query\0"
    "ResultsAvailable\0SearchProvider::ResultList\0"
    "results\0SearchFinished\0SendListFiles\0"
    "relative_path\0SendSavedRadios"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutgoingDataCreator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  164,    2, 0x0a /* Public */,
       3,    0,  165,    2, 0x0a /* Public */,
       4,    0,  166,    2, 0x0a /* Public */,
       5,    1,  167,    2, 0x0a /* Public */,
       7,    1,  170,    2, 0x0a /* Public */,
       9,    1,  173,    2, 0x0a /* Public */,
      11,    1,  176,    2, 0x0a /* Public */,
      13,    3,  179,    2, 0x0a /* Public */,
      16,    1,  186,    2, 0x0a /* Public */,
      17,    1,  189,    2, 0x0a /* Public */,
      18,    2,  192,    2, 0x0a /* Public */,
      20,    1,  197,    2, 0x0a /* Public */,
      21,    3,  200,    2, 0x0a /* Public */,
      26,    0,  207,    2, 0x0a /* Public */,
      27,    1,  208,    2, 0x0a /* Public */,
      29,    0,  211,    2, 0x0a /* Public */,
      30,    1,  212,    2, 0x0a /* Public */,
      33,    1,  215,    2, 0x0a /* Public */,
      35,    0,  218,    2, 0x0a /* Public */,
      36,    0,  219,    2, 0x0a /* Public */,
      37,    0,  220,    2, 0x0a /* Public */,
      38,    2,  221,    2, 0x0a /* Public */,
      41,    1,  226,    2, 0x0a /* Public */,
      44,    1,  229,    2, 0x0a /* Public */,
      46,    1,  232,    2, 0x0a /* Public */,
      48,    2,  235,    2, 0x0a /* Public */,
      50,    2,  240,    2, 0x0a /* Public */,
      53,    1,  245,    2, 0x0a /* Public */,
      54,    2,  248,    2, 0x0a /* Public */,
      56,    1,  253,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    8,   14,   15,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,   19,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 22, QMetaType::QString, QMetaType::QImage,   23,   24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 34,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 39,    8,   40,
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void, QMetaType::Bool,   45,
    QMetaType::Void, QMetaType::QImage,   47,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 42,   49,   43,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 51,    8,   52,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 42,   55,   43,
    QMetaType::Void, 0x80000000 | 42,   43,

       0        // eod
};

void OutgoingDataCreator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutgoingDataCreator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendClementineInfo(); break;
        case 1: _t->SendAllPlaylists(); break;
        case 2: _t->SendAllActivePlaylists(); break;
        case 3: _t->SendFirstData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->SendPlaylistSongs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->PlaylistChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 6: _t->VolumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->PlaylistAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 8: _t->PlaylistDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->PlaylistClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->PlaylistRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: _t->ActiveChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 12: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 13: _t->SendSongMetadata(); break;
        case 14: _t->StateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 15: _t->SendKeepAlive(); break;
        case 16: _t->SendRepeatMode((*reinterpret_cast< PlaylistSequence::RepeatMode(*)>(_a[1]))); break;
        case 17: _t->SendShuffleMode((*reinterpret_cast< PlaylistSequence::ShuffleMode(*)>(_a[1]))); break;
        case 18: _t->UpdateTrackPosition(); break;
        case 19: _t->DisconnectAllClients(); break;
        case 20: _t->GetLyrics(); break;
        case 21: _t->SendLyrics((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongInfoFetcher::Result(*)>(_a[2]))); break;
        case 22: _t->SendLibrary((*reinterpret_cast< RemoteClient*(*)>(_a[1]))); break;
        case 23: _t->EnableKittens((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->SendKitten((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 25: _t->DoGlobalSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< RemoteClient*(*)>(_a[2]))); break;
        case 26: _t->ResultsAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SearchProvider::ResultList(*)>(_a[2]))); break;
        case 27: _t->SearchFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->SendListFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< RemoteClient*(*)>(_a[2]))); break;
        case 29: _t->SendSavedRadios((*reinterpret_cast< RemoteClient*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SearchProvider::ResultList >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OutgoingDataCreator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OutgoingDataCreator.data,
    qt_meta_data_OutgoingDataCreator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OutgoingDataCreator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutgoingDataCreator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutgoingDataCreator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OutgoingDataCreator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
