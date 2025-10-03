/****************************************************************************
** Meta object code from reading C++ file 'enginebase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/engines/enginebase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enginebase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Engine__Base_t {
    QByteArrayData data[22];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Engine__Base_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Engine__Base_t qt_meta_stringdata_Engine__Base = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Engine::Base"
QT_MOC_LITERAL(1, 13, 15), // "TrackAboutToEnd"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 10), // "TrackEnded"
QT_MOC_LITERAL(4, 41, 21), // "FadeoutFinishedSignal"
QT_MOC_LITERAL(5, 63, 10), // "StatusText"
QT_MOC_LITERAL(6, 74, 5), // "Error"
QT_MOC_LITERAL(7, 80, 21), // "InvalidMediaRequested"
QT_MOC_LITERAL(8, 102, 20), // "MediaPlaybackRequest"
QT_MOC_LITERAL(9, 123, 19), // "ValidMediaRequested"
QT_MOC_LITERAL(10, 143, 8), // "MetaData"
QT_MOC_LITERAL(11, 152, 24), // "Engine::SimpleMetaBundle"
QT_MOC_LITERAL(12, 177, 12), // "StateChanged"
QT_MOC_LITERAL(13, 190, 13), // "Engine::State"
QT_MOC_LITERAL(14, 204, 14), // "ReloadSettings"
QT_MOC_LITERAL(15, 219, 19), // "SetEqualizerEnabled"
QT_MOC_LITERAL(16, 239, 22), // "SetEqualizerParameters"
QT_MOC_LITERAL(17, 262, 6), // "preamp"
QT_MOC_LITERAL(18, 269, 10), // "QList<int>"
QT_MOC_LITERAL(19, 280, 9), // "bandGains"
QT_MOC_LITERAL(20, 290, 16), // "SetStereoBalance"
QT_MOC_LITERAL(21, 307, 5) // "value"

    },
    "Engine::Base\0TrackAboutToEnd\0\0TrackEnded\0"
    "FadeoutFinishedSignal\0StatusText\0Error\0"
    "InvalidMediaRequested\0MediaPlaybackRequest\0"
    "ValidMediaRequested\0MetaData\0"
    "Engine::SimpleMetaBundle\0StateChanged\0"
    "Engine::State\0ReloadSettings\0"
    "SetEqualizerEnabled\0SetEqualizerParameters\0"
    "preamp\0QList<int>\0bandGains\0"
    "SetStereoBalance\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Engine__Base[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    1,   82,    2, 0x06 /* Public */,
       6,    1,   85,    2, 0x06 /* Public */,
       7,    1,   88,    2, 0x06 /* Public */,
       9,    1,   91,    2, 0x06 /* Public */,
      10,    1,   94,    2, 0x06 /* Public */,
      12,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  100,    2, 0x0a /* Public */,
      15,    1,  101,    2, 0x0a /* Public */,
      16,    2,  104,    2, 0x0a /* Public */,
      20,    1,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 13,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 18,   17,   19,
    QMetaType::Void, QMetaType::Float,   21,

       0        // eod
};

void Engine::Base::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Base *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->TrackAboutToEnd(); break;
        case 1: _t->TrackEnded(); break;
        case 2: _t->FadeoutFinishedSignal(); break;
        case 3: _t->StatusText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Error((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->InvalidMediaRequested((*reinterpret_cast< const MediaPlaybackRequest(*)>(_a[1]))); break;
        case 6: _t->ValidMediaRequested((*reinterpret_cast< const MediaPlaybackRequest(*)>(_a[1]))); break;
        case 7: _t->MetaData((*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[1]))); break;
        case 8: _t->StateChanged((*reinterpret_cast< Engine::State(*)>(_a[1]))); break;
        case 9: _t->ReloadSettings(); break;
        case 10: _t->SetEqualizerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->SetEqualizerParameters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 12: _t->SetStereoBalance((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Base::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::TrackAboutToEnd)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Base::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::TrackEnded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Base::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::FadeoutFinishedSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Base::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::StatusText)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Base::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::Error)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Base::*)(const MediaPlaybackRequest & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::InvalidMediaRequested)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Base::*)(const MediaPlaybackRequest & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::ValidMediaRequested)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Base::*)(const Engine::SimpleMetaBundle & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::MetaData)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Base::*)(Engine::State );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Base::StateChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Engine::Base::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Engine__Base.data,
    qt_meta_data_Engine__Base,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Engine::Base::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Engine::Base::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Engine__Base.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Engine::Base::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Engine::Base::TrackAboutToEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Engine::Base::TrackEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Engine::Base::FadeoutFinishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Engine::Base::StatusText(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Engine::Base::Error(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Engine::Base::InvalidMediaRequested(const MediaPlaybackRequest & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Engine::Base::ValidMediaRequested(const MediaPlaybackRequest & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Engine::Base::MetaData(const Engine::SimpleMetaBundle & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Engine::Base::StateChanged(Engine::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
