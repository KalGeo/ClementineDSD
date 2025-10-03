/****************************************************************************
** Meta object code from reading C++ file 'playlistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaylistView_t {
    QByteArrayData data[62];
    char stringdata0[865];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistView_t qt_meta_stringdata_PlaylistView = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PlaylistView"
QT_MOC_LITERAL(1, 13, 8), // "PlayItem"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 35, 5), // "index"
QT_MOC_LITERAL(5, 41, 9), // "PlayPause"
QT_MOC_LITERAL(6, 51, 12), // "RightClicked"
QT_MOC_LITERAL(7, 64, 10), // "global_pos"
QT_MOC_LITERAL(8, 75, 11), // "SeekForward"
QT_MOC_LITERAL(9, 87, 12), // "SeekBackward"
QT_MOC_LITERAL(10, 100, 19), // "FocusOnFilterSignal"
QT_MOC_LITERAL(11, 120, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 131, 5), // "event"
QT_MOC_LITERAL(13, 137, 25), // "BackgroundPropertyChanged"
QT_MOC_LITERAL(14, 163, 22), // "ColumnAlignmentChanged"
QT_MOC_LITERAL(15, 186, 18), // "ColumnAlignmentMap"
QT_MOC_LITERAL(16, 205, 9), // "alignment"
QT_MOC_LITERAL(17, 215, 14), // "ReloadSettings"
QT_MOC_LITERAL(18, 230, 11), // "StopGlowing"
QT_MOC_LITERAL(19, 242, 12), // "StartGlowing"
QT_MOC_LITERAL(20, 255, 27), // "JumpToCurrentlyPlayingTrack"
QT_MOC_LITERAL(21, 283, 21), // "JumpToLastPlayedTrack"
QT_MOC_LITERAL(22, 305, 11), // "closeEditor"
QT_MOC_LITERAL(23, 317, 8), // "QWidget*"
QT_MOC_LITERAL(24, 326, 6), // "editor"
QT_MOC_LITERAL(25, 333, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(26, 368, 4), // "hint"
QT_MOC_LITERAL(27, 373, 18), // "DynamicModeChanged"
QT_MOC_LITERAL(28, 392, 7), // "dynamic"
QT_MOC_LITERAL(29, 400, 18), // "SetColumnAlignment"
QT_MOC_LITERAL(30, 419, 7), // "section"
QT_MOC_LITERAL(31, 427, 13), // "Qt::Alignment"
QT_MOC_LITERAL(32, 441, 26), // "CopyCurrentSongToClipboard"
QT_MOC_LITERAL(33, 468, 18), // "CurrentSongChanged"
QT_MOC_LITERAL(34, 487, 4), // "Song"
QT_MOC_LITERAL(35, 492, 8), // "new_song"
QT_MOC_LITERAL(36, 501, 3), // "uri"
QT_MOC_LITERAL(37, 505, 9), // "cover_art"
QT_MOC_LITERAL(38, 515, 13), // "PlayerStopped"
QT_MOC_LITERAL(39, 529, 12), // "LoadGeometry"
QT_MOC_LITERAL(40, 542, 20), // "LoadRatingLockStatus"
QT_MOC_LITERAL(41, 563, 13), // "DirtyGeometry"
QT_MOC_LITERAL(42, 577, 13), // "DirtySettings"
QT_MOC_LITERAL(43, 591, 12), // "SaveGeometry"
QT_MOC_LITERAL(44, 604, 10), // "QSettings*"
QT_MOC_LITERAL(45, 615, 8), // "settings"
QT_MOC_LITERAL(46, 624, 19), // "SetRatingLockStatus"
QT_MOC_LITERAL(47, 644, 5), // "state"
QT_MOC_LITERAL(48, 650, 20), // "GlowIntensityChanged"
QT_MOC_LITERAL(49, 671, 24), // "InhibitAutoscrollTimeout"
QT_MOC_LITERAL(50, 696, 15), // "MaybeAutoscroll"
QT_MOC_LITERAL(51, 712, 29), // "InvalidateCachedCurrentPixmap"
QT_MOC_LITERAL(52, 742, 17), // "PlaylistDestroyed"
QT_MOC_LITERAL(53, 760, 12), // "SaveSettings"
QT_MOC_LITERAL(54, 773, 1), // "s"
QT_MOC_LITERAL(55, 775, 14), // "StretchChanged"
QT_MOC_LITERAL(56, 790, 7), // "stretch"
QT_MOC_LITERAL(57, 798, 13), // "RatingHoverIn"
QT_MOC_LITERAL(58, 812, 3), // "pos"
QT_MOC_LITERAL(59, 816, 14), // "RatingHoverOut"
QT_MOC_LITERAL(60, 831, 27), // "FadePreviousBackgroundImage"
QT_MOC_LITERAL(61, 859, 5) // "value"

    },
    "PlaylistView\0PlayItem\0\0QModelIndex\0"
    "index\0PlayPause\0RightClicked\0global_pos\0"
    "SeekForward\0SeekBackward\0FocusOnFilterSignal\0"
    "QKeyEvent*\0event\0BackgroundPropertyChanged\0"
    "ColumnAlignmentChanged\0ColumnAlignmentMap\0"
    "alignment\0ReloadSettings\0StopGlowing\0"
    "StartGlowing\0JumpToCurrentlyPlayingTrack\0"
    "JumpToLastPlayedTrack\0closeEditor\0"
    "QWidget*\0editor\0QAbstractItemDelegate::EndEditHint\0"
    "hint\0DynamicModeChanged\0dynamic\0"
    "SetColumnAlignment\0section\0Qt::Alignment\0"
    "CopyCurrentSongToClipboard\0"
    "CurrentSongChanged\0Song\0new_song\0uri\0"
    "cover_art\0PlayerStopped\0LoadGeometry\0"
    "LoadRatingLockStatus\0DirtyGeometry\0"
    "DirtySettings\0SaveGeometry\0QSettings*\0"
    "settings\0SetRatingLockStatus\0state\0"
    "GlowIntensityChanged\0InhibitAutoscrollTimeout\0"
    "MaybeAutoscroll\0InvalidateCachedCurrentPixmap\0"
    "PlaylistDestroyed\0SaveSettings\0s\0"
    "StretchChanged\0stretch\0RatingHoverIn\0"
    "pos\0RatingHoverOut\0FadePreviousBackgroundImage\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  189,    2, 0x06 /* Public */,
       5,    0,  192,    2, 0x06 /* Public */,
       6,    2,  193,    2, 0x06 /* Public */,
       8,    0,  198,    2, 0x06 /* Public */,
       9,    0,  199,    2, 0x06 /* Public */,
      10,    1,  200,    2, 0x06 /* Public */,
      13,    0,  203,    2, 0x06 /* Public */,
      14,    1,  204,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  207,    2, 0x0a /* Public */,
      18,    0,  208,    2, 0x0a /* Public */,
      19,    0,  209,    2, 0x0a /* Public */,
      20,    0,  210,    2, 0x0a /* Public */,
      21,    0,  211,    2, 0x0a /* Public */,
      22,    2,  212,    2, 0x0a /* Public */,
      27,    1,  217,    2, 0x0a /* Public */,
      29,    2,  220,    2, 0x0a /* Public */,
      32,    0,  225,    2, 0x0a /* Public */,
      33,    3,  226,    2, 0x0a /* Public */,
      38,    0,  233,    2, 0x0a /* Public */,
      39,    0,  234,    2, 0x08 /* Private */,
      40,    0,  235,    2, 0x08 /* Private */,
      41,    0,  236,    2, 0x08 /* Private */,
      42,    0,  237,    2, 0x08 /* Private */,
      43,    1,  238,    2, 0x08 /* Private */,
      46,    1,  241,    2, 0x08 /* Private */,
      48,    0,  244,    2, 0x08 /* Private */,
      49,    0,  245,    2, 0x08 /* Private */,
      50,    0,  246,    2, 0x08 /* Private */,
      51,    0,  247,    2, 0x08 /* Private */,
      52,    0,  248,    2, 0x08 /* Private */,
      53,    1,  249,    2, 0x08 /* Private */,
      55,    1,  252,    2, 0x08 /* Private */,
      57,    2,  255,    2, 0x08 /* Private */,
      59,    0,  260,    2, 0x08 /* Private */,
      60,    1,  261,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint, 0x80000000 | 3,    7,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 25,   24,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 31,   30,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34, QMetaType::QString, QMetaType::QImage,   35,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   54,
    QMetaType::Void, QMetaType::Bool,   56,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPoint,    4,   58,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   61,

       0        // eod
};

void PlaylistView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlayItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->PlayPause(); break;
        case 2: _t->RightClicked((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->SeekForward(); break;
        case 4: _t->SeekBackward(); break;
        case 5: _t->FocusOnFilterSignal((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->BackgroundPropertyChanged(); break;
        case 7: _t->ColumnAlignmentChanged((*reinterpret_cast< const ColumnAlignmentMap(*)>(_a[1]))); break;
        case 8: _t->ReloadSettings(); break;
        case 9: _t->StopGlowing(); break;
        case 10: _t->StartGlowing(); break;
        case 11: _t->JumpToCurrentlyPlayingTrack(); break;
        case 12: _t->JumpToLastPlayedTrack(); break;
        case 13: _t->closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 14: _t->DynamicModeChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->SetColumnAlignment((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Alignment(*)>(_a[2]))); break;
        case 16: _t->CopyCurrentSongToClipboard(); break;
        case 17: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 18: _t->PlayerStopped(); break;
        case 19: _t->LoadGeometry(); break;
        case 20: _t->LoadRatingLockStatus(); break;
        case 21: _t->DirtyGeometry(); break;
        case 22: _t->DirtySettings(); break;
        case 23: _t->SaveGeometry((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 24: _t->SetRatingLockStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->GlowIntensityChanged(); break;
        case 26: _t->InhibitAutoscrollTimeout(); break;
        case 27: _t->MaybeAutoscroll(); break;
        case 28: _t->InvalidateCachedCurrentPixmap(); break;
        case 29: _t->PlaylistDestroyed(); break;
        case 30: _t->SaveSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 31: _t->StretchChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->RatingHoverIn((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2]))); break;
        case 33: _t->RatingHoverOut(); break;
        case 34: _t->FadePreviousBackgroundImage((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< ColumnAlignmentMap >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::Alignment >(); break;
            }
            break;
        case 17:
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
            using _t = void (PlaylistView::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::PlayItem)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::PlayPause)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(const QPoint & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::RightClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::SeekForward)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::SeekBackward)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::FocusOnFilterSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::BackgroundPropertyChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PlaylistView::*)(const ColumnAlignmentMap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistView::ColumnAlignmentChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaylistView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_PlaylistView.data,
    qt_meta_data_PlaylistView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaylistView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int PlaylistView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void PlaylistView::PlayItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistView::PlayPause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlaylistView::RightClicked(const QPoint & _t1, const QModelIndex & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlaylistView::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlaylistView::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlaylistView::FocusOnFilterSignal(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PlaylistView::BackgroundPropertyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PlaylistView::ColumnAlignmentChanged(const ColumnAlignmentMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
