/****************************************************************************
** Meta object code from reading C++ file 'scrobbler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/core/scrobbler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scrobbler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scrobbler_t {
    QByteArrayData data[20];
    char stringdata0[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scrobbler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scrobbler_t qt_meta_stringdata_Scrobbler = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Scrobbler"
QT_MOC_LITERAL(1, 10, 22), // "AuthenticationComplete"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "success"
QT_MOC_LITERAL(4, 42, 13), // "error_message"
QT_MOC_LITERAL(5, 56, 24), // "ScrobblingEnabledChanged"
QT_MOC_LITERAL(6, 81, 5), // "value"
QT_MOC_LITERAL(7, 87, 23), // "ButtonVisibilityChanged"
QT_MOC_LITERAL(8, 111, 31), // "ScrobbleButtonVisibilityChanged"
QT_MOC_LITERAL(9, 143, 17), // "ScrobbleSubmitted"
QT_MOC_LITERAL(10, 161, 13), // "ScrobbleError"
QT_MOC_LITERAL(11, 175, 10), // "NowPlaying"
QT_MOC_LITERAL(12, 186, 4), // "Song"
QT_MOC_LITERAL(13, 191, 4), // "song"
QT_MOC_LITERAL(14, 196, 8), // "Scrobble"
QT_MOC_LITERAL(15, 205, 4), // "Love"
QT_MOC_LITERAL(16, 210, 16), // "ToggleScrobbling"
QT_MOC_LITERAL(17, 227, 10), // "ShowConfig"
QT_MOC_LITERAL(18, 238, 9), // "CacheSong"
QT_MOC_LITERAL(19, 248, 14) // "scrobble_point"

    },
    "Scrobbler\0AuthenticationComplete\0\0"
    "success\0error_message\0ScrobblingEnabledChanged\0"
    "value\0ButtonVisibilityChanged\0"
    "ScrobbleButtonVisibilityChanged\0"
    "ScrobbleSubmitted\0ScrobbleError\0"
    "NowPlaying\0Song\0song\0Scrobble\0Love\0"
    "ToggleScrobbling\0ShowConfig\0CacheSong\0"
    "scrobble_point"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scrobbler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   74,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       7,    1,   82,    2, 0x06 /* Public */,
       8,    1,   85,    2, 0x06 /* Public */,
       9,    0,   88,    2, 0x06 /* Public */,
      10,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   92,    2, 0x0a /* Public */,
      14,    0,   95,    2, 0x0a /* Public */,
      15,    0,   96,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,
      17,    0,   98,    2, 0x0a /* Public */,
      18,    1,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void Scrobbler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scrobbler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AuthenticationComplete((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->ScrobblingEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->ButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ScrobbleButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->ScrobbleSubmitted(); break;
        case 5: _t->ScrobbleError((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->NowPlaying((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 7: _t->Scrobble(); break;
        case 8: _t->Love(); break;
        case 9: _t->ToggleScrobbling(); break;
        case 10: _t->ShowConfig(); break;
        case 11: _t->CacheSong((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Scrobbler::*)(bool , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scrobbler::AuthenticationComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Scrobbler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scrobbler::ScrobblingEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Scrobbler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scrobbler::ButtonVisibilityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Scrobbler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scrobbler::ScrobbleButtonVisibilityChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Scrobbler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scrobbler::ScrobbleSubmitted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Scrobbler::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Scrobbler::ScrobbleError)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Scrobbler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Scrobbler.data,
    qt_meta_data_Scrobbler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Scrobbler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scrobbler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scrobbler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Scrobbler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Scrobbler::AuthenticationComplete(bool _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Scrobbler::ScrobblingEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Scrobbler::ButtonVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Scrobbler::ScrobbleButtonVisibilityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Scrobbler::ScrobbleSubmitted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Scrobbler::ScrobbleError(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
