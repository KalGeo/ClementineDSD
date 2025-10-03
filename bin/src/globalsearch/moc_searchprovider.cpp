/****************************************************************************
** Meta object code from reading C++ file 'searchprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/globalsearch/searchprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchProvider_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchProvider_t qt_meta_stringdata_SearchProvider = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SearchProvider"
QT_MOC_LITERAL(1, 15, 16), // "ResultsAvailable"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 26), // "SearchProvider::ResultList"
QT_MOC_LITERAL(5, 63, 7), // "results"
QT_MOC_LITERAL(6, 71, 14), // "SearchFinished"
QT_MOC_LITERAL(7, 86, 9), // "ArtLoaded"
QT_MOC_LITERAL(8, 96, 5) // "image"

    },
    "SearchProvider\0ResultsAvailable\0\0id\0"
    "SearchProvider::ResultList\0results\0"
    "SearchFinished\0ArtLoaded\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       6,    1,   34,    2, 0x06 /* Public */,
       7,    2,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    3,    8,

       0        // eod
};

void SearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ResultsAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SearchProvider::ResultList(*)>(_a[2]))); break;
        case 1: _t->SearchFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ArtLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SearchProvider::ResultList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchProvider::*)(int , const SearchProvider::ResultList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchProvider::ResultsAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchProvider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchProvider::SearchFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchProvider::*)(int , const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchProvider::ArtLoaded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SearchProvider.data,
    qt_meta_data_SearchProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SearchProvider::ResultsAvailable(int _t1, const SearchProvider::ResultList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchProvider::SearchFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchProvider::ArtLoaded(int _t1, const QImage & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_BlockingSearchProvider_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BlockingSearchProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BlockingSearchProvider_t qt_meta_stringdata_BlockingSearchProvider = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BlockingSearchProvider"
QT_MOC_LITERAL(1, 23, 22), // "BlockingSearchFinished"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 19), // "QFuture<ResultList>"
QT_MOC_LITERAL(4, 67, 6), // "future"
QT_MOC_LITERAL(5, 74, 2) // "id"

    },
    "BlockingSearchProvider\0BlockingSearchFinished\0"
    "\0QFuture<ResultList>\0future\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BlockingSearchProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,

       0        // eod
};

void BlockingSearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BlockingSearchProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->BlockingSearchFinished((*reinterpret_cast< QFuture<ResultList>(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BlockingSearchProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<SearchProvider::staticMetaObject>(),
    qt_meta_stringdata_BlockingSearchProvider.data,
    qt_meta_data_BlockingSearchProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BlockingSearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BlockingSearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BlockingSearchProvider.stringdata0))
        return static_cast<void*>(this);
    return SearchProvider::qt_metacast(_clname);
}

int BlockingSearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SearchProvider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
