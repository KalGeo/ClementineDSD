/****************************************************************************
** Meta object code from reading C++ file 'podcastupdater.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/podcasts/podcastupdater.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'podcastupdater.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PodcastUpdater_t {
    QByteArrayData data[12];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PodcastUpdater_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PodcastUpdater_t qt_meta_stringdata_PodcastUpdater = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PodcastUpdater"
QT_MOC_LITERAL(1, 15, 20), // "UpdateAllPodcastsNow"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "UpdatePodcastNow"
QT_MOC_LITERAL(4, 54, 7), // "Podcast"
QT_MOC_LITERAL(5, 62, 7), // "podcast"
QT_MOC_LITERAL(6, 70, 14), // "ReloadSettings"
QT_MOC_LITERAL(7, 85, 17), // "SubscriptionAdded"
QT_MOC_LITERAL(8, 103, 13), // "PodcastLoaded"
QT_MOC_LITERAL(9, 117, 22), // "PodcastUrlLoaderReply*"
QT_MOC_LITERAL(10, 140, 5), // "reply"
QT_MOC_LITERAL(11, 146, 11) // "one_of_many"

    },
    "PodcastUpdater\0UpdateAllPodcastsNow\0"
    "\0UpdatePodcastNow\0Podcast\0podcast\0"
    "ReloadSettings\0SubscriptionAdded\0"
    "PodcastLoaded\0PodcastUrlLoaderReply*\0"
    "reply\0one_of_many"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PodcastUpdater[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    1,   40,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    1,   44,    2, 0x08 /* Private */,
       8,    3,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 4, QMetaType::Bool,   10,    5,   11,

       0        // eod
};

void PodcastUpdater::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PodcastUpdater *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpdateAllPodcastsNow(); break;
        case 1: _t->UpdatePodcastNow((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 2: _t->ReloadSettings(); break;
        case 3: _t->SubscriptionAdded((*reinterpret_cast< const Podcast(*)>(_a[1]))); break;
        case 4: _t->PodcastLoaded((*reinterpret_cast< PodcastUrlLoaderReply*(*)>(_a[1])),(*reinterpret_cast< const Podcast(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PodcastUpdater::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PodcastUpdater.data,
    qt_meta_data_PodcastUpdater,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PodcastUpdater::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PodcastUpdater::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PodcastUpdater.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PodcastUpdater::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
