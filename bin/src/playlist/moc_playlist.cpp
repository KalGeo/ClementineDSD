/****************************************************************************
** Meta object code from reading C++ file 'playlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongInsertVetoListener_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongInsertVetoListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongInsertVetoListener_t qt_meta_stringdata_SongInsertVetoListener = {
    {
QT_MOC_LITERAL(0, 0, 22) // "SongInsertVetoListener"

    },
    "SongInsertVetoListener"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongInsertVetoListener[] = {

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

void SongInsertVetoListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SongInsertVetoListener::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongInsertVetoListener.data,
    qt_meta_data_SongInsertVetoListener,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongInsertVetoListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongInsertVetoListener::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongInsertVetoListener.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongInsertVetoListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Playlist_t {
    QByteArrayData data[71];
    char stringdata0[930];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Playlist_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Playlist_t qt_meta_stringdata_Playlist = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Playlist"
QT_MOC_LITERAL(1, 9, 15), // "RestoreFinished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 18), // "CurrentSongChanged"
QT_MOC_LITERAL(4, 45, 4), // "Song"
QT_MOC_LITERAL(5, 50, 8), // "metadata"
QT_MOC_LITERAL(6, 59, 15), // "EditingFinished"
QT_MOC_LITERAL(7, 75, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 87, 5), // "index"
QT_MOC_LITERAL(9, 93, 13), // "PlayRequested"
QT_MOC_LITERAL(10, 107, 15), // "PlaylistChanged"
QT_MOC_LITERAL(11, 123, 18), // "DynamicModeChanged"
QT_MOC_LITERAL(12, 142, 7), // "dynamic"
QT_MOC_LITERAL(13, 150, 5), // "Error"
QT_MOC_LITERAL(14, 156, 7), // "message"
QT_MOC_LITERAL(15, 164, 12), // "QueueChanged"
QT_MOC_LITERAL(16, 177, 15), // "set_current_row"
QT_MOC_LITERAL(17, 193, 11), // "is_stopping"
QT_MOC_LITERAL(18, 205, 6), // "Paused"
QT_MOC_LITERAL(19, 212, 7), // "Playing"
QT_MOC_LITERAL(20, 220, 7), // "Stopped"
QT_MOC_LITERAL(21, 228, 13), // "IgnoreSorting"
QT_MOC_LITERAL(22, 242, 5), // "value"
QT_MOC_LITERAL(23, 248, 19), // "ClearStreamMetadata"
QT_MOC_LITERAL(24, 268, 17), // "SetStreamMetadata"
QT_MOC_LITERAL(25, 286, 3), // "url"
QT_MOC_LITERAL(26, 290, 4), // "song"
QT_MOC_LITERAL(27, 295, 11), // "ItemChanged"
QT_MOC_LITERAL(28, 307, 15), // "PlaylistItemPtr"
QT_MOC_LITERAL(29, 323, 4), // "item"
QT_MOC_LITERAL(30, 328, 11), // "UpdateItems"
QT_MOC_LITERAL(31, 340, 8), // "SongList"
QT_MOC_LITERAL(32, 349, 5), // "songs"
QT_MOC_LITERAL(33, 355, 5), // "Clear"
QT_MOC_LITERAL(34, 361, 20), // "RemoveDuplicateSongs"
QT_MOC_LITERAL(35, 382, 22), // "RemoveUnavailableSongs"
QT_MOC_LITERAL(36, 405, 7), // "Shuffle"
QT_MOC_LITERAL(37, 413, 18), // "ShuffleModeChanged"
QT_MOC_LITERAL(38, 432, 29), // "PlaylistSequence::ShuffleMode"
QT_MOC_LITERAL(39, 462, 4), // "mode"
QT_MOC_LITERAL(40, 467, 21), // "ExpandDynamicPlaylist"
QT_MOC_LITERAL(41, 489, 25), // "RepopulateDynamicPlaylist"
QT_MOC_LITERAL(42, 515, 22), // "TurnOffDynamicPlaylist"
QT_MOC_LITERAL(43, 538, 18), // "SetColumnAlignment"
QT_MOC_LITERAL(44, 557, 18), // "ColumnAlignmentMap"
QT_MOC_LITERAL(45, 576, 9), // "alignment"
QT_MOC_LITERAL(46, 586, 10), // "InsertUrls"
QT_MOC_LITERAL(47, 597, 11), // "QList<QUrl>"
QT_MOC_LITERAL(48, 609, 4), // "urls"
QT_MOC_LITERAL(49, 614, 3), // "pos"
QT_MOC_LITERAL(50, 618, 8), // "play_now"
QT_MOC_LITERAL(51, 627, 7), // "enqueue"
QT_MOC_LITERAL(52, 635, 12), // "enqueue_next"
QT_MOC_LITERAL(53, 648, 22), // "RemoveItemsWithoutUndo"
QT_MOC_LITERAL(54, 671, 10), // "QList<int>"
QT_MOC_LITERAL(55, 682, 7), // "indices"
QT_MOC_LITERAL(56, 690, 23), // "TracksAboutToBeDequeued"
QT_MOC_LITERAL(57, 714, 5), // "begin"
QT_MOC_LITERAL(58, 720, 3), // "end"
QT_MOC_LITERAL(59, 724, 14), // "TracksDequeued"
QT_MOC_LITERAL(60, 739, 14), // "TracksEnqueued"
QT_MOC_LITERAL(61, 754, 18), // "QueueLayoutChanged"
QT_MOC_LITERAL(62, 773, 16), // "SongSaveComplete"
QT_MOC_LITERAL(63, 790, 15), // "TagReaderReply*"
QT_MOC_LITERAL(64, 806, 5), // "reply"
QT_MOC_LITERAL(65, 812, 21), // "QPersistentModelIndex"
QT_MOC_LITERAL(66, 834, 18), // "ItemReloadComplete"
QT_MOC_LITERAL(67, 853, 11), // "ItemsLoaded"
QT_MOC_LITERAL(68, 865, 25), // "QFuture<PlaylistItemList>"
QT_MOC_LITERAL(69, 891, 6), // "future"
QT_MOC_LITERAL(70, 898, 31) // "SongInsertVetoListenerDestroyed"

    },
    "Playlist\0RestoreFinished\0\0CurrentSongChanged\0"
    "Song\0metadata\0EditingFinished\0QModelIndex\0"
    "index\0PlayRequested\0PlaylistChanged\0"
    "DynamicModeChanged\0dynamic\0Error\0"
    "message\0QueueChanged\0set_current_row\0"
    "is_stopping\0Paused\0Playing\0Stopped\0"
    "IgnoreSorting\0value\0ClearStreamMetadata\0"
    "SetStreamMetadata\0url\0song\0ItemChanged\0"
    "PlaylistItemPtr\0item\0UpdateItems\0"
    "SongList\0songs\0Clear\0RemoveDuplicateSongs\0"
    "RemoveUnavailableSongs\0Shuffle\0"
    "ShuffleModeChanged\0PlaylistSequence::ShuffleMode\0"
    "mode\0ExpandDynamicPlaylist\0"
    "RepopulateDynamicPlaylist\0"
    "TurnOffDynamicPlaylist\0SetColumnAlignment\0"
    "ColumnAlignmentMap\0alignment\0InsertUrls\0"
    "QList<QUrl>\0urls\0pos\0play_now\0enqueue\0"
    "enqueue_next\0RemoveItemsWithoutUndo\0"
    "QList<int>\0indices\0TracksAboutToBeDequeued\0"
    "begin\0end\0TracksDequeued\0TracksEnqueued\0"
    "QueueLayoutChanged\0SongSaveComplete\0"
    "TagReaderReply*\0reply\0QPersistentModelIndex\0"
    "ItemReloadComplete\0ItemsLoaded\0"
    "QFuture<PlaylistItemList>\0future\0"
    "SongInsertVetoListenerDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Playlist[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  219,    2, 0x06 /* Public */,
       3,    1,  220,    2, 0x06 /* Public */,
       6,    1,  223,    2, 0x06 /* Public */,
       9,    1,  226,    2, 0x06 /* Public */,
      10,    0,  229,    2, 0x06 /* Public */,
      11,    1,  230,    2, 0x06 /* Public */,
      13,    1,  233,    2, 0x06 /* Public */,
      15,    0,  236,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    2,  237,    2, 0x0a /* Public */,
      16,    1,  242,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  245,    2, 0x0a /* Public */,
      19,    0,  246,    2, 0x0a /* Public */,
      20,    0,  247,    2, 0x0a /* Public */,
      21,    1,  248,    2, 0x0a /* Public */,
      23,    0,  251,    2, 0x0a /* Public */,
      24,    2,  252,    2, 0x0a /* Public */,
      27,    1,  257,    2, 0x0a /* Public */,
      30,    1,  260,    2, 0x0a /* Public */,
      33,    0,  263,    2, 0x0a /* Public */,
      34,    0,  264,    2, 0x0a /* Public */,
      35,    0,  265,    2, 0x0a /* Public */,
      36,    0,  266,    2, 0x0a /* Public */,
      37,    1,  267,    2, 0x0a /* Public */,
      40,    0,  270,    2, 0x0a /* Public */,
      41,    0,  271,    2, 0x0a /* Public */,
      42,    0,  272,    2, 0x0a /* Public */,
      43,    1,  273,    2, 0x0a /* Public */,
      46,    5,  276,    2, 0x0a /* Public */,
      46,    4,  287,    2, 0x2a /* Public | MethodCloned */,
      46,    3,  296,    2, 0x2a /* Public | MethodCloned */,
      46,    2,  303,    2, 0x2a /* Public | MethodCloned */,
      46,    1,  308,    2, 0x2a /* Public | MethodCloned */,
      53,    1,  311,    2, 0x0a /* Public */,
      56,    3,  314,    2, 0x08 /* Private */,
      59,    0,  321,    2, 0x08 /* Private */,
      60,    3,  322,    2, 0x08 /* Private */,
      61,    0,  329,    2, 0x08 /* Private */,
      62,    2,  330,    2, 0x08 /* Private */,
      66,    1,  335,    2, 0x08 /* Private */,
      67,    1,  338,    2, 0x08 /* Private */,
      70,    0,  341,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    8,   17,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4,   25,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 47, QMetaType::Int, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,   48,   49,   50,   51,   52,
    QMetaType::Void, 0x80000000 | 47, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   48,   49,   50,   51,
    QMetaType::Void, 0x80000000 | 47, QMetaType::Int, QMetaType::Bool,   48,   49,   50,
    QMetaType::Void, 0x80000000 | 47, QMetaType::Int,   48,   49,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,    2,   57,   58,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int, QMetaType::Int,    2,   57,   58,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63, 0x80000000 | 65,   64,    8,
    QMetaType::Void, 0x80000000 | 65,    8,
    QMetaType::Void, 0x80000000 | 68,   69,
    QMetaType::Void,

       0        // eod
};

void Playlist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Playlist *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RestoreFinished(); break;
        case 1: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->EditingFinished((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->PlayRequested((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->PlaylistChanged(); break;
        case 5: _t->DynamicModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->QueueChanged(); break;
        case 8: _t->set_current_row((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->set_current_row((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->Paused(); break;
        case 11: _t->Playing(); break;
        case 12: _t->Stopped(); break;
        case 13: _t->IgnoreSorting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->ClearStreamMetadata(); break;
        case 15: _t->SetStreamMetadata((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 16: _t->ItemChanged((*reinterpret_cast< PlaylistItemPtr(*)>(_a[1]))); break;
        case 17: _t->UpdateItems((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 18: _t->Clear(); break;
        case 19: _t->RemoveDuplicateSongs(); break;
        case 20: _t->RemoveUnavailableSongs(); break;
        case 21: _t->Shuffle(); break;
        case 22: _t->ShuffleModeChanged((*reinterpret_cast< PlaylistSequence::ShuffleMode(*)>(_a[1]))); break;
        case 23: _t->ExpandDynamicPlaylist(); break;
        case 24: _t->RepopulateDynamicPlaylist(); break;
        case 25: _t->TurnOffDynamicPlaylist(); break;
        case 26: _t->SetColumnAlignment((*reinterpret_cast< const ColumnAlignmentMap(*)>(_a[1]))); break;
        case 27: _t->InsertUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< bool(*)>(_a[5]))); break;
        case 28: _t->InsertUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 29: _t->InsertUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 30: _t->InsertUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 31: _t->InsertUrls((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 32: _t->RemoveItemsWithoutUndo((*reinterpret_cast< const QList<int>(*)>(_a[1]))); break;
        case 33: _t->TracksAboutToBeDequeued((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->TracksDequeued(); break;
        case 35: _t->TracksEnqueued((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->QueueLayoutChanged(); break;
        case 37: _t->SongSaveComplete((*reinterpret_cast< TagReaderReply*(*)>(_a[1])),(*reinterpret_cast< const QPersistentModelIndex(*)>(_a[2]))); break;
        case 38: _t->ItemReloadComplete((*reinterpret_cast< const QPersistentModelIndex(*)>(_a[1]))); break;
        case 39: _t->ItemsLoaded((*reinterpret_cast< QFuture<PlaylistItemList>(*)>(_a[1]))); break;
        case 40: _t->SongInsertVetoListenerDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PlaylistItemPtr >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ColumnAlignmentMap >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Playlist::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::RestoreFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const Song & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::CurrentSongChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::EditingFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::PlayRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Playlist::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::PlaylistChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::DynamicModeChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Playlist::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::Error)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Playlist::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Playlist::QueueChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Playlist::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_Playlist.data,
    qt_meta_data_Playlist,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Playlist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Playlist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Playlist.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Playlist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
void Playlist::RestoreFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Playlist::CurrentSongChanged(const Song & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Playlist::EditingFinished(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Playlist::PlayRequested(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Playlist::PlaylistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Playlist::DynamicModeChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Playlist::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Playlist::QueueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
