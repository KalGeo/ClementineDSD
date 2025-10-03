/****************************************************************************
** Meta object code from reading C++ file 'globalshortcutssettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/globalshortcutssettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'globalshortcutssettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GlobalShortcutsSettingsPage_t {
    QByteArrayData data[8];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GlobalShortcutsSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GlobalShortcutsSettingsPage_t qt_meta_stringdata_GlobalShortcutsSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 27), // "GlobalShortcutsSettingsPage"
QT_MOC_LITERAL(1, 28, 18), // "CurrentItemChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 65, 11), // "NoneClicked"
QT_MOC_LITERAL(5, 77, 14), // "DefaultClicked"
QT_MOC_LITERAL(6, 92, 13), // "ChangeClicked"
QT_MOC_LITERAL(7, 106, 29) // "OpenGnomeKeybindingProperties"

    },
    "GlobalShortcutsSettingsPage\0"
    "CurrentItemChanged\0\0QTreeWidgetItem*\0"
    "NoneClicked\0DefaultClicked\0ChangeClicked\0"
    "OpenGnomeKeybindingProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GlobalShortcutsSettingsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GlobalShortcutsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalShortcutsSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CurrentItemChanged((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1]))); break;
        case 1: _t->NoneClicked(); break;
        case 2: _t->DefaultClicked(); break;
        case 3: _t->ChangeClicked(); break;
        case 4: _t->OpenGnomeKeybindingProperties(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GlobalShortcutsSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_GlobalShortcutsSettingsPage.data,
    qt_meta_data_GlobalShortcutsSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GlobalShortcutsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GlobalShortcutsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GlobalShortcutsSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int GlobalShortcutsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
