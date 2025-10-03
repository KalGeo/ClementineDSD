/****************************************************************************
** Meta object code from reading C++ file 'appearancesettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/appearancesettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'appearancesettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AppearanceSettingsPage_t {
    QByteArrayData data[9];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AppearanceSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AppearanceSettingsPage_t qt_meta_stringdata_AppearanceSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AppearanceSettingsPage"
QT_MOC_LITERAL(1, 23, 21), // "SelectForegroundColor"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "SelectBackgroundColor"
QT_MOC_LITERAL(4, 68, 30), // "UseCustomColorSetOptionChanged"
QT_MOC_LITERAL(5, 99, 21), // "SelectBackgroundImage"
QT_MOC_LITERAL(6, 121, 16), // "BlurLevelChanged"
QT_MOC_LITERAL(7, 138, 19), // "OpacityLevelChanged"
QT_MOC_LITERAL(8, 158, 28) // "DisableBlurAndOpacitySliders"

    },
    "AppearanceSettingsPage\0SelectForegroundColor\0"
    "\0SelectBackgroundColor\0"
    "UseCustomColorSetOptionChanged\0"
    "SelectBackgroundImage\0BlurLevelChanged\0"
    "OpacityLevelChanged\0DisableBlurAndOpacitySliders"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AppearanceSettingsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       5,    0,   54,    2, 0x08 /* Private */,
       6,    1,   55,    2, 0x08 /* Private */,
       7,    1,   58,    2, 0x08 /* Private */,
       8,    1,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void AppearanceSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AppearanceSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SelectForegroundColor(); break;
        case 1: _t->SelectBackgroundColor(); break;
        case 2: _t->UseCustomColorSetOptionChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->SelectBackgroundImage(); break;
        case 4: _t->BlurLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->OpacityLevelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->DisableBlurAndOpacitySliders((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AppearanceSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_AppearanceSettingsPage.data,
    qt_meta_data_AppearanceSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AppearanceSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AppearanceSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AppearanceSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int AppearanceSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
