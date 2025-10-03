/****************************************************************************
** Meta object code from reading C++ file 'EpisodeAction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../3rdparty/libmygpo-qt5/src/EpisodeAction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EpisodeAction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mygpo__EpisodeAction_t {
    QByteArrayData data[15];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mygpo__EpisodeAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mygpo__EpisodeAction_t qt_meta_stringdata_mygpo__EpisodeAction = {
    {
QT_MOC_LITERAL(0, 0, 20), // "mygpo::EpisodeAction"
QT_MOC_LITERAL(1, 21, 10), // "podcastUrl"
QT_MOC_LITERAL(2, 32, 10), // "episodeUrl"
QT_MOC_LITERAL(3, 43, 10), // "deviceName"
QT_MOC_LITERAL(4, 54, 6), // "action"
QT_MOC_LITERAL(5, 61, 10), // "ActionType"
QT_MOC_LITERAL(6, 72, 9), // "timestamp"
QT_MOC_LITERAL(7, 82, 7), // "started"
QT_MOC_LITERAL(8, 90, 8), // "position"
QT_MOC_LITERAL(9, 99, 5), // "total"
QT_MOC_LITERAL(10, 105, 8), // "Download"
QT_MOC_LITERAL(11, 114, 4), // "Play"
QT_MOC_LITERAL(12, 119, 6), // "Delete"
QT_MOC_LITERAL(13, 126, 3), // "New"
QT_MOC_LITERAL(14, 130, 6) // "Flattr"

    },
    "mygpo::EpisodeAction\0podcastUrl\0"
    "episodeUrl\0deviceName\0action\0ActionType\0"
    "timestamp\0started\0position\0total\0"
    "Download\0Play\0Delete\0New\0Flattr"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mygpo__EpisodeAction[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QUrl, 0x00095401,
       2, QMetaType::QUrl, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, 0x80000000 | 5, 0x00095409,
       6, QMetaType::ULongLong, 0x00095401,
       7, QMetaType::ULongLong, 0x00095401,
       8, QMetaType::ULongLong, 0x00095401,
       9, QMetaType::ULongLong, 0x00095401,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    5,   43,

 // enum data: key, value
      10, uint(mygpo::EpisodeAction::Download),
      11, uint(mygpo::EpisodeAction::Play),
      12, uint(mygpo::EpisodeAction::Delete),
      13, uint(mygpo::EpisodeAction::New),
      14, uint(mygpo::EpisodeAction::Flattr),

       0        // eod
};

void mygpo::EpisodeAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EpisodeAction *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->podcastUrl(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->episodeUrl(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->deviceName(); break;
        case 3: *reinterpret_cast< ActionType*>(_v) = _t->action(); break;
        case 4: *reinterpret_cast< qulonglong*>(_v) = _t->timestamp(); break;
        case 5: *reinterpret_cast< qulonglong*>(_v) = _t->started(); break;
        case 6: *reinterpret_cast< qulonglong*>(_v) = _t->position(); break;
        case 7: *reinterpret_cast< qulonglong*>(_v) = _t->total(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject mygpo::EpisodeAction::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mygpo__EpisodeAction.data,
    qt_meta_data_mygpo__EpisodeAction,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mygpo::EpisodeAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mygpo::EpisodeAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__EpisodeAction.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mygpo::EpisodeAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
