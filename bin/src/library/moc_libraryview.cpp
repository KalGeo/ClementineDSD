/****************************************************************************
** Meta object code from reading C++ file 'libraryview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/library/libraryview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libraryview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LibraryItemDelegate_t {
    QByteArrayData data[11];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryItemDelegate_t qt_meta_stringdata_LibraryItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LibraryItemDelegate"
QT_MOC_LITERAL(1, 20, 9), // "helpEvent"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QHelpEvent*"
QT_MOC_LITERAL(4, 43, 5), // "event"
QT_MOC_LITERAL(5, 49, 18), // "QAbstractItemView*"
QT_MOC_LITERAL(6, 68, 4), // "view"
QT_MOC_LITERAL(7, 73, 20), // "QStyleOptionViewItem"
QT_MOC_LITERAL(8, 94, 6), // "option"
QT_MOC_LITERAL(9, 101, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 113, 5) // "index"

    },
    "LibraryItemDelegate\0helpEvent\0\0"
    "QHelpEvent*\0event\0QAbstractItemView*\0"
    "view\0QStyleOptionViewItem\0option\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryItemDelegate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 5, 0x80000000 | 7, 0x80000000 | 9,    4,    6,    8,   10,

       0        // eod
};

void LibraryItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< QHelpEvent*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LibraryItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_LibraryItemDelegate.data,
    qt_meta_data_LibraryItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibraryItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int LibraryItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LibraryView_t {
    QByteArrayData data[30];
    char stringdata0[445];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryView_t qt_meta_stringdata_LibraryView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LibraryView"
QT_MOC_LITERAL(1, 12, 16), // "ShowConfigDialog"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "TotalSongCountUpdated"
QT_MOC_LITERAL(4, 52, 5), // "count"
QT_MOC_LITERAL(5, 58, 14), // "ReloadSettings"
QT_MOC_LITERAL(6, 73, 19), // "FilterReturnPressed"
QT_MOC_LITERAL(7, 93, 9), // "SaveFocus"
QT_MOC_LITERAL(8, 103, 12), // "RestoreFocus"
QT_MOC_LITERAL(9, 116, 4), // "Load"
QT_MOC_LITERAL(10, 121, 13), // "AddToPlaylist"
QT_MOC_LITERAL(11, 135, 20), // "AddToPlaylistEnqueue"
QT_MOC_LITERAL(12, 156, 24), // "AddToPlaylistEnqueueNext"
QT_MOC_LITERAL(13, 181, 17), // "OpenInNewPlaylist"
QT_MOC_LITERAL(14, 199, 8), // "Organise"
QT_MOC_LITERAL(15, 208, 12), // "CopyToDevice"
QT_MOC_LITERAL(16, 221, 6), // "Delete"
QT_MOC_LITERAL(17, 228, 10), // "EditTracks"
QT_MOC_LITERAL(18, 239, 13), // "ShowInBrowser"
QT_MOC_LITERAL(19, 253, 13), // "ShowInVarious"
QT_MOC_LITERAL(20, 267, 15), // "NoShowInVarious"
QT_MOC_LITERAL(21, 283, 13), // "SearchForThis"
QT_MOC_LITERAL(22, 297, 16), // "NewSmartPlaylist"
QT_MOC_LITERAL(23, 314, 17), // "EditSmartPlaylist"
QT_MOC_LITERAL(24, 332, 19), // "DeleteSmartPlaylist"
QT_MOC_LITERAL(25, 352, 24), // "NewSmartPlaylistFinished"
QT_MOC_LITERAL(26, 377, 25), // "EditSmartPlaylistFinished"
QT_MOC_LITERAL(27, 403, 14), // "DeleteFinished"
QT_MOC_LITERAL(28, 418, 8), // "SongList"
QT_MOC_LITERAL(29, 427, 17) // "songs_with_errors"

    },
    "LibraryView\0ShowConfigDialog\0\0"
    "TotalSongCountUpdated\0count\0ReloadSettings\0"
    "FilterReturnPressed\0SaveFocus\0"
    "RestoreFocus\0Load\0AddToPlaylist\0"
    "AddToPlaylistEnqueue\0AddToPlaylistEnqueueNext\0"
    "OpenInNewPlaylist\0Organise\0CopyToDevice\0"
    "Delete\0EditTracks\0ShowInBrowser\0"
    "ShowInVarious\0NoShowInVarious\0"
    "SearchForThis\0NewSmartPlaylist\0"
    "EditSmartPlaylist\0DeleteSmartPlaylist\0"
    "NewSmartPlaylistFinished\0"
    "EditSmartPlaylistFinished\0DeleteFinished\0"
    "SongList\0songs_with_errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  140,    2, 0x0a /* Public */,
       5,    0,  143,    2, 0x0a /* Public */,
       6,    0,  144,    2, 0x0a /* Public */,
       7,    0,  145,    2, 0x0a /* Public */,
       8,    0,  146,    2, 0x0a /* Public */,
       9,    0,  147,    2, 0x08 /* Private */,
      10,    0,  148,    2, 0x08 /* Private */,
      11,    0,  149,    2, 0x08 /* Private */,
      12,    0,  150,    2, 0x08 /* Private */,
      13,    0,  151,    2, 0x08 /* Private */,
      14,    0,  152,    2, 0x08 /* Private */,
      15,    0,  153,    2, 0x08 /* Private */,
      16,    0,  154,    2, 0x08 /* Private */,
      17,    0,  155,    2, 0x08 /* Private */,
      18,    0,  156,    2, 0x08 /* Private */,
      19,    0,  157,    2, 0x08 /* Private */,
      20,    0,  158,    2, 0x08 /* Private */,
      21,    0,  159,    2, 0x08 /* Private */,
      22,    0,  160,    2, 0x08 /* Private */,
      23,    0,  161,    2, 0x08 /* Private */,
      24,    0,  162,    2, 0x08 /* Private */,
      25,    0,  163,    2, 0x08 /* Private */,
      26,    0,  164,    2, 0x08 /* Private */,
      27,    1,  165,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,

       0        // eod
};

void LibraryView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShowConfigDialog(); break;
        case 1: _t->TotalSongCountUpdated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ReloadSettings(); break;
        case 3: _t->FilterReturnPressed(); break;
        case 4: _t->SaveFocus(); break;
        case 5: _t->RestoreFocus(); break;
        case 6: _t->Load(); break;
        case 7: _t->AddToPlaylist(); break;
        case 8: _t->AddToPlaylistEnqueue(); break;
        case 9: _t->AddToPlaylistEnqueueNext(); break;
        case 10: _t->OpenInNewPlaylist(); break;
        case 11: _t->Organise(); break;
        case 12: _t->CopyToDevice(); break;
        case 13: _t->Delete(); break;
        case 14: _t->EditTracks(); break;
        case 15: _t->ShowInBrowser(); break;
        case 16: _t->ShowInVarious(); break;
        case 17: _t->NoShowInVarious(); break;
        case 18: _t->SearchForThis(); break;
        case 19: _t->NewSmartPlaylist(); break;
        case 20: _t->EditSmartPlaylist(); break;
        case 21: _t->DeleteSmartPlaylist(); break;
        case 22: _t->NewSmartPlaylistFinished(); break;
        case 23: _t->EditSmartPlaylistFinished(); break;
        case 24: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibraryView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryView::ShowConfigDialog)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LibraryView::staticMetaObject = { {
    QMetaObject::SuperData::link<AutoExpandingTreeView::staticMetaObject>(),
    qt_meta_stringdata_LibraryView.data,
    qt_meta_data_LibraryView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibraryView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryView.stringdata0))
        return static_cast<void*>(this);
    return AutoExpandingTreeView::qt_metacast(_clname);
}

int LibraryView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AutoExpandingTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void LibraryView::ShowConfigDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
