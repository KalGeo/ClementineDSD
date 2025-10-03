/****************************************************************************
** Meta object code from reading C++ file 'intergalacticfmservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/intergalacticfm/intergalacticfmservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intergalacticfmservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_IntergalacticFMServiceBase_t {
    QByteArrayData data[11];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntergalacticFMServiceBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntergalacticFMServiceBase_t qt_meta_stringdata_IntergalacticFMServiceBase = {
    {
QT_MOC_LITERAL(0, 0, 26), // "IntergalacticFMServiceBase"
QT_MOC_LITERAL(1, 27, 14), // "StreamsChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "ForceRefreshStreams"
QT_MOC_LITERAL(4, 63, 14), // "RefreshStreams"
QT_MOC_LITERAL(5, 78, 22), // "RefreshStreamsFinished"
QT_MOC_LITERAL(6, 101, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 116, 5), // "reply"
QT_MOC_LITERAL(8, 122, 7), // "task_id"
QT_MOC_LITERAL(9, 130, 8), // "Homepage"
QT_MOC_LITERAL(10, 139, 6) // "Donate"

    },
    "IntergalacticFMServiceBase\0StreamsChanged\0"
    "\0ForceRefreshStreams\0RefreshStreams\0"
    "RefreshStreamsFinished\0QNetworkReply*\0"
    "reply\0task_id\0Homepage\0Donate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntergalacticFMServiceBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    2,   47,    2, 0x08 /* Private */,
       9,    0,   52,    2, 0x08 /* Private */,
      10,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6, QMetaType::Int,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void IntergalacticFMServiceBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IntergalacticFMServiceBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StreamsChanged(); break;
        case 1: _t->ForceRefreshStreams(); break;
        case 2: _t->RefreshStreams(); break;
        case 3: _t->RefreshStreamsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->Homepage(); break;
        case 5: _t->Donate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IntergalacticFMServiceBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&IntergalacticFMServiceBase::StreamsChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject IntergalacticFMServiceBase::staticMetaObject = { {
    QMetaObject::SuperData::link<InternetService::staticMetaObject>(),
    qt_meta_stringdata_IntergalacticFMServiceBase.data,
    qt_meta_data_IntergalacticFMServiceBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IntergalacticFMServiceBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntergalacticFMServiceBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IntergalacticFMServiceBase.stringdata0))
        return static_cast<void*>(this);
    return InternetService::qt_metacast(_clname);
}

int IntergalacticFMServiceBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IntergalacticFMServiceBase::StreamsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
