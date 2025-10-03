/****************************************************************************
** Meta object code from reading C++ file 'network.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/network.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkAccessManager_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkAccessManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkAccessManager_t qt_meta_stringdata_NetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 20) // "NetworkAccessManager"

    },
    "NetworkAccessManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkAccessManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void NetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject NetworkAccessManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QNetworkAccessManager::staticMetaObject>(),
    qt_meta_stringdata_NetworkAccessManager.data,
    qt_meta_data_NetworkAccessManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkAccessManager.stringdata0))
        return static_cast<void*>(this);
    return QNetworkAccessManager::qt_metacast(_clname);
}

int NetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessManager::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_RedirectFollower_t {
    QByteArrayData data[13];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RedirectFollower_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RedirectFollower_t qt_meta_stringdata_RedirectFollower = {
    {
QT_MOC_LITERAL(0, 0, 16), // "RedirectFollower"
QT_MOC_LITERAL(1, 17, 9), // "readyRead"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "error"
QT_MOC_LITERAL(4, 34, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(5, 62, 14), // "uploadProgress"
QT_MOC_LITERAL(6, 77, 9), // "bytesSent"
QT_MOC_LITERAL(7, 87, 10), // "bytesTotal"
QT_MOC_LITERAL(8, 98, 16), // "downloadProgress"
QT_MOC_LITERAL(9, 115, 13), // "bytesReceived"
QT_MOC_LITERAL(10, 129, 8), // "finished"
QT_MOC_LITERAL(11, 138, 9), // "ReadyRead"
QT_MOC_LITERAL(12, 148, 13) // "ReplyFinished"

    },
    "RedirectFollower\0readyRead\0\0error\0"
    "QNetworkReply::NetworkError\0uploadProgress\0"
    "bytesSent\0bytesTotal\0downloadProgress\0"
    "bytesReceived\0finished\0ReadyRead\0"
    "ReplyFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RedirectFollower[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    2,   53,    2, 0x06 /* Public */,
       8,    2,   58,    2, 0x06 /* Public */,
      10,    0,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RedirectFollower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RedirectFollower *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 2: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->finished(); break;
        case 5: _t->ReadyRead(); break;
        case 6: _t->ReplyFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RedirectFollower::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RedirectFollower::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RedirectFollower::*)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RedirectFollower::error)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RedirectFollower::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RedirectFollower::uploadProgress)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (RedirectFollower::*)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RedirectFollower::downloadProgress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (RedirectFollower::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RedirectFollower::finished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RedirectFollower::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RedirectFollower.data,
    qt_meta_data_RedirectFollower,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RedirectFollower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RedirectFollower::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RedirectFollower.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RedirectFollower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void RedirectFollower::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RedirectFollower::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void RedirectFollower::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void RedirectFollower::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void RedirectFollower::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
struct qt_meta_stringdata_NetworkTimeouts_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkTimeouts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkTimeouts_t qt_meta_stringdata_NetworkTimeouts = {
    {
QT_MOC_LITERAL(0, 0, 15), // "NetworkTimeouts"
QT_MOC_LITERAL(1, 16, 13), // "ReplyFinished"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 16), // "RedirectFinished"
QT_MOC_LITERAL(4, 48, 17), // "RedirectFollower*"
QT_MOC_LITERAL(5, 66, 8) // "redirect"

    },
    "NetworkTimeouts\0ReplyFinished\0\0"
    "RedirectFinished\0RedirectFollower*\0"
    "redirect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkTimeouts[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void NetworkTimeouts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkTimeouts *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReplyFinished(); break;
        case 1: _t->RedirectFinished((*reinterpret_cast< RedirectFollower*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< RedirectFollower* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkTimeouts::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_NetworkTimeouts.data,
    qt_meta_data_NetworkTimeouts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkTimeouts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkTimeouts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkTimeouts.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkTimeouts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
