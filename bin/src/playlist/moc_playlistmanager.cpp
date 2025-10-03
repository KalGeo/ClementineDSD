/****************************************************************************
** Meta object code from reading C++ file 'playlistmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaylistManagerInterface_t {
    QByteArrayData data[70];
    char stringdata0[875];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistManagerInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistManagerInterface_t qt_meta_stringdata_PlaylistManagerInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "PlaylistManagerInterface"
QT_MOC_LITERAL(1, 25, 26), // "PlaylistManagerInitialized"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 13), // "PlaylistAdded"
QT_MOC_LITERAL(4, 67, 2), // "id"
QT_MOC_LITERAL(5, 70, 4), // "name"
QT_MOC_LITERAL(6, 75, 8), // "favorite"
QT_MOC_LITERAL(7, 84, 15), // "PlaylistDeleted"
QT_MOC_LITERAL(8, 100, 14), // "PlaylistClosed"
QT_MOC_LITERAL(9, 115, 15), // "PlaylistRenamed"
QT_MOC_LITERAL(10, 131, 8), // "new_name"
QT_MOC_LITERAL(11, 140, 17), // "PlaylistFavorited"
QT_MOC_LITERAL(12, 158, 14), // "CurrentChanged"
QT_MOC_LITERAL(13, 173, 9), // "Playlist*"
QT_MOC_LITERAL(14, 183, 12), // "new_playlist"
QT_MOC_LITERAL(15, 196, 13), // "ActiveChanged"
QT_MOC_LITERAL(16, 210, 5), // "Error"
QT_MOC_LITERAL(17, 216, 7), // "message"
QT_MOC_LITERAL(18, 224, 18), // "SummaryTextChanged"
QT_MOC_LITERAL(19, 243, 7), // "summary"
QT_MOC_LITERAL(20, 251, 18), // "CurrentSongChanged"
QT_MOC_LITERAL(21, 270, 4), // "Song"
QT_MOC_LITERAL(22, 275, 4), // "song"
QT_MOC_LITERAL(23, 280, 15), // "PlaylistChanged"
QT_MOC_LITERAL(24, 296, 8), // "playlist"
QT_MOC_LITERAL(25, 305, 15), // "EditingFinished"
QT_MOC_LITERAL(26, 321, 11), // "QModelIndex"
QT_MOC_LITERAL(27, 333, 5), // "index"
QT_MOC_LITERAL(28, 339, 13), // "PlayRequested"
QT_MOC_LITERAL(29, 353, 3), // "New"
QT_MOC_LITERAL(30, 357, 8), // "SongList"
QT_MOC_LITERAL(31, 366, 5), // "songs"
QT_MOC_LITERAL(32, 372, 12), // "special_type"
QT_MOC_LITERAL(33, 385, 4), // "Load"
QT_MOC_LITERAL(34, 390, 8), // "filename"
QT_MOC_LITERAL(35, 399, 4), // "Save"
QT_MOC_LITERAL(36, 404, 14), // "Playlist::Path"
QT_MOC_LITERAL(37, 419, 9), // "path_type"
QT_MOC_LITERAL(38, 429, 6), // "Rename"
QT_MOC_LITERAL(39, 436, 6), // "Delete"
QT_MOC_LITERAL(40, 443, 5), // "Close"
QT_MOC_LITERAL(41, 449, 4), // "Open"
QT_MOC_LITERAL(42, 454, 19), // "ChangePlaylistOrder"
QT_MOC_LITERAL(43, 474, 10), // "QList<int>"
QT_MOC_LITERAL(44, 485, 3), // "ids"
QT_MOC_LITERAL(45, 489, 5), // "Enque"
QT_MOC_LITERAL(46, 495, 26), // "SongChangeRequestProcessed"
QT_MOC_LITERAL(47, 522, 3), // "url"
QT_MOC_LITERAL(48, 526, 5), // "valid"
QT_MOC_LITERAL(49, 532, 18), // "SetCurrentPlaylist"
QT_MOC_LITERAL(50, 551, 17), // "SetActivePlaylist"
QT_MOC_LITERAL(51, 569, 18), // "SetActiveToCurrent"
QT_MOC_LITERAL(52, 588, 16), // "SelectionChanged"
QT_MOC_LITERAL(53, 605, 14), // "QItemSelection"
QT_MOC_LITERAL(54, 620, 9), // "selection"
QT_MOC_LITERAL(55, 630, 12), // "ClearCurrent"
QT_MOC_LITERAL(56, 643, 14), // "ShuffleCurrent"
QT_MOC_LITERAL(57, 658, 23), // "RemoveDuplicatesCurrent"
QT_MOC_LITERAL(58, 682, 24), // "RemoveUnavailableCurrent"
QT_MOC_LITERAL(59, 707, 16), // "SetActivePlaying"
QT_MOC_LITERAL(60, 724, 15), // "SetActivePaused"
QT_MOC_LITERAL(61, 740, 16), // "SetActiveStopped"
QT_MOC_LITERAL(62, 757, 23), // "SetActiveStreamMetadata"
QT_MOC_LITERAL(63, 781, 15), // "RateCurrentSong"
QT_MOC_LITERAL(64, 797, 6), // "rating"
QT_MOC_LITERAL(65, 804, 17), // "PlaySmartPlaylist"
QT_MOC_LITERAL(66, 822, 29), // "smart_playlists::GeneratorPtr"
QT_MOC_LITERAL(67, 852, 9), // "generator"
QT_MOC_LITERAL(68, 862, 6), // "as_new"
QT_MOC_LITERAL(69, 869, 5) // "clear"

    },
    "PlaylistManagerInterface\0"
    "PlaylistManagerInitialized\0\0PlaylistAdded\0"
    "id\0name\0favorite\0PlaylistDeleted\0"
    "PlaylistClosed\0PlaylistRenamed\0new_name\0"
    "PlaylistFavorited\0CurrentChanged\0"
    "Playlist*\0new_playlist\0ActiveChanged\0"
    "Error\0message\0SummaryTextChanged\0"
    "summary\0CurrentSongChanged\0Song\0song\0"
    "PlaylistChanged\0playlist\0EditingFinished\0"
    "QModelIndex\0index\0PlayRequested\0New\0"
    "SongList\0songs\0special_type\0Load\0"
    "filename\0Save\0Playlist::Path\0path_type\0"
    "Rename\0Delete\0Close\0Open\0ChangePlaylistOrder\0"
    "QList<int>\0ids\0Enque\0SongChangeRequestProcessed\0"
    "url\0valid\0SetCurrentPlaylist\0"
    "SetActivePlaylist\0SetActiveToCurrent\0"
    "SelectionChanged\0QItemSelection\0"
    "selection\0ClearCurrent\0ShuffleCurrent\0"
    "RemoveDuplicatesCurrent\0"
    "RemoveUnavailableCurrent\0SetActivePlaying\0"
    "SetActivePaused\0SetActiveStopped\0"
    "SetActiveStreamMetadata\0RateCurrentSong\0"
    "rating\0PlaySmartPlaylist\0"
    "smart_playlists::GeneratorPtr\0generator\0"
    "as_new\0clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistManagerInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    3,  220,    2, 0x06 /* Public */,
       7,    1,  227,    2, 0x06 /* Public */,
       8,    1,  230,    2, 0x06 /* Public */,
       9,    2,  233,    2, 0x06 /* Public */,
      11,    2,  238,    2, 0x06 /* Public */,
      12,    1,  243,    2, 0x06 /* Public */,
      15,    1,  246,    2, 0x06 /* Public */,
      16,    1,  249,    2, 0x06 /* Public */,
      18,    1,  252,    2, 0x06 /* Public */,
      20,    1,  255,    2, 0x06 /* Public */,
      23,    1,  258,    2, 0x06 /* Public */,
      25,    1,  261,    2, 0x06 /* Public */,
      28,    1,  264,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      29,    3,  267,    2, 0x0a /* Public */,
      29,    2,  274,    2, 0x2a /* Public | MethodCloned */,
      29,    1,  279,    2, 0x2a /* Public | MethodCloned */,
      33,    1,  282,    2, 0x0a /* Public */,
      35,    3,  285,    2, 0x0a /* Public */,
      38,    2,  292,    2, 0x0a /* Public */,
      39,    1,  297,    2, 0x0a /* Public */,
      40,    1,  300,    2, 0x0a /* Public */,
      41,    1,  303,    2, 0x0a /* Public */,
      42,    1,  306,    2, 0x0a /* Public */,
      45,    2,  309,    2, 0x0a /* Public */,
      46,    2,  314,    2, 0x0a /* Public */,
      49,    1,  319,    2, 0x0a /* Public */,
      50,    1,  322,    2, 0x0a /* Public */,
      51,    0,  325,    2, 0x0a /* Public */,
      52,    1,  326,    2, 0x0a /* Public */,
      55,    0,  329,    2, 0x0a /* Public */,
      56,    0,  330,    2, 0x0a /* Public */,
      57,    0,  331,    2, 0x0a /* Public */,
      58,    0,  332,    2, 0x0a /* Public */,
      59,    0,  333,    2, 0x0a /* Public */,
      60,    0,  334,    2, 0x0a /* Public */,
      61,    0,  335,    2, 0x0a /* Public */,
      62,    2,  336,    2, 0x0a /* Public */,
      63,    1,  341,    2, 0x0a /* Public */,
      63,    1,  344,    2, 0x0a /* Public */,
      65,    3,  347,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,    4,    5,    6,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,    6,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 13,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void, 0x80000000 | 26,   27,

 // slots: parameters
    QMetaType::Int, QMetaType::QString, 0x80000000 | 30, QMetaType::QString,    5,   31,   32,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 30,    5,   31,
    QMetaType::Int, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 36,    4,   34,   37,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,   10,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Bool, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,   27,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   47,   48,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 53,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 21,   47,   22,
    QMetaType::Void, QMetaType::Double,   64,
    QMetaType::Void, QMetaType::Int,   64,
    QMetaType::Void, 0x80000000 | 66, QMetaType::Bool, QMetaType::Bool,   67,   68,   69,

       0        // eod
};

void PlaylistManagerInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistManagerInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlaylistManagerInitialized(); break;
        case 1: _t->PlaylistAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 2: _t->PlaylistDeleted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->PlaylistClosed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->PlaylistRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->PlaylistFavorited((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->CurrentChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 7: _t->ActiveChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 8: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->SummaryTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 11: _t->PlaylistChanged((*reinterpret_cast< Playlist*(*)>(_a[1]))); break;
        case 12: _t->EditingFinished((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 13: _t->PlayRequested((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: { int _r = _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->New((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->Load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->Save((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Playlist::Path(*)>(_a[3]))); break;
        case 19: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 20: _t->Delete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: { bool _r = _t->Close((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->Open((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->ChangePlaylistOrder((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 24: _t->Enque((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 26: _t->SetCurrentPlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->SetActivePlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->SetActiveToCurrent(); break;
        case 29: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 30: _t->ClearCurrent(); break;
        case 31: _t->ShuffleCurrent(); break;
        case 32: _t->RemoveDuplicatesCurrent(); break;
        case 33: _t->RemoveUnavailableCurrent(); break;
        case 34: _t->SetActivePlaying(); break;
        case 35: _t->SetActivePaused(); break;
        case 36: _t->SetActiveStopped(); break;
        case 37: _t->SetActiveStreamMetadata((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 38: _t->RateCurrentSong((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 39: _t->RateCurrentSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->PlaySmartPlaylist((*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Playlist* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 37:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistManagerInterface::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistManagerInitialized)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(int , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistAdded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistClosed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistRenamed)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistFavorited)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(Playlist * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::CurrentChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(Playlist * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::ActiveChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::Error)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::SummaryTextChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const Song & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::CurrentSongChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(Playlist * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlaylistChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::EditingFinished)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PlaylistManagerInterface::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistManagerInterface::PlayRequested)) {
                *result = 13;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaylistManagerInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PlaylistManagerInterface.data,
    qt_meta_data_PlaylistManagerInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaylistManagerInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistManagerInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistManagerInterface.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlaylistManagerInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PlaylistManagerInterface::PlaylistManagerInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlaylistManagerInterface::PlaylistAdded(int _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PlaylistManagerInterface::PlaylistDeleted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistManagerInterface::PlaylistClosed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PlaylistManagerInterface::PlaylistRenamed(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PlaylistManagerInterface::PlaylistFavorited(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlaylistManagerInterface::CurrentChanged(Playlist * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void PlaylistManagerInterface::ActiveChanged(Playlist * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PlaylistManagerInterface::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void PlaylistManagerInterface::SummaryTextChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void PlaylistManagerInterface::CurrentSongChanged(const Song & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void PlaylistManagerInterface::PlaylistChanged(Playlist * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void PlaylistManagerInterface::EditingFinished(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void PlaylistManagerInterface::PlayRequested(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
struct qt_meta_stringdata_PlaylistManager_t {
    QByteArrayData data[71];
    char stringdata0[856];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistManager_t qt_meta_stringdata_PlaylistManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlaylistManager"
QT_MOC_LITERAL(1, 16, 3), // "New"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "name"
QT_MOC_LITERAL(4, 26, 8), // "SongList"
QT_MOC_LITERAL(5, 35, 5), // "songs"
QT_MOC_LITERAL(6, 41, 12), // "special_type"
QT_MOC_LITERAL(7, 54, 4), // "Load"
QT_MOC_LITERAL(8, 59, 8), // "filename"
QT_MOC_LITERAL(9, 68, 4), // "Save"
QT_MOC_LITERAL(10, 73, 2), // "id"
QT_MOC_LITERAL(11, 76, 14), // "Playlist::Path"
QT_MOC_LITERAL(12, 91, 9), // "path_type"
QT_MOC_LITERAL(13, 101, 10), // "SaveWithUI"
QT_MOC_LITERAL(14, 112, 13), // "playlist_name"
QT_MOC_LITERAL(15, 126, 6), // "Rename"
QT_MOC_LITERAL(16, 133, 8), // "new_name"
QT_MOC_LITERAL(17, 142, 8), // "Favorite"
QT_MOC_LITERAL(18, 151, 8), // "favorite"
QT_MOC_LITERAL(19, 160, 6), // "Delete"
QT_MOC_LITERAL(20, 167, 5), // "Clear"
QT_MOC_LITERAL(21, 173, 5), // "Close"
QT_MOC_LITERAL(22, 179, 4), // "Open"
QT_MOC_LITERAL(23, 184, 19), // "ChangePlaylistOrder"
QT_MOC_LITERAL(24, 204, 10), // "QList<int>"
QT_MOC_LITERAL(25, 215, 3), // "ids"
QT_MOC_LITERAL(26, 219, 5), // "Enque"
QT_MOC_LITERAL(27, 225, 5), // "index"
QT_MOC_LITERAL(28, 231, 18), // "SetCurrentPlaylist"
QT_MOC_LITERAL(29, 250, 17), // "SetActivePlaylist"
QT_MOC_LITERAL(30, 268, 18), // "SetActiveToCurrent"
QT_MOC_LITERAL(31, 287, 16), // "SelectionChanged"
QT_MOC_LITERAL(32, 304, 14), // "QItemSelection"
QT_MOC_LITERAL(33, 319, 9), // "selection"
QT_MOC_LITERAL(34, 329, 16), // "SetCurrentOrOpen"
QT_MOC_LITERAL(35, 346, 12), // "ClearCurrent"
QT_MOC_LITERAL(36, 359, 14), // "ShuffleCurrent"
QT_MOC_LITERAL(37, 374, 23), // "RemoveDuplicatesCurrent"
QT_MOC_LITERAL(38, 398, 24), // "RemoveUnavailableCurrent"
QT_MOC_LITERAL(39, 423, 23), // "SetActiveStreamMetadata"
QT_MOC_LITERAL(40, 447, 3), // "url"
QT_MOC_LITERAL(41, 451, 4), // "Song"
QT_MOC_LITERAL(42, 456, 4), // "song"
QT_MOC_LITERAL(43, 461, 15), // "RateCurrentSong"
QT_MOC_LITERAL(44, 477, 6), // "rating"
QT_MOC_LITERAL(45, 484, 17), // "PlaySmartPlaylist"
QT_MOC_LITERAL(46, 502, 29), // "smart_playlists::GeneratorPtr"
QT_MOC_LITERAL(47, 532, 9), // "generator"
QT_MOC_LITERAL(48, 542, 6), // "as_new"
QT_MOC_LITERAL(49, 549, 5), // "clear"
QT_MOC_LITERAL(50, 555, 26), // "SongChangeRequestProcessed"
QT_MOC_LITERAL(51, 582, 5), // "valid"
QT_MOC_LITERAL(52, 588, 10), // "InsertUrls"
QT_MOC_LITERAL(53, 599, 11), // "QList<QUrl>"
QT_MOC_LITERAL(54, 611, 4), // "urls"
QT_MOC_LITERAL(55, 616, 3), // "pos"
QT_MOC_LITERAL(56, 620, 8), // "play_now"
QT_MOC_LITERAL(57, 629, 7), // "enqueue"
QT_MOC_LITERAL(58, 637, 11), // "InsertSongs"
QT_MOC_LITERAL(59, 649, 22), // "RemoveItemsWithoutUndo"
QT_MOC_LITERAL(60, 672, 7), // "indices"
QT_MOC_LITERAL(61, 680, 17), // "RemoveCurrentSong"
QT_MOC_LITERAL(62, 698, 16), // "SetActivePlaying"
QT_MOC_LITERAL(63, 715, 15), // "SetActivePaused"
QT_MOC_LITERAL(64, 731, 16), // "SetActiveStopped"
QT_MOC_LITERAL(65, 748, 21), // "OneOfPlaylistsChanged"
QT_MOC_LITERAL(66, 770, 17), // "UpdateSummaryText"
QT_MOC_LITERAL(67, 788, 15), // "SongsDiscovered"
QT_MOC_LITERAL(68, 804, 26), // "ItemsLoadedForSavePlaylist"
QT_MOC_LITERAL(69, 831, 17), // "QFuture<SongList>"
QT_MOC_LITERAL(70, 849, 6) // "future"

    },
    "PlaylistManager\0New\0\0name\0SongList\0"
    "songs\0special_type\0Load\0filename\0Save\0"
    "id\0Playlist::Path\0path_type\0SaveWithUI\0"
    "playlist_name\0Rename\0new_name\0Favorite\0"
    "favorite\0Delete\0Clear\0Close\0Open\0"
    "ChangePlaylistOrder\0QList<int>\0ids\0"
    "Enque\0index\0SetCurrentPlaylist\0"
    "SetActivePlaylist\0SetActiveToCurrent\0"
    "SelectionChanged\0QItemSelection\0"
    "selection\0SetCurrentOrOpen\0ClearCurrent\0"
    "ShuffleCurrent\0RemoveDuplicatesCurrent\0"
    "RemoveUnavailableCurrent\0"
    "SetActiveStreamMetadata\0url\0Song\0song\0"
    "RateCurrentSong\0rating\0PlaySmartPlaylist\0"
    "smart_playlists::GeneratorPtr\0generator\0"
    "as_new\0clear\0SongChangeRequestProcessed\0"
    "valid\0InsertUrls\0QList<QUrl>\0urls\0pos\0"
    "play_now\0enqueue\0InsertSongs\0"
    "RemoveItemsWithoutUndo\0indices\0"
    "RemoveCurrentSong\0SetActivePlaying\0"
    "SetActivePaused\0SetActiveStopped\0"
    "OneOfPlaylistsChanged\0UpdateSummaryText\0"
    "SongsDiscovered\0ItemsLoadedForSavePlaylist\0"
    "QFuture<SongList>\0future"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      45,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,  239,    2, 0x0a /* Public */,
       1,    2,  246,    2, 0x2a /* Public | MethodCloned */,
       1,    1,  251,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  254,    2, 0x0a /* Public */,
       9,    3,  257,    2, 0x0a /* Public */,
      13,    2,  264,    2, 0x0a /* Public */,
      15,    2,  269,    2, 0x0a /* Public */,
      17,    2,  274,    2, 0x0a /* Public */,
      19,    1,  279,    2, 0x0a /* Public */,
      20,    1,  282,    2, 0x0a /* Public */,
      21,    1,  285,    2, 0x0a /* Public */,
      22,    1,  288,    2, 0x0a /* Public */,
      23,    1,  291,    2, 0x0a /* Public */,
      26,    2,  294,    2, 0x0a /* Public */,
      28,    1,  299,    2, 0x0a /* Public */,
      29,    1,  302,    2, 0x0a /* Public */,
      30,    0,  305,    2, 0x0a /* Public */,
      31,    1,  306,    2, 0x0a /* Public */,
      34,    1,  309,    2, 0x0a /* Public */,
      35,    0,  312,    2, 0x0a /* Public */,
      36,    0,  313,    2, 0x0a /* Public */,
      37,    0,  314,    2, 0x0a /* Public */,
      38,    0,  315,    2, 0x0a /* Public */,
      39,    2,  316,    2, 0x0a /* Public */,
      43,    1,  321,    2, 0x0a /* Public */,
      43,    1,  324,    2, 0x0a /* Public */,
      45,    3,  327,    2, 0x0a /* Public */,
      50,    2,  334,    2, 0x0a /* Public */,
      52,    5,  339,    2, 0x0a /* Public */,
      52,    4,  350,    2, 0x2a /* Public | MethodCloned */,
      52,    3,  359,    2, 0x2a /* Public | MethodCloned */,
      52,    2,  366,    2, 0x2a /* Public | MethodCloned */,
      58,    5,  371,    2, 0x0a /* Public */,
      58,    4,  382,    2, 0x2a /* Public | MethodCloned */,
      58,    3,  391,    2, 0x2a /* Public | MethodCloned */,
      58,    2,  398,    2, 0x2a /* Public | MethodCloned */,
      59,    2,  403,    2, 0x0a /* Public */,
      61,    0,  408,    2, 0x0a /* Public */,
      62,    0,  409,    2, 0x08 /* Private */,
      63,    0,  410,    2, 0x08 /* Private */,
      64,    0,  411,    2, 0x08 /* Private */,
      65,    0,  412,    2, 0x08 /* Private */,
      66,    0,  413,    2, 0x08 /* Private */,
      67,    1,  414,    2, 0x08 /* Private */,
      68,    3,  417,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Int, QMetaType::QString, 0x80000000 | 4, QMetaType::QString,    3,    5,    6,
    QMetaType::Int, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Int, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 11,   10,    8,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   10,   18,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Bool, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   27,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 41,   40,   42,
    QMetaType::Void, QMetaType::Double,   44,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, 0x80000000 | 46, QMetaType::Bool, QMetaType::Bool,   47,   48,   49,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   40,   51,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 53, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   10,   54,   55,   56,   57,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 53, QMetaType::Int, QMetaType::Bool,   10,   54,   55,   56,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 53, QMetaType::Int,   10,   54,   55,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 53,   10,   54,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   10,    5,   55,   56,   57,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int, QMetaType::Bool,   10,    5,   55,   56,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4, QMetaType::Int,   10,    5,   55,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,   10,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 24,   10,   60,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 69, QMetaType::QString, 0x80000000 | 11,   70,    8,   12,

       0        // eod
};

void PlaylistManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->New((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->New((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->Load((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Save((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Playlist::Path(*)>(_a[3]))); break;
        case 5: _t->SaveWithUI((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->Rename((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->Favorite((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->Delete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->Clear((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: { bool _r = _t->Close((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->Open((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ChangePlaylistOrder((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 13: _t->Enque((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->SetCurrentPlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->SetActivePlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->SetActiveToCurrent(); break;
        case 17: _t->SelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1]))); break;
        case 18: _t->SetCurrentOrOpen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->ClearCurrent(); break;
        case 20: _t->ShuffleCurrent(); break;
        case 21: _t->RemoveDuplicatesCurrent(); break;
        case 22: _t->RemoveUnavailableCurrent(); break;
        case 23: _t->SetActiveStreamMetadata((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 24: _t->RateCurrentSong((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->RateCurrentSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->PlaySmartPlaylist((*reinterpret_cast< smart_playlists::GeneratorPtr(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 27: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 28: _t->InsertUrls((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 29: _t->InsertUrls((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 30: _t->InsertUrls((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 31: _t->InsertUrls((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<QUrl>(*)>(_a[2]))); break;
        case 32: _t->InsertSongs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 33: _t->InsertSongs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 34: _t->InsertSongs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: _t->InsertSongs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        case 36: _t->RemoveItemsWithoutUndo((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 37: _t->RemoveCurrentSong(); break;
        case 38: _t->SetActivePlaying(); break;
        case 39: _t->SetActivePaused(); break;
        case 40: _t->SetActiveStopped(); break;
        case 41: _t->OneOfPlaylistsChanged(); break;
        case 42: _t->UpdateSummaryText(); break;
        case 43: _t->SongsDiscovered((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 44: _t->ItemsLoadedForSavePlaylist((*reinterpret_cast< QFuture<SongList>(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< Playlist::Path(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 29:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaylistManager::staticMetaObject = { {
    QMetaObject::SuperData::link<PlaylistManagerInterface::staticMetaObject>(),
    qt_meta_stringdata_PlaylistManager.data,
    qt_meta_data_PlaylistManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaylistManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistManager.stringdata0))
        return static_cast<void*>(this);
    return PlaylistManagerInterface::qt_metacast(_clname);
}

int PlaylistManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PlaylistManagerInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 45)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 45;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
