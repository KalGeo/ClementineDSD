/****************************************************************************
** Meta object code from reading C++ file 'trackselectiondialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/trackselectiondialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackselectiondialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackSelectionDialog_t {
    QByteArrayData data[19];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackSelectionDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackSelectionDialog_t qt_meta_stringdata_TrackSelectionDialog = {
    {
QT_MOC_LITERAL(0, 0, 20), // "TrackSelectionDialog"
QT_MOC_LITERAL(1, 21, 5), // "Error"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "error"
QT_MOC_LITERAL(4, 34, 10), // "SongChosen"
QT_MOC_LITERAL(5, 45, 4), // "Song"
QT_MOC_LITERAL(6, 50, 13), // "original_song"
QT_MOC_LITERAL(7, 64, 12), // "new_metadata"
QT_MOC_LITERAL(8, 77, 16), // "FetchTagProgress"
QT_MOC_LITERAL(9, 94, 8), // "progress"
QT_MOC_LITERAL(10, 103, 16), // "FetchTagFinished"
QT_MOC_LITERAL(11, 120, 8), // "SongList"
QT_MOC_LITERAL(12, 129, 13), // "songs_guessed"
QT_MOC_LITERAL(13, 143, 6), // "accept"
QT_MOC_LITERAL(14, 150, 11), // "UpdateStack"
QT_MOC_LITERAL(15, 162, 8), // "NextSong"
QT_MOC_LITERAL(16, 171, 12), // "PreviousSong"
QT_MOC_LITERAL(17, 184, 14), // "ResultSelected"
QT_MOC_LITERAL(18, 199, 14) // "AcceptFinished"

    },
    "TrackSelectionDialog\0Error\0\0error\0"
    "SongChosen\0Song\0original_song\0"
    "new_metadata\0FetchTagProgress\0progress\0"
    "FetchTagFinished\0SongList\0songs_guessed\0"
    "accept\0UpdateStack\0NextSong\0PreviousSong\0"
    "ResultSelected\0AcceptFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackSelectionDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   72,    2, 0x0a /* Public */,
      10,    2,   77,    2, 0x0a /* Public */,
      13,    0,   82,    2, 0x0a /* Public */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,
      17,    0,   86,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    9,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 11,    6,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackSelectionDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackSelectionDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SongChosen((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 2: _t->FetchTagProgress((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->FetchTagFinished((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        case 4: _t->accept(); break;
        case 5: _t->UpdateStack(); break;
        case 6: _t->NextSong(); break;
        case 7: _t->PreviousSong(); break;
        case 8: _t->ResultSelected(); break;
        case 9: _t->AcceptFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 3:
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
            using _t = void (TrackSelectionDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSelectionDialog::Error)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackSelectionDialog::*)(const Song & , const Song & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSelectionDialog::SongChosen)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackSelectionDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TrackSelectionDialog.data,
    qt_meta_data_TrackSelectionDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackSelectionDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackSelectionDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSelectionDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TrackSelectionDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void TrackSelectionDialog::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrackSelectionDialog::SongChosen(const Song & _t1, const Song & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
