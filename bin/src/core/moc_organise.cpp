/****************************************************************************
** Meta object code from reading C++ file 'organise.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/organise.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'organise.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Organise_t {
    QByteArrayData data[16];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Organise_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Organise_t qt_meta_stringdata_Organise = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Organise"
QT_MOC_LITERAL(1, 9, 8), // "Finished"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 17), // "files_with_errors"
QT_MOC_LITERAL(4, 37, 10), // "FileCopied"
QT_MOC_LITERAL(5, 48, 11), // "database_id"
QT_MOC_LITERAL(6, 60, 15), // "SongPathChanged"
QT_MOC_LITERAL(7, 76, 4), // "Song"
QT_MOC_LITERAL(8, 81, 4), // "song"
QT_MOC_LITERAL(9, 86, 9), // "QFileInfo"
QT_MOC_LITERAL(10, 96, 8), // "new_file"
QT_MOC_LITERAL(11, 105, 16), // "ProcessSomeFiles"
QT_MOC_LITERAL(12, 122, 14), // "FileTranscoded"
QT_MOC_LITERAL(13, 137, 5), // "input"
QT_MOC_LITERAL(14, 143, 6), // "output"
QT_MOC_LITERAL(15, 150, 7) // "success"

    },
    "Organise\0Finished\0\0files_with_errors\0"
    "FileCopied\0database_id\0SongPathChanged\0"
    "Song\0song\0QFileInfo\0new_file\0"
    "ProcessSomeFiles\0FileTranscoded\0input\0"
    "output\0success"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Organise[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    2,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   50,    2, 0x08 /* Private */,
      12,    3,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Bool,   13,   14,   15,

       0        // eod
};

void Organise::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Organise *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->FileCopied((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SongPathChanged((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QFileInfo(*)>(_a[2]))); break;
        case 3: _t->ProcessSomeFiles(); break;
        case 4: _t->FileTranscoded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Organise::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Organise::Finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Organise::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Organise::FileCopied)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Organise::*)(const Song & , const QFileInfo & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Organise::SongPathChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Organise::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Organise.data,
    qt_meta_data_Organise,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Organise::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Organise::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Organise.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Organise::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Organise::Finished(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Organise::FileCopied(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Organise::SongPathChanged(const Song & _t1, const QFileInfo & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
