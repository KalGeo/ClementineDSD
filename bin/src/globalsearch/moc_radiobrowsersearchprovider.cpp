/****************************************************************************
** Meta object code from reading C++ file 'radiobrowsersearchprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/globalsearch/radiobrowsersearchprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiobrowsersearchprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioBrowserSearchProvider_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioBrowserSearchProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioBrowserSearchProvider_t qt_meta_stringdata_RadioBrowserSearchProvider = {
    {
QT_MOC_LITERAL(0, 0, 26), // "RadioBrowserSearchProvider"
QT_MOC_LITERAL(1, 27, 18), // "SearchFinishedSlot"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 9), // "search_id"
QT_MOC_LITERAL(4, 57, 31), // "RadioBrowserService::StreamList"
QT_MOC_LITERAL(5, 89, 7) // "streams"

    },
    "RadioBrowserSearchProvider\0"
    "SearchFinishedSlot\0\0search_id\0"
    "RadioBrowserService::StreamList\0streams"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioBrowserSearchProvider[] = {

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
       1,    2,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void RadioBrowserSearchProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioBrowserSearchProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchFinishedSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RadioBrowserService::StreamList(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RadioBrowserSearchProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<SearchProvider::staticMetaObject>(),
    qt_meta_stringdata_RadioBrowserSearchProvider.data,
    qt_meta_data_RadioBrowserSearchProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioBrowserSearchProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioBrowserSearchProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioBrowserSearchProvider.stringdata0))
        return static_cast<void*>(this);
    return SearchProvider::qt_metacast(_clname);
}

int RadioBrowserSearchProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
