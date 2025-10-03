/****************************************************************************
** Meta object code from reading C++ file 'subsonicservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/subsonic/subsonicservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subsonicservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubsonicService_t {
    QByteArrayData data[39];
    char stringdata0[764];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubsonicService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubsonicService_t qt_meta_stringdata_SubsonicService = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SubsonicService"
QT_MOC_LITERAL(1, 16, 17), // "LoginStateChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 27), // "SubsonicService::LoginState"
QT_MOC_LITERAL(4, 63, 8), // "newstate"
QT_MOC_LITERAL(5, 72, 20), // "UpdateTotalSongCount"
QT_MOC_LITERAL(6, 93, 5), // "count"
QT_MOC_LITERAL(7, 99, 14), // "ReloadDatabase"
QT_MOC_LITERAL(8, 114, 22), // "ReloadDatabaseFinished"
QT_MOC_LITERAL(9, 137, 19), // "OnLoginStateChanged"
QT_MOC_LITERAL(10, 157, 14), // "OnPingFinished"
QT_MOC_LITERAL(11, 172, 14), // "QNetworkReply*"
QT_MOC_LITERAL(12, 187, 5), // "reply"
QT_MOC_LITERAL(13, 193, 10), // "ShowConfig"
QT_MOC_LITERAL(14, 204, 10), // "LoginState"
QT_MOC_LITERAL(15, 215, 19), // "LoginState_Loggedin"
QT_MOC_LITERAL(16, 235, 20), // "LoginState_BadServer"
QT_MOC_LITERAL(17, 256, 25), // "LoginState_OutdatedClient"
QT_MOC_LITERAL(18, 282, 25), // "LoginState_OutdatedServer"
QT_MOC_LITERAL(19, 308, 25), // "LoginState_BadCredentials"
QT_MOC_LITERAL(20, 334, 21), // "LoginState_Unlicensed"
QT_MOC_LITERAL(21, 356, 21), // "LoginState_OtherError"
QT_MOC_LITERAL(22, 378, 18), // "LoginState_Unknown"
QT_MOC_LITERAL(23, 397, 28), // "LoginState_ConnectionRefused"
QT_MOC_LITERAL(24, 426, 23), // "LoginState_HostNotFound"
QT_MOC_LITERAL(25, 450, 18), // "LoginState_Timeout"
QT_MOC_LITERAL(26, 469, 19), // "LoginState_SslError"
QT_MOC_LITERAL(27, 489, 32), // "LoginState_IncompleteCredentials"
QT_MOC_LITERAL(28, 522, 32), // "LoginState_RedirectLimitExceeded"
QT_MOC_LITERAL(29, 555, 24), // "LoginState_RedirectNoUrl"
QT_MOC_LITERAL(30, 580, 8), // "ApiError"
QT_MOC_LITERAL(31, 589, 16), // "ApiError_Generic"
QT_MOC_LITERAL(32, 606, 25), // "ApiError_ParameterMissing"
QT_MOC_LITERAL(33, 632, 23), // "ApiError_OutdatedClient"
QT_MOC_LITERAL(34, 656, 23), // "ApiError_OutdatedServer"
QT_MOC_LITERAL(35, 680, 23), // "ApiError_BadCredentials"
QT_MOC_LITERAL(36, 704, 21), // "ApiError_Unauthorized"
QT_MOC_LITERAL(37, 726, 19), // "ApiError_Unlicensed"
QT_MOC_LITERAL(38, 746, 17) // "ApiError_NotFound"

    },
    "SubsonicService\0LoginStateChanged\0\0"
    "SubsonicService::LoginState\0newstate\0"
    "UpdateTotalSongCount\0count\0ReloadDatabase\0"
    "ReloadDatabaseFinished\0OnLoginStateChanged\0"
    "OnPingFinished\0QNetworkReply*\0reply\0"
    "ShowConfig\0LoginState\0LoginState_Loggedin\0"
    "LoginState_BadServer\0LoginState_OutdatedClient\0"
    "LoginState_OutdatedServer\0"
    "LoginState_BadCredentials\0"
    "LoginState_Unlicensed\0LoginState_OtherError\0"
    "LoginState_Unknown\0LoginState_ConnectionRefused\0"
    "LoginState_HostNotFound\0LoginState_Timeout\0"
    "LoginState_SslError\0"
    "LoginState_IncompleteCredentials\0"
    "LoginState_RedirectLimitExceeded\0"
    "LoginState_RedirectNoUrl\0ApiError\0"
    "ApiError_Generic\0ApiError_ParameterMissing\0"
    "ApiError_OutdatedClient\0ApiError_OutdatedServer\0"
    "ApiError_BadCredentials\0ApiError_Unauthorized\0"
    "ApiError_Unlicensed\0ApiError_NotFound"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubsonicService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       2,   64, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,
      10,    1,   60,    2, 0x08 /* Private */,
      13,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      14,   14, 0x0,   15,   74,
      30,   30, 0x0,    8,  104,

 // enum data: key, value
      15, uint(SubsonicService::LoginState_Loggedin),
      16, uint(SubsonicService::LoginState_BadServer),
      17, uint(SubsonicService::LoginState_OutdatedClient),
      18, uint(SubsonicService::LoginState_OutdatedServer),
      19, uint(SubsonicService::LoginState_BadCredentials),
      20, uint(SubsonicService::LoginState_Unlicensed),
      21, uint(SubsonicService::LoginState_OtherError),
      22, uint(SubsonicService::LoginState_Unknown),
      23, uint(SubsonicService::LoginState_ConnectionRefused),
      24, uint(SubsonicService::LoginState_HostNotFound),
      25, uint(SubsonicService::LoginState_Timeout),
      26, uint(SubsonicService::LoginState_SslError),
      27, uint(SubsonicService::LoginState_IncompleteCredentials),
      28, uint(SubsonicService::LoginState_RedirectLimitExceeded),
      29, uint(SubsonicService::LoginState_RedirectNoUrl),
      31, uint(SubsonicService::ApiError_Generic),
      32, uint(SubsonicService::ApiError_ParameterMissing),
      33, uint(SubsonicService::ApiError_OutdatedClient),
      34, uint(SubsonicService::ApiError_OutdatedServer),
      35, uint(SubsonicService::ApiError_BadCredentials),
      36, uint(SubsonicService::ApiError_Unauthorized),
      37, uint(SubsonicService::ApiError_Unlicensed),
      38, uint(SubsonicService::ApiError_NotFound),

       0        // eod
};

void SubsonicService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubsonicService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoginStateChanged((*reinterpret_cast< SubsonicService::LoginState(*)>(_a[1]))); break;
        case 1: _t->UpdateTotalSongCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ReloadDatabase(); break;
        case 3: _t->ReloadDatabaseFinished(); break;
        case 4: _t->OnLoginStateChanged((*reinterpret_cast< SubsonicService::LoginState(*)>(_a[1]))); break;
        case 5: _t->OnPingFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->ShowConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubsonicService::*)(SubsonicService::LoginState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubsonicService::LoginStateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SubsonicService::staticMetaObject = { {
    QMetaObject::SuperData::link<InternetService::staticMetaObject>(),
    qt_meta_stringdata_SubsonicService.data,
    qt_meta_data_SubsonicService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SubsonicService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsonicService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsonicService.stringdata0))
        return static_cast<void*>(this);
    return InternetService::qt_metacast(_clname);
}

int SubsonicService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
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
void SubsonicService::LoginStateChanged(SubsonicService::LoginState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SubsonicLibraryScanner_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubsonicLibraryScanner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubsonicLibraryScanner_t qt_meta_stringdata_SubsonicLibraryScanner = {
    {
QT_MOC_LITERAL(0, 0, 22), // "SubsonicLibraryScanner"
QT_MOC_LITERAL(1, 23, 12), // "ScanFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "OnGetAlbumListFinished"
QT_MOC_LITERAL(4, 60, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 75, 5), // "reply"
QT_MOC_LITERAL(6, 81, 6), // "offset"
QT_MOC_LITERAL(7, 88, 18) // "OnGetAlbumFinished"

    },
    "SubsonicLibraryScanner\0ScanFinished\0"
    "\0OnGetAlbumListFinished\0QNetworkReply*\0"
    "reply\0offset\0OnGetAlbumFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubsonicLibraryScanner[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Int,    5,    6,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void SubsonicLibraryScanner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubsonicLibraryScanner *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ScanFinished(); break;
        case 1: _t->OnGetAlbumListFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->OnGetAlbumFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SubsonicLibraryScanner::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SubsonicLibraryScanner::ScanFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SubsonicLibraryScanner::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SubsonicLibraryScanner.data,
    qt_meta_data_SubsonicLibraryScanner,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SubsonicLibraryScanner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsonicLibraryScanner::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsonicLibraryScanner.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SubsonicLibraryScanner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void SubsonicLibraryScanner::ScanFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
