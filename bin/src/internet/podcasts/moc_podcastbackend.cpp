/****************************************************************************
** Meta object code from reading C++ file 'podcastbackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/podcasts/podcastbackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastbackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PodcastBackend_t {
    QByteArrayData data[10];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastBackend_t qt_meta_stringdata_PodcastBackend = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PodcastBackend"
QT_MOC_LITERAL(1, 15, 17), // "SubscriptionAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "Podcast"
QT_MOC_LITERAL(4, 42, 7), // "podcast"
QT_MOC_LITERAL(5, 50, 19), // "SubscriptionRemoved"
QT_MOC_LITERAL(6, 70, 13), // "EpisodesAdded"
QT_MOC_LITERAL(7, 84, 18), // "PodcastEpisodeList"
QT_MOC_LITERAL(8, 103, 8), // "episodes"
QT_MOC_LITERAL(9, 112, 15) // "EpisodesUpdated"

    },
    "PodcastBackend\0SubscriptionAdded\0\0"
    "Podcast\0podcast\0SubscriptionRemoved\0"
    "EpisodesAdded\0PodcastEpisodeList\0"
    "episodes\0EpisodesUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastBackend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       9,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void PodcastBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PodcastBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 1: _t->SubscriptionRemoved((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 2: _t->EpisodesAdded((*reinterpret_cast< const PodcastEpisodeList(*)>(_a[1]))); break;
        case 3: _t->EpisodesUpdated((*reinterpret_cast< const PodcastEpisodeList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Podcast >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Podcast >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PodcastBackend::*)(const Podcast & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PodcastBackend::SubscriptionAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PodcastBackend::*)(const Podcast & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PodcastBackend::SubscriptionRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PodcastBackend::*)(const PodcastEpisodeList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PodcastBackend::EpisodesAdded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PodcastBackend::*)(const PodcastEpisodeList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PodcastBackend::EpisodesUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PodcastBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PodcastBackend.data,
    qt_meta_data_PodcastBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PodcastBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastBackend.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PodcastBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PodcastBackend::SubscriptionAdded(const Podcast & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PodcastBackend::SubscriptionRemoved(const Podcast & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PodcastBackend::EpisodesAdded(const PodcastEpisodeList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PodcastBackend::EpisodesUpdated(const PodcastEpisodeList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
