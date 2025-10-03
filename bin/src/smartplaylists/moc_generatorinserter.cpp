/****************************************************************************
** Meta object code from reading C++ file 'generatorinserter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/smartplaylists/generatorinserter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generatorinserter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smart_playlists__GeneratorInserter_t {
    QByteArrayData data[10];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smart_playlists__GeneratorInserter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smart_playlists__GeneratorInserter_t qt_meta_stringdata_smart_playlists__GeneratorInserter = {
    {
QT_MOC_LITERAL(0, 0, 34), // "smart_playlists::GeneratorIns..."
QT_MOC_LITERAL(1, 35, 5), // "Error"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 7), // "message"
QT_MOC_LITERAL(4, 50, 13), // "PlayRequested"
QT_MOC_LITERAL(5, 64, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 76, 5), // "index"
QT_MOC_LITERAL(7, 82, 8), // "Finished"
QT_MOC_LITERAL(8, 91, 25), // "QFuture<PlaylistItemList>"
QT_MOC_LITERAL(9, 117, 6) // "future"

    },
    "smart_playlists::GeneratorInserter\0"
    "Error\0\0message\0PlayRequested\0QModelIndex\0"
    "index\0Finished\0QFuture<PlaylistItemList>\0"
    "future"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smart_playlists__GeneratorInserter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void smart_playlists::GeneratorInserter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeneratorInserter *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->PlayRequested((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->Finished((*reinterpret_cast< QFuture<PlaylistItemList>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GeneratorInserter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneratorInserter::Error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GeneratorInserter::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GeneratorInserter::PlayRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject smart_playlists::GeneratorInserter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_smart_playlists__GeneratorInserter.data,
    qt_meta_data_smart_playlists__GeneratorInserter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smart_playlists::GeneratorInserter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smart_playlists::GeneratorInserter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smart_playlists__GeneratorInserter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int smart_playlists::GeneratorInserter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void smart_playlists::GeneratorInserter::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void smart_playlists::GeneratorInserter::PlayRequested(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
