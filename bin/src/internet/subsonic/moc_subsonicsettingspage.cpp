/****************************************************************************
** Meta object code from reading C++ file 'subsonicsettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/subsonic/subsonicsettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subsonicsettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SubsonicSettingsPage_t {
    QByteArrayData data[8];
    char stringdata0[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SubsonicSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SubsonicSettingsPage_t qt_meta_stringdata_SubsonicSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SubsonicSettingsPage"
QT_MOC_LITERAL(1, 21, 17), // "LoginStateChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 27), // "SubsonicService::LoginState"
QT_MOC_LITERAL(4, 68, 8), // "newstate"
QT_MOC_LITERAL(5, 77, 21), // "ServerEditingFinished"
QT_MOC_LITERAL(6, 99, 5), // "Login"
QT_MOC_LITERAL(7, 105, 6) // "Logout"

    },
    "SubsonicSettingsPage\0LoginStateChanged\0"
    "\0SubsonicService::LoginState\0newstate\0"
    "ServerEditingFinished\0Login\0Logout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SubsonicSettingsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SubsonicSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SubsonicSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LoginStateChanged((*reinterpret_cast< SubsonicService::LoginState(*)>(_a[1]))); break;
        case 1: _t->ServerEditingFinished(); break;
        case 2: _t->Login(); break;
        case 3: _t->Logout(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SubsonicSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_SubsonicSettingsPage.data,
    qt_meta_data_SubsonicSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SubsonicSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SubsonicSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SubsonicSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int SubsonicSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
