/****************************************************************************
** Meta object code from reading C++ file 'albumcoverfetchersearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covers/albumcoverfetchersearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverfetchersearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlbumCoverFetcherSearch_t {
    QByteArrayData data[14];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumCoverFetcherSearch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumCoverFetcherSearch_t qt_meta_stringdata_AlbumCoverFetcherSearch = {
    {
QT_MOC_LITERAL(0, 0, 23), // "AlbumCoverFetcherSearch"
QT_MOC_LITERAL(1, 24, 14), // "SearchFinished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "CoverSearchResults"
QT_MOC_LITERAL(4, 59, 7), // "results"
QT_MOC_LITERAL(5, 67, 17), // "AlbumCoverFetched"
QT_MOC_LITERAL(6, 85, 5), // "cover"
QT_MOC_LITERAL(7, 91, 22), // "ProviderSearchFinished"
QT_MOC_LITERAL(8, 114, 2), // "id"
QT_MOC_LITERAL(9, 117, 24), // "QList<CoverSearchResult>"
QT_MOC_LITERAL(10, 142, 26), // "ProviderCoverFetchFinished"
QT_MOC_LITERAL(11, 169, 17), // "RedirectFollower*"
QT_MOC_LITERAL(12, 187, 5), // "reply"
QT_MOC_LITERAL(13, 193, 15) // "TerminateSearch"

    },
    "AlbumCoverFetcherSearch\0SearchFinished\0"
    "\0CoverSearchResults\0results\0"
    "AlbumCoverFetched\0cover\0ProviderSearchFinished\0"
    "id\0QList<CoverSearchResult>\0"
    "ProviderCoverFetchFinished\0RedirectFollower*\0"
    "reply\0TerminateSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumCoverFetcherSearch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   49,    2, 0x08 /* Private */,
      10,    1,   54,    2, 0x08 /* Private */,
      13,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 3,    2,    4,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QImage,    2,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    8,    4,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

void AlbumCoverFetcherSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumCoverFetcherSearch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const CoverSearchResults(*)>(_a[2]))); break;
        case 1: _t->AlbumCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 2: _t->ProviderSearchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<CoverSearchResult>(*)>(_a[2]))); break;
        case 3: _t->ProviderCoverFetchFinished((*reinterpret_cast< RedirectFollower*(*)>(_a[1]))); break;
        case 4: _t->TerminateSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<CoverSearchResult> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumCoverFetcherSearch::*)(quint64 , const CoverSearchResults & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumCoverFetcherSearch::SearchFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumCoverFetcherSearch::*)(quint64 , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumCoverFetcherSearch::AlbumCoverFetched)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlbumCoverFetcherSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AlbumCoverFetcherSearch.data,
    qt_meta_data_AlbumCoverFetcherSearch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumCoverFetcherSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumCoverFetcherSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverFetcherSearch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlbumCoverFetcherSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AlbumCoverFetcherSearch::SearchFinished(quint64 _t1, const CoverSearchResults & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverFetcherSearch::AlbumCoverFetched(quint64 _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
