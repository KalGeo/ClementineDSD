/****************************************************************************
** Meta object code from reading C++ file 'playlistdelegates.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistdelegates.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistdelegates.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaylistDelegateBase_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistDelegateBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistDelegateBase_t qt_meta_stringdata_PlaylistDelegateBase = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PlaylistDelegateBase"
QT_MOC_LITERAL(1, 21, 9), // "helpEvent"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "QHelpEvent*"
QT_MOC_LITERAL(4, 44, 5), // "event"
QT_MOC_LITERAL(5, 50, 18), // "QAbstractItemView*"
QT_MOC_LITERAL(6, 69, 4), // "view"
QT_MOC_LITERAL(7, 74, 20), // "QStyleOptionViewItem"
QT_MOC_LITERAL(8, 95, 6), // "option"
QT_MOC_LITERAL(9, 102, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 114, 5) // "index"

    },
    "PlaylistDelegateBase\0helpEvent\0\0"
    "QHelpEvent*\0event\0QAbstractItemView*\0"
    "view\0QStyleOptionViewItem\0option\0"
    "QModelIndex\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistDelegateBase[] = {

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

void PlaylistDelegateBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistDelegateBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->helpEvent((*reinterpret_cast< QHelpEvent*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemView*(*)>(_a[2])),(*reinterpret_cast< const QStyleOptionViewItem(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaylistDelegateBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QueuedItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_PlaylistDelegateBase.data,
    qt_meta_data_PlaylistDelegateBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaylistDelegateBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistDelegateBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistDelegateBase.stringdata0))
        return static_cast<void*>(this);
    return QueuedItemDelegate::qt_metacast(_clname);
}

int PlaylistDelegateBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QueuedItemDelegate::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_TagCompleter_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagCompleter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagCompleter_t qt_meta_stringdata_TagCompleter = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TagCompleter"
QT_MOC_LITERAL(1, 13, 10), // "ModelReady"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 28), // "QFuture<TagCompletionModel*>"
QT_MOC_LITERAL(4, 54, 6) // "future"

    },
    "TagCompleter\0ModelReady\0\0"
    "QFuture<TagCompletionModel*>\0future"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagCompleter[] = {

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
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void TagCompleter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagCompleter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ModelReady((*reinterpret_cast< QFuture<TagCompletionModel*>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TagCompleter::staticMetaObject = { {
    QMetaObject::SuperData::link<QCompleter::staticMetaObject>(),
    qt_meta_stringdata_TagCompleter.data,
    qt_meta_data_TagCompleter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TagCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagCompleter.stringdata0))
        return static_cast<void*>(this);
    return QCompleter::qt_metacast(_clname);
}

int TagCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
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
