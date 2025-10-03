/****************************************************************************
** Meta object code from reading C++ file 'gnomeglobalshortcutbackend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/gnomeglobalshortcutbackend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gnomeglobalshortcutbackend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GnomeGlobalShortcutBackend_t {
    QByteArrayData data[8];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GnomeGlobalShortcutBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GnomeGlobalShortcutBackend_t qt_meta_stringdata_GnomeGlobalShortcutBackend = {
    {
QT_MOC_LITERAL(0, 0, 26), // "GnomeGlobalShortcutBackend"
QT_MOC_LITERAL(1, 27, 16), // "RegisterFinished"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(4, 70, 7), // "watcher"
QT_MOC_LITERAL(5, 78, 20), // "GnomeMediaKeyPressed"
QT_MOC_LITERAL(6, 99, 11), // "application"
QT_MOC_LITERAL(7, 111, 3) // "key"

    },
    "GnomeGlobalShortcutBackend\0RegisterFinished\0"
    "\0QDBusPendingCallWatcher*\0watcher\0"
    "GnomeMediaKeyPressed\0application\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GnomeGlobalShortcutBackend[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       5,    2,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,

       0        // eod
};

void GnomeGlobalShortcutBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GnomeGlobalShortcutBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RegisterFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 1: _t->GnomeMediaKeyPressed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GnomeGlobalShortcutBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<GlobalShortcutBackend::staticMetaObject>(),
    qt_meta_stringdata_GnomeGlobalShortcutBackend.data,
    qt_meta_data_GnomeGlobalShortcutBackend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GnomeGlobalShortcutBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GnomeGlobalShortcutBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GnomeGlobalShortcutBackend.stringdata0))
        return static_cast<void*>(this);
    return GlobalShortcutBackend::qt_metacast(_clname);
}

int GnomeGlobalShortcutBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GlobalShortcutBackend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
