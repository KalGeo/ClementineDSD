/****************************************************************************
** Meta object code from reading C++ file 'songinfofetcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/songinfo/songinfofetcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfofetcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongInfoFetcher_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongInfoFetcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongInfoFetcher_t qt_meta_stringdata_SongInfoFetcher = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SongInfoFetcher"
QT_MOC_LITERAL(1, 16, 15), // "InfoResultReady"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 2), // "id"
QT_MOC_LITERAL(4, 36, 25), // "CollapsibleInfoPane::Data"
QT_MOC_LITERAL(5, 62, 4), // "data"
QT_MOC_LITERAL(6, 67, 11), // "ResultReady"
QT_MOC_LITERAL(7, 79, 23), // "SongInfoFetcher::Result"
QT_MOC_LITERAL(8, 103, 6), // "result"
QT_MOC_LITERAL(9, 110, 10), // "ImageReady"
QT_MOC_LITERAL(10, 121, 3), // "url"
QT_MOC_LITERAL(11, 125, 9), // "InfoReady"
QT_MOC_LITERAL(12, 135, 16), // "ProviderFinished"
QT_MOC_LITERAL(13, 152, 7) // "Timeout"

    },
    "SongInfoFetcher\0InfoResultReady\0\0id\0"
    "CollapsibleInfoPane::Data\0data\0"
    "ResultReady\0SongInfoFetcher::Result\0"
    "result\0ImageReady\0url\0InfoReady\0"
    "ProviderFinished\0Timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongInfoFetcher[] = {

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
       9,    2,   54,    2, 0x08 /* Private */,
      11,    2,   59,    2, 0x08 /* Private */,
      12,    1,   64,    2, 0x08 /* Private */,
      13,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    3,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    3,   10,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SongInfoFetcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongInfoFetcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->InfoResultReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const CollapsibleInfoPane::Data(*)>(_a[2]))); break;
        case 1: _t->ResultReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongInfoFetcher::Result(*)>(_a[2]))); break;
        case 2: _t->ImageReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 3: _t->InfoReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const CollapsibleInfoPane::Data(*)>(_a[2]))); break;
        case 4: _t->ProviderFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Timeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongInfoFetcher::*)(int , const CollapsibleInfoPane::Data & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoFetcher::InfoResultReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongInfoFetcher::*)(int , const SongInfoFetcher::Result & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoFetcher::ResultReady)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongInfoFetcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongInfoFetcher.data,
    qt_meta_data_SongInfoFetcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongInfoFetcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongInfoFetcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoFetcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongInfoFetcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SongInfoFetcher::InfoResultReady(int _t1, const CollapsibleInfoPane::Data & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SongInfoFetcher::ResultReady(int _t1, const SongInfoFetcher::Result & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
