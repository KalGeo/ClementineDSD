/****************************************************************************
** Meta object code from reading C++ file 'discogscoverprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/covers/discogscoverprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discogscoverprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiscogsCoverProvider_t {
    QByteArrayData data[12];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiscogsCoverProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiscogsCoverProvider_t qt_meta_stringdata_DiscogsCoverProvider = {
    {
QT_MOC_LITERAL(0, 0, 20), // "DiscogsCoverProvider"
QT_MOC_LITERAL(1, 21, 18), // "SearchRequestError"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(4, 69, 5), // "error"
QT_MOC_LITERAL(5, 75, 14), // "QNetworkReply*"
QT_MOC_LITERAL(6, 90, 5), // "reply"
QT_MOC_LITERAL(7, 96, 4), // "s_id"
QT_MOC_LITERAL(8, 101, 19), // "ReleaseRequestError"
QT_MOC_LITERAL(9, 121, 4), // "r_id"
QT_MOC_LITERAL(10, 126, 17), // "HandleSearchReply"
QT_MOC_LITERAL(11, 144, 18) // "HandleReleaseReply"

    },
    "DiscogsCoverProvider\0SearchRequestError\0"
    "\0QNetworkReply::NetworkError\0error\0"
    "QNetworkReply*\0reply\0s_id\0ReleaseRequestError\0"
    "r_id\0HandleSearchReply\0HandleReleaseReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiscogsCoverProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x08 /* Private */,
       8,    4,   41,    2, 0x08 /* Private */,
      10,    2,   50,    2, 0x08 /* Private */,
      11,    3,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    4,    6,    7,    9,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int,    6,    7,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    9,

       0        // eod
};

void DiscogsCoverProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscogsCoverProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchRequestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< QNetworkReply*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->ReleaseRequestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< QNetworkReply*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 2: _t->HandleSearchReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->HandleReleaseReply((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiscogsCoverProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<CoverProvider::staticMetaObject>(),
    qt_meta_stringdata_DiscogsCoverProvider.data,
    qt_meta_data_DiscogsCoverProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DiscogsCoverProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiscogsCoverProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiscogsCoverProvider.stringdata0))
        return static_cast<void*>(this);
    return CoverProvider::qt_metacast(_clname);
}

int DiscogsCoverProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CoverProvider::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
