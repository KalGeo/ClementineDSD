/****************************************************************************
** Meta object code from reading C++ file 'wiimoteshortcutgrabber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/wiimotedev/wiimoteshortcutgrabber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wiimoteshortcutgrabber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WiimoteShortcutGrabber_t {
    QByteArrayData data[11];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WiimoteShortcutGrabber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WiimoteShortcutGrabber_t qt_meta_stringdata_WiimoteShortcutGrabber = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WiimoteShortcutGrabber"
QT_MOC_LITERAL(1, 23, 11), // "AddShortcut"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "buttons"
QT_MOC_LITERAL(4, 44, 6), // "action"
QT_MOC_LITERAL(5, 51, 25), // "DbusWiimoteGeneralButtons"
QT_MOC_LITERAL(6, 77, 2), // "id"
QT_MOC_LITERAL(7, 80, 5), // "value"
QT_MOC_LITERAL(8, 86, 20), // "RememberSwingChecked"
QT_MOC_LITERAL(9, 107, 7), // "checked"
QT_MOC_LITERAL(10, 115, 7) // "Timeout"

    },
    "WiimoteShortcutGrabber\0AddShortcut\0\0"
    "buttons\0action\0DbusWiimoteGeneralButtons\0"
    "id\0value\0RememberSwingChecked\0checked\0"
    "Timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WiimoteShortcutGrabber[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   39,    2, 0x08 /* Private */,
       8,    1,   44,    2, 0x08 /* Private */,
      10,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULongLong, QMetaType::UInt,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::ULongLong,    6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void WiimoteShortcutGrabber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WiimoteShortcutGrabber *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddShortcut((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 1: _t->DbusWiimoteGeneralButtons((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< qulonglong(*)>(_a[2]))); break;
        case 2: _t->RememberSwingChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->Timeout((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WiimoteShortcutGrabber::*)(quint64 , quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimoteShortcutGrabber::AddShortcut)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WiimoteShortcutGrabber::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_WiimoteShortcutGrabber.data,
    qt_meta_data_WiimoteShortcutGrabber,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WiimoteShortcutGrabber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WiimoteShortcutGrabber::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WiimoteShortcutGrabber.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int WiimoteShortcutGrabber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WiimoteShortcutGrabber::AddShortcut(quint64 _t1, quint32 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
