/****************************************************************************
** Meta object code from reading C++ file 'podcastdownloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/podcasts/podcastdownloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastdownloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Task_t {
    QByteArrayData data[17];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Task_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Task_t qt_meta_stringdata_Task = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Task"
QT_MOC_LITERAL(1, 5, 15), // "ProgressChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "PodcastEpisode"
QT_MOC_LITERAL(4, 37, 7), // "episode"
QT_MOC_LITERAL(5, 45, 22), // "PodcastDownload::State"
QT_MOC_LITERAL(6, 68, 5), // "state"
QT_MOC_LITERAL(7, 74, 7), // "percent"
QT_MOC_LITERAL(8, 82, 8), // "finished"
QT_MOC_LITERAL(9, 91, 5), // "Task*"
QT_MOC_LITERAL(10, 97, 4), // "task"
QT_MOC_LITERAL(11, 102, 14), // "finishedPublic"
QT_MOC_LITERAL(12, 117, 7), // "reading"
QT_MOC_LITERAL(13, 125, 24), // "downloadProgressInternal"
QT_MOC_LITERAL(14, 150, 8), // "received"
QT_MOC_LITERAL(15, 159, 5), // "total"
QT_MOC_LITERAL(16, 165, 16) // "finishedInternal"

    },
    "Task\0ProgressChanged\0\0PodcastEpisode\0"
    "episode\0PodcastDownload::State\0state\0"
    "percent\0finished\0Task*\0task\0finishedPublic\0"
    "reading\0downloadProgressInternal\0"
    "received\0total\0finishedInternal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Task[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       8,    1,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   54,    2, 0x0a /* Public */,
      12,    0,   55,    2, 0x08 /* Private */,
      13,    2,   56,    2, 0x08 /* Private */,
      16,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   14,   15,
    QMetaType::Void,

       0        // eod
};

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Task *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ProgressChanged((*reinterpret_cast< const PodcastEpisode(*)>(_a[1])),(*reinterpret_cast< PodcastDownload::State(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->finished((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        case 2: _t->finishedPublic(); break;
        case 3: _t->reading(); break;
        case 4: _t->downloadProgressInternal((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->finishedInternal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PodcastEpisode >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Task* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Task::*)(const PodcastEpisode & , PodcastDownload::State , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::ProgressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Task::*)(Task * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Task::finished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Task::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Task.data,
    qt_meta_data_Task,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Task.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Task::ProgressChanged(const PodcastEpisode & _t1, PodcastDownload::State _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Task::finished(Task * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_PodcastDownloader_t {
    QByteArrayData data[20];
    char stringdata0[242];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastDownloader_t qt_meta_stringdata_PodcastDownloader = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PodcastDownloader"
QT_MOC_LITERAL(1, 18, 15), // "ProgressChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "PodcastEpisode"
QT_MOC_LITERAL(4, 50, 7), // "episode"
QT_MOC_LITERAL(5, 58, 22), // "PodcastDownload::State"
QT_MOC_LITERAL(6, 81, 5), // "state"
QT_MOC_LITERAL(7, 87, 7), // "percent"
QT_MOC_LITERAL(8, 95, 15), // "DownloadEpisode"
QT_MOC_LITERAL(9, 111, 14), // "cancelDownload"
QT_MOC_LITERAL(10, 126, 18), // "PodcastEpisodeList"
QT_MOC_LITERAL(11, 145, 8), // "episodes"
QT_MOC_LITERAL(12, 154, 14), // "ReloadSettings"
QT_MOC_LITERAL(13, 169, 17), // "SubscriptionAdded"
QT_MOC_LITERAL(14, 187, 7), // "Podcast"
QT_MOC_LITERAL(15, 195, 7), // "podcast"
QT_MOC_LITERAL(16, 203, 13), // "EpisodesAdded"
QT_MOC_LITERAL(17, 217, 13), // "ReplyFinished"
QT_MOC_LITERAL(18, 231, 5), // "Task*"
QT_MOC_LITERAL(19, 237, 4) // "task"

    },
    "PodcastDownloader\0ProgressChanged\0\0"
    "PodcastEpisode\0episode\0PodcastDownload::State\0"
    "state\0percent\0DownloadEpisode\0"
    "cancelDownload\0PodcastEpisodeList\0"
    "episodes\0ReloadSettings\0SubscriptionAdded\0"
    "Podcast\0podcast\0EpisodesAdded\0"
    "ReplyFinished\0Task*\0task"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastDownloader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   56,    2, 0x0a /* Public */,
       9,    1,   59,    2, 0x0a /* Public */,
      12,    0,   62,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,
      16,    1,   66,    2, 0x08 /* Private */,
      17,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int,    4,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

void PodcastDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PodcastDownloader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ProgressChanged((*reinterpret_cast< const PodcastEpisode(*)>(_a[1])),(*reinterpret_cast< PodcastDownload::State(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->DownloadEpisode((*reinterpret_cast< const PodcastEpisode(*)>(_a[1]))); break;
        case 2: _t->cancelDownload((*reinterpret_cast< const PodcastEpisodeList(*)>(_a[1]))); break;
        case 3: _t->ReloadSettings(); break;
        case 4: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 5: _t->EpisodesAdded((*reinterpret_cast< const PodcastEpisodeList(*)>(_a[1]))); break;
        case 6: _t->ReplyFinished((*reinterpret_cast< Task*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PodcastEpisode >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PodcastEpisode >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Podcast >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Task* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PodcastDownloader::*)(const PodcastEpisode & , PodcastDownload::State , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PodcastDownloader::ProgressChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PodcastDownloader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PodcastDownloader.data,
    qt_meta_data_PodcastDownloader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PodcastDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastDownloader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PodcastDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void PodcastDownloader::ProgressChanged(const PodcastEpisode & _t1, PodcastDownload::State _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
