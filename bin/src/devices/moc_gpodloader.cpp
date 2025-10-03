/****************************************************************************
** Meta object code from reading C++ file 'gpodloader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/gpodloader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpodloader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPodLoader_t {
    QByteArrayData data[10];
    char stringdata0[90];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPodLoader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPodLoader_t qt_meta_stringdata_GPodLoader = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GPodLoader"
QT_MOC_LITERAL(1, 11, 5), // "Error"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "message"
QT_MOC_LITERAL(4, 26, 11), // "TaskStarted"
QT_MOC_LITERAL(5, 38, 7), // "task_id"
QT_MOC_LITERAL(6, 46, 12), // "LoadFinished"
QT_MOC_LITERAL(7, 59, 14), // "Itdb_iTunesDB*"
QT_MOC_LITERAL(8, 74, 2), // "db"
QT_MOC_LITERAL(9, 77, 12) // "LoadDatabase"

    },
    "GPodLoader\0Error\0\0message\0TaskStarted\0"
    "task_id\0LoadFinished\0Itdb_iTunesDB*\0"
    "db\0LoadDatabase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPodLoader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GPodLoader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPodLoader *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->TaskStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->LoadFinished((*reinterpret_cast< Itdb_iTunesDB*(*)>(_a[1]))); break;
        case 3: _t->LoadDatabase(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GPodLoader::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPodLoader::Error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GPodLoader::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPodLoader::TaskStarted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GPodLoader::*)(Itdb_iTunesDB * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GPodLoader::LoadFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GPodLoader::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GPodLoader.data,
    qt_meta_data_GPodLoader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPodLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPodLoader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPodLoader.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GPodLoader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void GPodLoader::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GPodLoader::TaskStarted(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GPodLoader::LoadFinished(Itdb_iTunesDB * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
