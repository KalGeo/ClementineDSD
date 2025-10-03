/****************************************************************************
** Meta object code from reading C++ file 'tagfetcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/musicbrainz/tagfetcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagfetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TagFetcher_t {
    QByteArrayData data[17];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TagFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TagFetcher_t qt_meta_stringdata_TagFetcher = {
    {
QT_MOC_LITERAL(0, 0, 10), // "TagFetcher"
QT_MOC_LITERAL(1, 11, 8), // "Progress"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "Song"
QT_MOC_LITERAL(4, 26, 13), // "original_song"
QT_MOC_LITERAL(5, 40, 5), // "stage"
QT_MOC_LITERAL(6, 46, 15), // "ResultAvailable"
QT_MOC_LITERAL(7, 62, 8), // "SongList"
QT_MOC_LITERAL(8, 71, 13), // "songs_guessed"
QT_MOC_LITERAL(9, 85, 6), // "Cancel"
QT_MOC_LITERAL(10, 92, 16), // "FingerprintFound"
QT_MOC_LITERAL(11, 109, 5), // "index"
QT_MOC_LITERAL(12, 115, 10), // "PuidsFound"
QT_MOC_LITERAL(13, 126, 9), // "puid_list"
QT_MOC_LITERAL(14, 136, 11), // "TagsFetched"
QT_MOC_LITERAL(15, 148, 29), // "MusicBrainzClient::ResultList"
QT_MOC_LITERAL(16, 178, 6) // "result"

    },
    "TagFetcher\0Progress\0\0Song\0original_song\0"
    "stage\0ResultAvailable\0SongList\0"
    "songs_guessed\0Cancel\0FingerprintFound\0"
    "index\0PuidsFound\0puid_list\0TagsFetched\0"
    "MusicBrainzClient::ResultList\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TagFetcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   54,    2, 0x0a /* Public */,
      10,    1,   55,    2, 0x08 /* Private */,
      12,    2,   58,    2, 0x08 /* Private */,
      14,    2,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 7,    4,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,   11,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,   11,   16,

       0        // eod
};

void TagFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TagFetcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Progress((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->ResultAvailable((*reinterpret_cast< const Song(*)>(_a[1])),(*reinterpret_cast< const SongList(*)>(_a[2]))); break;
        case 2: _t->Cancel(); break;
        case 3: _t->FingerprintFound((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->PuidsFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 5: _t->TagsFetched((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const MusicBrainzClient::ResultList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        case 1:
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
            using _t = void (TagFetcher::*)(const Song & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TagFetcher::Progress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TagFetcher::*)(const Song & , const SongList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TagFetcher::ResultAvailable)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TagFetcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_TagFetcher.data,
    qt_meta_data_TagFetcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TagFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TagFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TagFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TagFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TagFetcher::Progress(const Song & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TagFetcher::ResultAvailable(const Song & _t1, const SongList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
