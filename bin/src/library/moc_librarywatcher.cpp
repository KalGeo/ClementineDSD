/****************************************************************************
** Meta object code from reading C++ file 'librarywatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/library/librarywatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'librarywatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LibraryWatcher_t {
    QByteArrayData data[37];
    char stringdata0[460];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryWatcher_t qt_meta_stringdata_LibraryWatcher = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LibraryWatcher"
QT_MOC_LITERAL(1, 15, 17), // "NewOrUpdatedSongs"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "SongList"
QT_MOC_LITERAL(4, 43, 5), // "songs"
QT_MOC_LITERAL(5, 49, 17), // "SongsMTimeUpdated"
QT_MOC_LITERAL(6, 67, 12), // "SongsDeleted"
QT_MOC_LITERAL(7, 80, 12), // "SongsReadded"
QT_MOC_LITERAL(8, 93, 11), // "unavailable"
QT_MOC_LITERAL(9, 105, 17), // "SubdirsDiscovered"
QT_MOC_LITERAL(10, 123, 16), // "SubdirectoryList"
QT_MOC_LITERAL(11, 140, 7), // "subdirs"
QT_MOC_LITERAL(12, 148, 19), // "SubdirsMTimeUpdated"
QT_MOC_LITERAL(13, 168, 24), // "CompilationsNeedUpdating"
QT_MOC_LITERAL(14, 193, 11), // "ScanStarted"
QT_MOC_LITERAL(15, 205, 7), // "task_id"
QT_MOC_LITERAL(16, 213, 5), // "Error"
QT_MOC_LITERAL(17, 219, 7), // "message"
QT_MOC_LITERAL(18, 227, 14), // "ReloadSettings"
QT_MOC_LITERAL(19, 242, 12), // "AddDirectory"
QT_MOC_LITERAL(20, 255, 9), // "Directory"
QT_MOC_LITERAL(21, 265, 3), // "dir"
QT_MOC_LITERAL(22, 269, 15), // "SetRescanPaused"
QT_MOC_LITERAL(23, 285, 5), // "pause"
QT_MOC_LITERAL(24, 291, 16), // "DirectoryChanged"
QT_MOC_LITERAL(25, 308, 4), // "path"
QT_MOC_LITERAL(26, 313, 18), // "IncrementalScanNow"
QT_MOC_LITERAL(27, 332, 11), // "FullScanNow"
QT_MOC_LITERAL(28, 344, 14), // "RescanPathsNow"
QT_MOC_LITERAL(29, 359, 16), // "ScanSubdirectory"
QT_MOC_LITERAL(30, 376, 12), // "Subdirectory"
QT_MOC_LITERAL(31, 389, 6), // "subdir"
QT_MOC_LITERAL(32, 396, 16), // "ScanTransaction*"
QT_MOC_LITERAL(33, 413, 1), // "t"
QT_MOC_LITERAL(34, 415, 19), // "force_noincremental"
QT_MOC_LITERAL(35, 435, 17), // "DoRemoveDirectory"
QT_MOC_LITERAL(36, 453, 6) // "dir_id"

    },
    "LibraryWatcher\0NewOrUpdatedSongs\0\0"
    "SongList\0songs\0SongsMTimeUpdated\0"
    "SongsDeleted\0SongsReadded\0unavailable\0"
    "SubdirsDiscovered\0SubdirectoryList\0"
    "subdirs\0SubdirsMTimeUpdated\0"
    "CompilationsNeedUpdating\0ScanStarted\0"
    "task_id\0Error\0message\0ReloadSettings\0"
    "AddDirectory\0Directory\0dir\0SetRescanPaused\0"
    "pause\0DirectoryChanged\0path\0"
    "IncrementalScanNow\0FullScanNow\0"
    "RescanPathsNow\0ScanSubdirectory\0"
    "Subdirectory\0subdir\0ScanTransaction*\0"
    "t\0force_noincremental\0DoRemoveDirectory\0"
    "dir_id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryWatcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       6,    1,  120,    2, 0x06 /* Public */,
       7,    2,  123,    2, 0x06 /* Public */,
       7,    1,  128,    2, 0x26 /* Public | MethodCloned */,
       9,    1,  131,    2, 0x06 /* Public */,
      12,    1,  134,    2, 0x06 /* Public */,
      13,    0,  137,    2, 0x06 /* Public */,
      14,    1,  138,    2, 0x06 /* Public */,
      16,    1,  141,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  144,    2, 0x0a /* Public */,
      19,    2,  145,    2, 0x0a /* Public */,
      22,    1,  150,    2, 0x0a /* Public */,
      24,    1,  153,    2, 0x08 /* Private */,
      26,    0,  156,    2, 0x08 /* Private */,
      27,    0,  157,    2, 0x08 /* Private */,
      28,    0,  158,    2, 0x08 /* Private */,
      29,    4,  159,    2, 0x08 /* Private */,
      29,    3,  168,    2, 0x28 /* Private | MethodCloned */,
      35,    1,  175,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    4,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 10,   21,   11,
    QMetaType::Void, QMetaType::Bool,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32, QMetaType::Bool,   25,   31,   33,   34,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30, 0x80000000 | 32,   25,   31,   33,
    QMetaType::Void, QMetaType::Int,   36,

       0        // eod
};

void LibraryWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NewOrUpdatedSongs((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 1: _t->SongsMTimeUpdated((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 2: _t->SongsDeleted((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->SongsReadded((*reinterpret_cast< const SongList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->SongsReadded((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 5: _t->SubdirsDiscovered((*reinterpret_cast< const SubdirectoryList(*)>(_a[1]))); break;
        case 6: _t->SubdirsMTimeUpdated((*reinterpret_cast< const SubdirectoryList(*)>(_a[1]))); break;
        case 7: _t->CompilationsNeedUpdating(); break;
        case 8: _t->ScanStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->ReloadSettings(); break;
        case 11: _t->AddDirectory((*reinterpret_cast< const Directory(*)>(_a[1])),(*reinterpret_cast< const SubdirectoryList(*)>(_a[2]))); break;
        case 12: _t->SetRescanPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->DirectoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->IncrementalScanNow(); break;
        case 15: _t->FullScanNow(); break;
        case 16: _t->RescanPathsNow(); break;
        case 17: _t->ScanSubdirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Subdirectory(*)>(_a[2])),(*reinterpret_cast< ScanTransaction*(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 18: _t->ScanSubdirectory((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const Subdirectory(*)>(_a[2])),(*reinterpret_cast< ScanTransaction*(*)>(_a[3]))); break;
        case 19: _t->DoRemoveDirectory((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SubdirectoryList >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SubdirectoryList >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Directory >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SubdirectoryList >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Subdirectory >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Subdirectory >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibraryWatcher::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::NewOrUpdatedSongs)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::SongsMTimeUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::SongsDeleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(const SongList & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::SongsReadded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(const SubdirectoryList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::SubdirsDiscovered)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(const SubdirectoryList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::SubdirsMTimeUpdated)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::CompilationsNeedUpdating)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::ScanStarted)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (LibraryWatcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryWatcher::Error)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LibraryWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LibraryWatcher.data,
    qt_meta_data_LibraryWatcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibraryWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryWatcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LibraryWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void LibraryWatcher::NewOrUpdatedSongs(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LibraryWatcher::SongsMTimeUpdated(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LibraryWatcher::SongsDeleted(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LibraryWatcher::SongsReadded(const SongList & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 5
void LibraryWatcher::SubdirsDiscovered(const SubdirectoryList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void LibraryWatcher::SubdirsMTimeUpdated(const SubdirectoryList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void LibraryWatcher::CompilationsNeedUpdating()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void LibraryWatcher::ScanStarted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void LibraryWatcher::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
