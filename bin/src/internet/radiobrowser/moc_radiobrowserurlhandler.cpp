/****************************************************************************
** Meta object code from reading C++ file 'radiobrowserurlhandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/radiobrowser/radiobrowserurlhandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiobrowserurlhandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioBrowserUrlHandler_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioBrowserUrlHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioBrowserUrlHandler_t qt_meta_stringdata_RadioBrowserUrlHandler = {
    {
QT_MOC_LITERAL(0, 0, 22), // "RadioBrowserUrlHandler"
QT_MOC_LITERAL(1, 23, 19), // "LoadStationFinished"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 12), // "original_url"
QT_MOC_LITERAL(4, 57, 4), // "Song"
QT_MOC_LITERAL(5, 62, 4), // "song"
QT_MOC_LITERAL(6, 67, 17) // "LoadStationFailed"

    },
    "RadioBrowserUrlHandler\0LoadStationFinished\0"
    "\0original_url\0Song\0song\0LoadStationFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioBrowserUrlHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       6,    1,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void RadioBrowserUrlHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioBrowserUrlHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoadStationFinished((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 1: _t->LoadStationFailed((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RadioBrowserUrlHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<UrlHandler::staticMetaObject>(),
    qt_meta_stringdata_RadioBrowserUrlHandler.data,
    qt_meta_data_RadioBrowserUrlHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioBrowserUrlHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioBrowserUrlHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioBrowserUrlHandler.stringdata0))
        return static_cast<void*>(this);
    return UrlHandler::qt_metacast(_clname);
}

int RadioBrowserUrlHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = UrlHandler::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
