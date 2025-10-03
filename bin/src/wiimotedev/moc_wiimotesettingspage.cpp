/****************************************************************************
** Meta object code from reading C++ file 'wiimotesettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/wiimotedev/wiimotesettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wiimotesettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WiimoteSettingsPage_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WiimoteSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WiimoteSettingsPage_t qt_meta_stringdata_WiimoteSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WiimoteSettingsPage"
QT_MOC_LITERAL(1, 20, 29), // "SetWiimotedevInterfaceActived"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 9), // "AddAction"
QT_MOC_LITERAL(4, 61, 11), // "AddShortcut"
QT_MOC_LITERAL(5, 73, 6), // "button"
QT_MOC_LITERAL(6, 80, 6), // "action"
QT_MOC_LITERAL(7, 87, 15), // "DefaultSettings"
QT_MOC_LITERAL(8, 103, 12), // "DeleteAction"
QT_MOC_LITERAL(9, 116, 11), // "ItemClicked"
QT_MOC_LITERAL(10, 128, 16) // "QTreeWidgetItem*"

    },
    "WiimoteSettingsPage\0SetWiimotedevInterfaceActived\0"
    "\0AddAction\0AddShortcut\0button\0action\0"
    "DefaultSettings\0DeleteAction\0ItemClicked\0"
    "QTreeWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WiimoteSettingsPage[] = {

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
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x08 /* Private */,
       4,    2,   48,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::UInt,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,

       0        // eod
};

void WiimoteSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WiimoteSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetWiimotedevInterfaceActived((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->AddAction(); break;
        case 2: _t->AddShortcut((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2]))); break;
        case 3: _t->DefaultSettings(); break;
        case 4: _t->DeleteAction(); break;
        case 5: _t->ItemClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WiimoteSettingsPage::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WiimoteSettingsPage::SetWiimotedevInterfaceActived)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WiimoteSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_WiimoteSettingsPage.data,
    qt_meta_data_WiimoteSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WiimoteSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WiimoteSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WiimoteSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int WiimoteSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
void WiimoteSettingsPage::SetWiimotedevInterfaceActived(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
