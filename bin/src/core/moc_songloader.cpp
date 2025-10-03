/****************************************************************************
** Meta object code from reading C++ file 'songloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/songloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongLoader_t {
    QByteArrayData data[11];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongLoader_t qt_meta_stringdata_SongLoader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SongLoader"
QT_MOC_LITERAL(1, 11, 19), // "AudioCDTracksLoaded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 19), // "LoadAudioCDFinished"
QT_MOC_LITERAL(4, 52, 7), // "success"
QT_MOC_LITERAL(5, 60, 18), // "LoadRemoteFinished"
QT_MOC_LITERAL(6, 79, 7), // "Timeout"
QT_MOC_LITERAL(7, 87, 12), // "StopTypefind"
QT_MOC_LITERAL(8, 100, 23), // "AudioCDTracksLoadedSlot"
QT_MOC_LITERAL(9, 124, 8), // "SongList"
QT_MOC_LITERAL(10, 133, 5) // "songs"

    },
    "SongLoader\0AudioCDTracksLoaded\0\0"
    "LoadAudioCDFinished\0success\0"
    "LoadRemoteFinished\0Timeout\0StopTypefind\0"
    "AudioCDTracksLoadedSlot\0SongList\0songs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void SongLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AudioCDTracksLoaded(); break;
        case 1: _t->LoadAudioCDFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->LoadRemoteFinished(); break;
        case 3: _t->Timeout(); break;
        case 4: _t->StopTypefind(); break;
        case 5: _t->AudioCDTracksLoadedSlot((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongLoader::AudioCDTracksLoaded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongLoader::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongLoader::LoadAudioCDFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SongLoader::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongLoader::LoadRemoteFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongLoader.data,
    qt_meta_data_SongLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SongLoader::AudioCDTracksLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SongLoader::LoadAudioCDFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SongLoader::LoadRemoteFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
