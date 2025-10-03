/****************************************************************************
** Meta object code from reading C++ file 'systemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/systemtrayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemTrayIcon_t {
    QByteArrayData data[21];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SystemTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SystemTrayIcon_t qt_meta_stringdata_SystemTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SystemTrayIcon"
QT_MOC_LITERAL(1, 15, 12), // "ChangeVolume"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "delta"
QT_MOC_LITERAL(4, 35, 11), // "SeekForward"
QT_MOC_LITERAL(5, 47, 12), // "SeekBackward"
QT_MOC_LITERAL(6, 60, 9), // "NextTrack"
QT_MOC_LITERAL(7, 70, 13), // "PreviousTrack"
QT_MOC_LITERAL(8, 84, 8), // "ShowHide"
QT_MOC_LITERAL(9, 93, 9), // "PlayPause"
QT_MOC_LITERAL(10, 103, 11), // "SetProgress"
QT_MOC_LITERAL(11, 115, 10), // "percentage"
QT_MOC_LITERAL(12, 126, 9), // "SetPaused"
QT_MOC_LITERAL(13, 136, 10), // "SetPlaying"
QT_MOC_LITERAL(14, 147, 17), // "enable_play_pause"
QT_MOC_LITERAL(15, 165, 11), // "enable_love"
QT_MOC_LITERAL(16, 177, 10), // "SetStopped"
QT_MOC_LITERAL(17, 188, 29), // "LastFMButtonVisibilityChanged"
QT_MOC_LITERAL(18, 218, 5), // "value"
QT_MOC_LITERAL(19, 224, 28), // "LastFMButtonLoveStateChanged"
QT_MOC_LITERAL(20, 253, 22) // "MuteButtonStateChanged"

    },
    "SystemTrayIcon\0ChangeVolume\0\0delta\0"
    "SeekForward\0SeekBackward\0NextTrack\0"
    "PreviousTrack\0ShowHide\0PlayPause\0"
    "SetProgress\0percentage\0SetPaused\0"
    "SetPlaying\0enable_play_pause\0enable_love\0"
    "SetStopped\0LastFMButtonVisibilityChanged\0"
    "value\0LastFMButtonLoveStateChanged\0"
    "MuteButtonStateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemTrayIcon[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    0,   97,    2, 0x06 /* Public */,
       5,    0,   98,    2, 0x06 /* Public */,
       6,    0,   99,    2, 0x06 /* Public */,
       7,    0,  100,    2, 0x06 /* Public */,
       8,    0,  101,    2, 0x06 /* Public */,
       9,    0,  102,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  103,    2, 0x0a /* Public */,
      12,    0,  106,    2, 0x0a /* Public */,
      13,    2,  107,    2, 0x0a /* Public */,
      13,    1,  112,    2, 0x2a /* Public | MethodCloned */,
      13,    0,  115,    2, 0x2a /* Public | MethodCloned */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    1,  117,    2, 0x0a /* Public */,
      19,    1,  120,    2, 0x0a /* Public */,
      20,    1,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void SystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemTrayIcon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ChangeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SeekForward(); break;
        case 2: _t->SeekBackward(); break;
        case 3: _t->NextTrack(); break;
        case 4: _t->PreviousTrack(); break;
        case 5: _t->ShowHide(); break;
        case 6: _t->PlayPause(); break;
        case 7: _t->SetProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->SetPaused(); break;
        case 9: _t->SetPlaying((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->SetPlaying((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->SetPlaying(); break;
        case 12: _t->SetStopped(); break;
        case 13: _t->LastFMButtonVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->LastFMButtonLoveStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->MuteButtonStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemTrayIcon::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::ChangeVolume)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::SeekForward)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::SeekBackward)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::NextTrack)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::PreviousTrack)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::ShowHide)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SystemTrayIcon::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemTrayIcon::PlayPause)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SystemTrayIcon::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SystemTrayIcon.data,
    qt_meta_data_SystemTrayIcon,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemTrayIcon.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void SystemTrayIcon::ChangeVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SystemTrayIcon::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SystemTrayIcon::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SystemTrayIcon::NextTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void SystemTrayIcon::PreviousTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void SystemTrayIcon::ShowHide()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void SystemTrayIcon::PlayPause()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
