/****************************************************************************
** Meta object code from reading C++ file 'globalsearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/globalsearch/globalsearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalSearch_t {
    QByteArrayData data[27];
    char stringdata0[363];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalSearch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalSearch_t qt_meta_stringdata_GlobalSearch = {
    {
QT_MOC_LITERAL(0, 0, 12), // "GlobalSearch"
QT_MOC_LITERAL(1, 13, 14), // "SearchAsyncSig"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "id"
QT_MOC_LITERAL(4, 32, 5), // "query"
QT_MOC_LITERAL(5, 38, 16), // "ResultsAvailable"
QT_MOC_LITERAL(6, 55, 26), // "SearchProvider::ResultList"
QT_MOC_LITERAL(7, 82, 7), // "results"
QT_MOC_LITERAL(8, 90, 22), // "ProviderSearchFinished"
QT_MOC_LITERAL(9, 113, 21), // "const SearchProvider*"
QT_MOC_LITERAL(10, 135, 8), // "provider"
QT_MOC_LITERAL(11, 144, 14), // "SearchFinished"
QT_MOC_LITERAL(12, 159, 9), // "ArtLoaded"
QT_MOC_LITERAL(13, 169, 6), // "pixmap"
QT_MOC_LITERAL(14, 176, 13), // "ProviderAdded"
QT_MOC_LITERAL(15, 190, 15), // "ProviderRemoved"
QT_MOC_LITERAL(16, 206, 15), // "ProviderToggled"
QT_MOC_LITERAL(17, 222, 7), // "enabled"
QT_MOC_LITERAL(18, 230, 14), // "ReloadSettings"
QT_MOC_LITERAL(19, 245, 13), // "DoSearchAsync"
QT_MOC_LITERAL(20, 259, 20), // "ResultsAvailableSlot"
QT_MOC_LITERAL(21, 280, 18), // "SearchFinishedSlot"
QT_MOC_LITERAL(22, 299, 13), // "ArtLoadedSlot"
QT_MOC_LITERAL(23, 313, 5), // "image"
QT_MOC_LITERAL(24, 319, 14), // "AlbumArtLoaded"
QT_MOC_LITERAL(25, 334, 21), // "ProviderDestroyedSlot"
QT_MOC_LITERAL(26, 356, 6) // "object"

    },
    "GlobalSearch\0SearchAsyncSig\0\0id\0query\0"
    "ResultsAvailable\0SearchProvider::ResultList\0"
    "results\0ProviderSearchFinished\0"
    "const SearchProvider*\0provider\0"
    "SearchFinished\0ArtLoaded\0pixmap\0"
    "ProviderAdded\0ProviderRemoved\0"
    "ProviderToggled\0enabled\0ReloadSettings\0"
    "DoSearchAsync\0ResultsAvailableSlot\0"
    "SearchFinishedSlot\0ArtLoadedSlot\0image\0"
    "AlbumArtLoaded\0ProviderDestroyedSlot\0"
    "object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalSearch[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    2,   94,    2, 0x06 /* Public */,
       8,    2,   99,    2, 0x06 /* Public */,
      11,    1,  104,    2, 0x06 /* Public */,
      12,    2,  107,    2, 0x06 /* Public */,
      14,    1,  112,    2, 0x06 /* Public */,
      15,    1,  115,    2, 0x06 /* Public */,
      16,    2,  118,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    0,  123,    2, 0x0a /* Public */,
      19,    2,  124,    2, 0x08 /* Private */,
      20,    2,  129,    2, 0x08 /* Private */,
      21,    1,  134,    2, 0x08 /* Private */,
      22,    2,  137,    2, 0x08 /* Private */,
      24,    2,  142,    2, 0x08 /* Private */,
      25,    1,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    3,   10,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QPixmap,    3,   13,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Bool,   10,   17,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QImage,    3,   23,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QImage,    3,   23,
    QMetaType::Void, QMetaType::QObjectStar,   26,

       0        // eod
};

void GlobalSearch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalSearch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchAsyncSig((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->ResultsAvailable((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SearchProvider::ResultList(*)>(_a[2]))); break;
        case 2: _t->ProviderSearchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SearchProvider*(*)>(_a[2]))); break;
        case 3: _t->SearchFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ArtLoaded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 5: _t->ProviderAdded((*reinterpret_cast< const SearchProvider*(*)>(_a[1]))); break;
        case 6: _t->ProviderRemoved((*reinterpret_cast< const SearchProvider*(*)>(_a[1]))); break;
        case 7: _t->ProviderToggled((*reinterpret_cast< const SearchProvider*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: _t->ReloadSettings(); break;
        case 9: _t->DoSearchAsync((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->ResultsAvailableSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< SearchProvider::ResultList(*)>(_a[2]))); break;
        case 11: _t->SearchFinishedSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ArtLoadedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 13: _t->AlbumArtLoaded((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< const QImage(*)>(_a[2]))); break;
        case 14: _t->ProviderDestroyedSlot((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< SearchProvider::ResultList >(); break;
            }
            break;
        case 10:
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
            using _t = void (GlobalSearch::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::SearchAsyncSig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(int , const SearchProvider::ResultList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::ResultsAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(int , const SearchProvider * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::ProviderSearchFinished)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::SearchFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(int , const QPixmap & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::ArtLoaded)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(const SearchProvider * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::ProviderAdded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(const SearchProvider * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::ProviderRemoved)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GlobalSearch::*)(const SearchProvider * , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalSearch::ProviderToggled)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalSearch::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GlobalSearch.data,
    qt_meta_data_GlobalSearch,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalSearch.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GlobalSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void GlobalSearch::SearchAsyncSig(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GlobalSearch::ResultsAvailable(int _t1, const SearchProvider::ResultList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GlobalSearch::ProviderSearchFinished(int _t1, const SearchProvider * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GlobalSearch::SearchFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GlobalSearch::ArtLoaded(int _t1, const QPixmap & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GlobalSearch::ProviderAdded(const SearchProvider * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GlobalSearch::ProviderRemoved(const SearchProvider * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GlobalSearch::ProviderToggled(const SearchProvider * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
