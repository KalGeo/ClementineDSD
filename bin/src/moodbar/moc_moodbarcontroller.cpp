/****************************************************************************
** Meta object code from reading C++ file 'moodbarcontroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/moodbar/moodbarcontroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moodbarcontroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoodbarController_t {
    QByteArrayData data[12];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoodbarController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoodbarController_t qt_meta_stringdata_MoodbarController = {
    {
QT_MOC_LITERAL(0, 0, 17), // "MoodbarController"
QT_MOC_LITERAL(1, 18, 25), // "CurrentMoodbarDataChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 4), // "data"
QT_MOC_LITERAL(4, 50, 18), // "CurrentSongChanged"
QT_MOC_LITERAL(5, 69, 4), // "Song"
QT_MOC_LITERAL(6, 74, 4), // "song"
QT_MOC_LITERAL(7, 79, 15), // "PlaybackStopped"
QT_MOC_LITERAL(8, 95, 17), // "AsyncLoadComplete"
QT_MOC_LITERAL(9, 113, 16), // "MoodbarPipeline*"
QT_MOC_LITERAL(10, 130, 8), // "pipeline"
QT_MOC_LITERAL(11, 139, 3) // "url"

    },
    "MoodbarController\0CurrentMoodbarDataChanged\0"
    "\0data\0CurrentSongChanged\0Song\0song\0"
    "PlaybackStopped\0AsyncLoadComplete\0"
    "MoodbarPipeline*\0pipeline\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoodbarController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x08 /* Private */,
       7,    0,   40,    2, 0x08 /* Private */,
       8,    2,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QUrl,   10,   11,

       0        // eod
};

void MoodbarController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoodbarController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CurrentMoodbarDataChanged((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->CurrentSongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 2: _t->PlaybackStopped(); break;
        case 3: _t->AsyncLoadComplete((*reinterpret_cast< MoodbarPipeline*(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MoodbarController::*)(const QByteArray & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MoodbarController::CurrentMoodbarDataChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoodbarController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MoodbarController.data,
    qt_meta_data_MoodbarController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoodbarController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoodbarController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoodbarController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MoodbarController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MoodbarController::CurrentMoodbarDataChanged(const QByteArray & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
