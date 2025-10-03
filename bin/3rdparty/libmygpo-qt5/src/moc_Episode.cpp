/****************************************************************************
** Meta object code from reading C++ file 'Episode.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../3rdparty/libmygpo-qt5/src/Episode.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Episode.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mygpo__Episode_t {
    QByteArrayData data[16];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mygpo__Episode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mygpo__Episode_t qt_meta_stringdata_mygpo__Episode = {
    {
QT_MOC_LITERAL(0, 0, 14), // "mygpo::Episode"
QT_MOC_LITERAL(1, 15, 8), // "finished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "parseError"
QT_MOC_LITERAL(4, 36, 12), // "requestError"
QT_MOC_LITERAL(5, 49, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 77, 5), // "error"
QT_MOC_LITERAL(7, 83, 3), // "url"
QT_MOC_LITERAL(8, 87, 5), // "title"
QT_MOC_LITERAL(9, 93, 10), // "podcastUrl"
QT_MOC_LITERAL(10, 104, 12), // "podcastTitle"
QT_MOC_LITERAL(11, 117, 11), // "description"
QT_MOC_LITERAL(12, 129, 7), // "website"
QT_MOC_LITERAL(13, 137, 8), // "released"
QT_MOC_LITERAL(14, 146, 6), // "status"
QT_MOC_LITERAL(15, 153, 8) // "mygpoUrl"

    },
    "mygpo::Episode\0finished\0\0parseError\0"
    "requestError\0QNetworkReply::NetworkError\0"
    "error\0url\0title\0podcastUrl\0podcastTitle\0"
    "description\0website\0released\0status\0"
    "mygpoUrl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mygpo__Episode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       9,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    1,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       7, QMetaType::QUrl, 0x00095401,
       8, QMetaType::QString, 0x00095401,
       9, QMetaType::QUrl, 0x00095401,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QString, 0x00095401,
      12, QMetaType::QUrl, 0x00095401,
      13, QMetaType::QDateTime, 0x00095401,
      14, QMetaType::Int, 0x00095401,
      15, QMetaType::QUrl, 0x00095401,

       0        // eod
};

void mygpo::Episode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Episode *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->parseError(); break;
        case 2: _t->requestError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Episode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Episode::finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Episode::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Episode::parseError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Episode::*)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Episode::requestError)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Episode *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->website(); break;
        case 6: *reinterpret_cast< QDateTime*>(_v) = _t->released(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->status(); break;
        case 8: *reinterpret_cast< QUrl*>(_v) = _t->mygpoUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject mygpo::Episode::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_mygpo__Episode.data,
    qt_meta_data_mygpo__Episode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mygpo::Episode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mygpo::Episode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mygpo__Episode.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int mygpo::Episode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void mygpo::Episode::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mygpo::Episode::parseError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void mygpo::Episode::requestError(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
