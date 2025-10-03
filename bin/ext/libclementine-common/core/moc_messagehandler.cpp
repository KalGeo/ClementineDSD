/****************************************************************************
** Meta object code from reading C++ file 'messagehandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../ext/libclementine-common/core/messagehandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'messagehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata__MessageHandlerBase_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata__MessageHandlerBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata__MessageHandlerBase_t qt_meta_stringdata__MessageHandlerBase = {
    {
QT_MOC_LITERAL(0, 0, 19), // "_MessageHandlerBase"
QT_MOC_LITERAL(1, 20, 12), // "WriteMessage"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "data"
QT_MOC_LITERAL(4, 39, 15), // "DeviceReadyRead"
QT_MOC_LITERAL(5, 55, 12) // "DeviceClosed"

    },
    "_MessageHandlerBase\0WriteMessage\0\0"
    "data\0DeviceReadyRead\0DeviceClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data__MessageHandlerBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    0,   32,    2, 0x09 /* Protected */,
       5,    0,   33,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void _MessageHandlerBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<_MessageHandlerBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->WriteMessage((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->DeviceReadyRead(); break;
        case 2: _t->DeviceClosed(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject _MessageHandlerBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata__MessageHandlerBase.data,
    qt_meta_data__MessageHandlerBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *_MessageHandlerBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *_MessageHandlerBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata__MessageHandlerBase.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int _MessageHandlerBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
