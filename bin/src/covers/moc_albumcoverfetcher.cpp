/****************************************************************************
** Meta object code from reading C++ file 'albumcoverfetcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covers/albumcoverfetcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumcoverfetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlbumCoverFetcher_t {
    QByteArrayData data[12];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumCoverFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumCoverFetcher_t qt_meta_stringdata_AlbumCoverFetcher = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AlbumCoverFetcher"
QT_MOC_LITERAL(1, 18, 17), // "AlbumCoverFetched"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "cover"
QT_MOC_LITERAL(4, 43, 21), // "CoverSearchStatistics"
QT_MOC_LITERAL(5, 65, 10), // "statistics"
QT_MOC_LITERAL(6, 76, 14), // "SearchFinished"
QT_MOC_LITERAL(7, 91, 18), // "CoverSearchResults"
QT_MOC_LITERAL(8, 110, 7), // "results"
QT_MOC_LITERAL(9, 118, 20), // "SingleSearchFinished"
QT_MOC_LITERAL(10, 139, 18), // "SingleCoverFetched"
QT_MOC_LITERAL(11, 158, 13) // "StartRequests"

    },
    "AlbumCoverFetcher\0AlbumCoverFetched\0"
    "\0cover\0CoverSearchStatistics\0statistics\0"
    "SearchFinished\0CoverSearchResults\0"
    "results\0SingleSearchFinished\0"
    "SingleCoverFetched\0StartRequests"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumCoverFetcher[] = {

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
       1,    3,   39,    2, 0x06 /* Public */,
       6,    3,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   53,    2, 0x08 /* Private */,
      10,    2,   58,    2, 0x08 /* Private */,
      11,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QImage, 0x80000000 | 4,    2,    3,    5,
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 7, 0x80000000 | 4,    2,    8,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::ULongLong, 0x80000000 | 7,    2,    8,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QImage,    2,    3,
    QMetaType::Void,

       0        // eod
};

void AlbumCoverFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumCoverFetcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AlbumCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2])),(*reinterpret_cast< const CoverSearchStatistics(*)>(_a[3]))); break;
        case 1: _t->SearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const CoverSearchResults(*)>(_a[2])),(*reinterpret_cast< const CoverSearchStatistics(*)>(_a[3]))); break;
        case 2: _t->SingleSearchFinished((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< CoverSearchResults(*)>(_a[2]))); break;
        case 3: _t->SingleCoverFetched((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 4: _t->StartRequests(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumCoverFetcher::*)(quint64 , const QImage & , const CoverSearchStatistics & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumCoverFetcher::AlbumCoverFetched)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumCoverFetcher::*)(quint64 , const CoverSearchResults & , const CoverSearchStatistics & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumCoverFetcher::SearchFinished)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlbumCoverFetcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_AlbumCoverFetcher.data,
    qt_meta_data_AlbumCoverFetcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumCoverFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumCoverFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumCoverFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AlbumCoverFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AlbumCoverFetcher::AlbumCoverFetched(quint64 _t1, const QImage & _t2, const CoverSearchStatistics & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AlbumCoverFetcher::SearchFinished(quint64 _t1, const CoverSearchResults & _t2, const CoverSearchStatistics & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
