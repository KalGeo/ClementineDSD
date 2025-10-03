/****************************************************************************
** Meta object code from reading C++ file 'incomingdataparser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/networkremote/incomingdataparser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'incomingdataparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IncomingDataParser_t {
    QByteArrayData data[71];
    char stringdata0[791];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IncomingDataParser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IncomingDataParser_t qt_meta_stringdata_IncomingDataParser = {
    {
QT_MOC_LITERAL(0, 0, 18), // "IncomingDataParser"
QT_MOC_LITERAL(1, 19, 18), // "SendClementineInfo"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "SendFirstData"
QT_MOC_LITERAL(4, 53, 19), // "send_playlist_songs"
QT_MOC_LITERAL(5, 73, 16), // "SendAllPlaylists"
QT_MOC_LITERAL(6, 90, 22), // "SendAllActivePlaylists"
QT_MOC_LITERAL(7, 113, 17), // "SendPlaylistSongs"
QT_MOC_LITERAL(8, 131, 2), // "id"
QT_MOC_LITERAL(9, 134, 3), // "New"
QT_MOC_LITERAL(10, 138, 17), // "new_playlist_name"
QT_MOC_LITERAL(11, 156, 4), // "Open"
QT_MOC_LITERAL(12, 161, 5), // "Clear"
QT_MOC_LITERAL(13, 167, 5), // "Close"
QT_MOC_LITERAL(14, 173, 6), // "Rename"
QT_MOC_LITERAL(15, 180, 8), // "Favorite"
QT_MOC_LITERAL(16, 189, 8), // "favorite"
QT_MOC_LITERAL(17, 198, 9), // "GetLyrics"
QT_MOC_LITERAL(18, 208, 4), // "Love"
QT_MOC_LITERAL(19, 213, 3), // "Ban"
QT_MOC_LITERAL(20, 217, 4), // "Play"
QT_MOC_LITERAL(21, 222, 9), // "PlayPause"
QT_MOC_LITERAL(22, 232, 5), // "Pause"
QT_MOC_LITERAL(23, 238, 4), // "Stop"
QT_MOC_LITERAL(24, 243, 16), // "StopAfterCurrent"
QT_MOC_LITERAL(25, 260, 4), // "Next"
QT_MOC_LITERAL(26, 265, 8), // "Previous"
QT_MOC_LITERAL(27, 274, 9), // "SetVolume"
QT_MOC_LITERAL(28, 284, 6), // "volume"
QT_MOC_LITERAL(29, 291, 6), // "PlayAt"
QT_MOC_LITERAL(30, 298, 1), // "i"
QT_MOC_LITERAL(31, 300, 24), // "Engine::TrackChangeFlags"
QT_MOC_LITERAL(32, 325, 6), // "change"
QT_MOC_LITERAL(33, 332, 9), // "reshuffle"
QT_MOC_LITERAL(34, 342, 5), // "Enque"
QT_MOC_LITERAL(35, 348, 17), // "SetActivePlaylist"
QT_MOC_LITERAL(36, 366, 14), // "ShuffleCurrent"
QT_MOC_LITERAL(37, 381, 13), // "SetRepeatMode"
QT_MOC_LITERAL(38, 395, 28), // "PlaylistSequence::RepeatMode"
QT_MOC_LITERAL(39, 424, 4), // "mode"
QT_MOC_LITERAL(40, 429, 14), // "SetShuffleMode"
QT_MOC_LITERAL(41, 444, 29), // "PlaylistSequence::ShuffleMode"
QT_MOC_LITERAL(42, 474, 10), // "InsertUrls"
QT_MOC_LITERAL(43, 485, 11), // "QList<QUrl>"
QT_MOC_LITERAL(44, 497, 4), // "urls"
QT_MOC_LITERAL(45, 502, 3), // "pos"
QT_MOC_LITERAL(46, 506, 8), // "play_now"
QT_MOC_LITERAL(47, 515, 7), // "enqueue"
QT_MOC_LITERAL(48, 523, 11), // "InsertSongs"
QT_MOC_LITERAL(49, 535, 8), // "SongList"
QT_MOC_LITERAL(50, 544, 5), // "songs"
QT_MOC_LITERAL(51, 550, 11), // "RemoveSongs"
QT_MOC_LITERAL(52, 562, 10), // "QList<int>"
QT_MOC_LITERAL(53, 573, 7), // "indices"
QT_MOC_LITERAL(54, 581, 6), // "SeekTo"
QT_MOC_LITERAL(55, 588, 7), // "seconds"
QT_MOC_LITERAL(56, 596, 11), // "SendLibrary"
QT_MOC_LITERAL(57, 608, 13), // "RemoteClient*"
QT_MOC_LITERAL(58, 622, 6), // "client"
QT_MOC_LITERAL(59, 629, 15), // "RateCurrentSong"
QT_MOC_LITERAL(60, 645, 14), // "DoGlobalSearch"
QT_MOC_LITERAL(61, 660, 15), // "SendSavedRadios"
QT_MOC_LITERAL(62, 676, 13), // "SendListFiles"
QT_MOC_LITERAL(63, 690, 19), // "AddToPlaylistSignal"
QT_MOC_LITERAL(64, 710, 10), // "QMimeData*"
QT_MOC_LITERAL(65, 721, 4), // "data"
QT_MOC_LITERAL(66, 726, 18), // "SetCurrentPlaylist"
QT_MOC_LITERAL(67, 745, 5), // "Parse"
QT_MOC_LITERAL(68, 751, 20), // "cpb::remote::Message"
QT_MOC_LITERAL(69, 772, 3), // "msg"
QT_MOC_LITERAL(70, 776, 14) // "ReloadSettings"

    },
    "IncomingDataParser\0SendClementineInfo\0"
    "\0SendFirstData\0send_playlist_songs\0"
    "SendAllPlaylists\0SendAllActivePlaylists\0"
    "SendPlaylistSongs\0id\0New\0new_playlist_name\0"
    "Open\0Clear\0Close\0Rename\0Favorite\0"
    "favorite\0GetLyrics\0Love\0Ban\0Play\0"
    "PlayPause\0Pause\0Stop\0StopAfterCurrent\0"
    "Next\0Previous\0SetVolume\0volume\0PlayAt\0"
    "i\0Engine::TrackChangeFlags\0change\0"
    "reshuffle\0Enque\0SetActivePlaylist\0"
    "ShuffleCurrent\0SetRepeatMode\0"
    "PlaylistSequence::RepeatMode\0mode\0"
    "SetShuffleMode\0PlaylistSequence::ShuffleMode\0"
    "InsertUrls\0QList<QUrl>\0urls\0pos\0"
    "play_now\0enqueue\0InsertSongs\0SongList\0"
    "songs\0RemoveSongs\0QList<int>\0indices\0"
    "SeekTo\0seconds\0SendLibrary\0RemoteClient*\0"
    "client\0RateCurrentSong\0DoGlobalSearch\0"
    "SendSavedRadios\0SendListFiles\0"
    "AddToPlaylistSignal\0QMimeData*\0data\0"
    "SetCurrentPlaylist\0Parse\0cpb::remote::Message\0"
    "msg\0ReloadSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IncomingDataParser[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      39,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    1,  220,    2, 0x06 /* Public */,
       5,    0,  223,    2, 0x06 /* Public */,
       6,    0,  224,    2, 0x06 /* Public */,
       7,    1,  225,    2, 0x06 /* Public */,
       9,    1,  228,    2, 0x06 /* Public */,
      11,    1,  231,    2, 0x06 /* Public */,
      12,    1,  234,    2, 0x06 /* Public */,
      13,    1,  237,    2, 0x06 /* Public */,
      14,    2,  240,    2, 0x06 /* Public */,
      15,    2,  245,    2, 0x06 /* Public */,
      17,    0,  250,    2, 0x06 /* Public */,
      18,    0,  251,    2, 0x06 /* Public */,
      19,    0,  252,    2, 0x06 /* Public */,
      20,    0,  253,    2, 0x06 /* Public */,
      21,    0,  254,    2, 0x06 /* Public */,
      22,    0,  255,    2, 0x06 /* Public */,
      23,    0,  256,    2, 0x06 /* Public */,
      24,    0,  257,    2, 0x06 /* Public */,
      25,    0,  258,    2, 0x06 /* Public */,
      26,    0,  259,    2, 0x06 /* Public */,
      27,    1,  260,    2, 0x06 /* Public */,
      29,    3,  263,    2, 0x06 /* Public */,
      34,    2,  270,    2, 0x06 /* Public */,
      35,    1,  275,    2, 0x06 /* Public */,
      36,    0,  278,    2, 0x06 /* Public */,
      37,    1,  279,    2, 0x06 /* Public */,
      40,    1,  282,    2, 0x06 /* Public */,
      42,    5,  285,    2, 0x06 /* Public */,
      48,    5,  296,    2, 0x06 /* Public */,
      51,    2,  307,    2, 0x06 /* Public */,
      54,    1,  312,    2, 0x06 /* Public */,
      56,    1,  315,    2, 0x06 /* Public */,
      59,    1,  318,    2, 0x06 /* Public */,
      60,    2,  321,    2, 0x06 /* Public */,
      61,    1,  326,    2, 0x06 /* Public */,
      62,    2,  329,    2, 0x06 /* Public */,
      63,    1,  334,    2, 0x06 /* Public */,
      66,    1,  337,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      67,    1,  340,    2, 0x0a /* Public */,
      70,    0,  343,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   28,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 31, QMetaType::Bool,   30,   32,   33,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,   30,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 41,   39,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 43, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    8,   44,   45,   46,   47,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 49, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,    8,   50,   45,   46,   47,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 52,    8,   53,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 57,    2,    2,
    QMetaType::Void, 0x80000000 | 57,   58,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 57,    2,    2,
    QMetaType::Void, 0x80000000 | 64,   65,
    QMetaType::Void, QMetaType::Int,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void,

       0        // eod
};

void IncomingDataParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IncomingDataParser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendClementineInfo(); break;
        case 1: _t->SendFirstData((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SendAllPlaylists(); break;
        case 3: _t->SendAllActivePlaylists(); break;
        case 4: _t->SendPlaylistSongs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->New((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->Open((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->Clear((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->Close((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->Favorite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->GetLyrics(); break;
        case 12: _t->Love(); break;
        case 13: _t->Ban(); break;
        case 14: _t->Play(); break;
        case 15: _t->PlayPause(); break;
        case 16: _t->Pause(); break;
        case 17: _t->Stop(); break;
        case 18: _t->StopAfterCurrent(); break;
        case 19: _t->Next(); break;
        case 20: _t->Previous(); break;
        case 21: _t->SetVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->PlayAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->Enque((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->SetActivePlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->ShuffleCurrent(); break;
        case 26: _t->SetRepeatMode((*reinterpret_cast< PlaylistSequence::RepeatMode(*)>(_a[1]))); break;
        case 27: _t->SetShuffleMode((*reinterpret_cast< PlaylistSequence::ShuffleMode(*)>(_a[1]))); break;
        case 28: _t->InsertUrls((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 29: _t->InsertSongs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 30: _t->RemoveSongs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 31: _t->SeekTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->SendLibrary((*reinterpret_cast< RemoteClient*(*)>(_a[1]))); break;
        case 33: _t->RateCurrentSong((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 34: _t->DoGlobalSearch((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< RemoteClient*(*)>(_a[2]))); break;
        case 35: _t->SendSavedRadios((*reinterpret_cast< RemoteClient*(*)>(_a[1]))); break;
        case 36: _t->SendListFiles((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< RemoteClient*(*)>(_a[2]))); break;
        case 37: _t->AddToPlaylistSignal((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 38: _t->SetCurrentPlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->Parse((*reinterpret_cast< const cpb::remote::Message(*)>(_a[1]))); break;
        case 40: _t->ReloadSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        case 35:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RemoteClient* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendClementineInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendFirstData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendAllPlaylists)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendAllActivePlaylists)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendPlaylistSongs)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::New)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Open)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Clear)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Close)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Rename)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Favorite)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::GetLyrics)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Love)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Ban)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Play)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::PlayPause)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Pause)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Stop)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::StopAfterCurrent)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Next)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Previous)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SetVolume)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , Engine::TrackChangeFlags , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::PlayAt)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::Enque)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SetActivePlaylist)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::ShuffleCurrent)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(PlaylistSequence::RepeatMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SetRepeatMode)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(PlaylistSequence::ShuffleMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SetShuffleMode)) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , const QList<QUrl> & , int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::InsertUrls)) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , const SongList & , int , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::InsertSongs)) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::RemoveSongs)) {
                *result = 30;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SeekTo)) {
                *result = 31;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(RemoteClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendLibrary)) {
                *result = 32;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::RateCurrentSong)) {
                *result = 33;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(QString , RemoteClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::DoGlobalSearch)) {
                *result = 34;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(RemoteClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendSavedRadios)) {
                *result = 35;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(QString , RemoteClient * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SendListFiles)) {
                *result = 36;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(QMimeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::AddToPlaylistSignal)) {
                *result = 37;
                return;
            }
        }
        {
            using _t = void (IncomingDataParser::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IncomingDataParser::SetCurrentPlaylist)) {
                *result = 38;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IncomingDataParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IncomingDataParser.data,
    qt_meta_data_IncomingDataParser,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IncomingDataParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IncomingDataParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IncomingDataParser.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int IncomingDataParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void IncomingDataParser::SendClementineInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void IncomingDataParser::SendFirstData(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IncomingDataParser::SendAllPlaylists()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void IncomingDataParser::SendAllActivePlaylists()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void IncomingDataParser::SendPlaylistSongs(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void IncomingDataParser::New(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void IncomingDataParser::Open(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void IncomingDataParser::Clear(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void IncomingDataParser::Close(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void IncomingDataParser::Rename(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void IncomingDataParser::Favorite(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void IncomingDataParser::GetLyrics()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void IncomingDataParser::Love()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void IncomingDataParser::Ban()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void IncomingDataParser::Play()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void IncomingDataParser::PlayPause()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void IncomingDataParser::Pause()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void IncomingDataParser::Stop()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void IncomingDataParser::StopAfterCurrent()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void IncomingDataParser::Next()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void IncomingDataParser::Previous()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void IncomingDataParser::SetVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void IncomingDataParser::PlayAt(int _t1, Engine::TrackChangeFlags _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void IncomingDataParser::Enque(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void IncomingDataParser::SetActivePlaylist(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void IncomingDataParser::ShuffleCurrent()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void IncomingDataParser::SetRepeatMode(PlaylistSequence::RepeatMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void IncomingDataParser::SetShuffleMode(PlaylistSequence::ShuffleMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void IncomingDataParser::InsertUrls(int _t1, const QList<QUrl> & _t2, int _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void IncomingDataParser::InsertSongs(int _t1, const SongList & _t2, int _t3, bool _t4, bool _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void IncomingDataParser::RemoveSongs(int _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void IncomingDataParser::SeekTo(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void IncomingDataParser::SendLibrary(RemoteClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void IncomingDataParser::RateCurrentSong(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void IncomingDataParser::DoGlobalSearch(QString _t1, RemoteClient * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void IncomingDataParser::SendSavedRadios(RemoteClient * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void IncomingDataParser::SendListFiles(QString _t1, RemoteClient * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void IncomingDataParser::AddToPlaylistSignal(QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void IncomingDataParser::SetCurrentPlaylist(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
