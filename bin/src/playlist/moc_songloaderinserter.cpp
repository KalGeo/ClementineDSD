/****************************************************************************
** Meta object code from reading C++ file 'songloaderinserter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/songloaderinserter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songloaderinserter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongLoaderInserter_t {
    QByteArrayData data[15];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongLoaderInserter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongLoaderInserter_t qt_meta_stringdata_SongLoaderInserter = {
    {
QT_MOC_LITERAL(0, 0, 18), // "SongLoaderInserter"
QT_MOC_LITERAL(1, 19, 5), // "Error"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "message"
QT_MOC_LITERAL(4, 34, 15), // "PreloadFinished"
QT_MOC_LITERAL(5, 50, 21), // "EffectiveLoadFinished"
QT_MOC_LITERAL(6, 72, 8), // "SongList"
QT_MOC_LITERAL(7, 81, 5), // "songs"
QT_MOC_LITERAL(8, 87, 20), // "DestinationDestroyed"
QT_MOC_LITERAL(9, 108, 19), // "AudioCDTracksLoaded"
QT_MOC_LITERAL(10, 128, 11), // "SongLoader*"
QT_MOC_LITERAL(11, 140, 6), // "loader"
QT_MOC_LITERAL(12, 147, 17), // "AudioCDTagsLoaded"
QT_MOC_LITERAL(13, 165, 7), // "success"
QT_MOC_LITERAL(14, 173, 11) // "InsertSongs"

    },
    "SongLoaderInserter\0Error\0\0message\0"
    "PreloadFinished\0EffectiveLoadFinished\0"
    "SongList\0songs\0DestinationDestroyed\0"
    "AudioCDTracksLoaded\0SongLoader*\0loader\0"
    "AudioCDTagsLoaded\0success\0InsertSongs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongLoaderInserter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    0,   52,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,
      12,    1,   60,    2, 0x08 /* Private */,
      14,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,

       0        // eod
};

void SongLoaderInserter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongLoaderInserter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->PreloadFinished(); break;
        case 2: _t->EffectiveLoadFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 3: _t->DestinationDestroyed(); break;
        case 4: _t->AudioCDTracksLoaded((*reinterpret_cast< SongLoader*(*)>(_a[1]))); break;
        case 5: _t->AudioCDTagsLoaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->InsertSongs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongLoaderInserter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongLoaderInserter::Error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongLoaderInserter::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongLoaderInserter::PreloadFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SongLoaderInserter::*)(const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongLoaderInserter::EffectiveLoadFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongLoaderInserter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongLoaderInserter.data,
    qt_meta_data_SongLoaderInserter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongLoaderInserter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongLoaderInserter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongLoaderInserter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongLoaderInserter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SongLoaderInserter::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SongLoaderInserter::PreloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SongLoaderInserter::EffectiveLoadFinished(const SongList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
