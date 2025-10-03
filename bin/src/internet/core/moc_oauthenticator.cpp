/****************************************************************************
** Meta object code from reading C++ file 'oauthenticator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/core/oauthenticator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oauthenticator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OAuthenticator_t {
    QByteArrayData data[14];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OAuthenticator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OAuthenticator_t qt_meta_stringdata_OAuthenticator = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OAuthenticator"
QT_MOC_LITERAL(1, 15, 8), // "Finished"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "RedirectArrived"
QT_MOC_LITERAL(4, 41, 20), // "LocalRedirectServer*"
QT_MOC_LITERAL(5, 62, 6), // "server"
QT_MOC_LITERAL(6, 69, 3), // "url"
QT_MOC_LITERAL(7, 73, 24), // "FetchAccessTokenFinished"
QT_MOC_LITERAL(8, 98, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 113, 5), // "reply"
QT_MOC_LITERAL(10, 119, 26), // "RefreshAccessTokenFinished"
QT_MOC_LITERAL(11, 146, 9), // "SslErrors"
QT_MOC_LITERAL(12, 156, 16), // "QList<QSslError>"
QT_MOC_LITERAL(13, 173, 6) // "errors"

    },
    "OAuthenticator\0Finished\0\0RedirectArrived\0"
    "LocalRedirectServer*\0server\0url\0"
    "FetchAccessTokenFinished\0QNetworkReply*\0"
    "reply\0RefreshAccessTokenFinished\0"
    "SslErrors\0QList<QSslError>\0errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OAuthenticator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   40,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,
      10,    1,   48,    2, 0x08 /* Private */,
      11,    1,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::QUrl,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 12,   13,

       0        // eod
};

void OAuthenticator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OAuthenticator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished(); break;
        case 1: _t->RedirectArrived((*reinterpret_cast< LocalRedirectServer*(*)>(_a[1])),(*reinterpret_cast< QUrl(*)>(_a[2]))); break;
        case 2: _t->FetchAccessTokenFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->RefreshAccessTokenFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->SslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OAuthenticator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OAuthenticator::Finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OAuthenticator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OAuthenticator.data,
    qt_meta_data_OAuthenticator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OAuthenticator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OAuthenticator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OAuthenticator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OAuthenticator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OAuthenticator::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
