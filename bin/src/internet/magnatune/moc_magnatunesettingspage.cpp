/****************************************************************************
** Meta object code from reading C++ file 'magnatunesettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/magnatune/magnatunesettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magnatunesettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagnatuneSettingsPage_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagnatuneSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagnatuneSettingsPage_t qt_meta_stringdata_MagnatuneSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 21), // "MagnatuneSettingsPage"
QT_MOC_LITERAL(1, 22, 5), // "Login"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "Logout"
QT_MOC_LITERAL(4, 36, 17), // "MembershipChanged"
QT_MOC_LITERAL(5, 54, 5), // "value"
QT_MOC_LITERAL(6, 60, 13), // "LoginFinished"
QT_MOC_LITERAL(7, 74, 22), // "AuthenticationRequired"
QT_MOC_LITERAL(8, 97, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 112, 5), // "reply"
QT_MOC_LITERAL(10, 118, 15), // "QAuthenticator*"
QT_MOC_LITERAL(11, 134, 4) // "auth"

    },
    "MagnatuneSettingsPage\0Login\0\0Logout\0"
    "MembershipChanged\0value\0LoginFinished\0"
    "AuthenticationRequired\0QNetworkReply*\0"
    "reply\0QAuthenticator*\0auth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagnatuneSettingsPage[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 10,    9,   11,

       0        // eod
};

void MagnatuneSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MagnatuneSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Login(); break;
        case 1: _t->Logout(); break;
        case 2: _t->MembershipChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->LoginFinished(); break;
        case 4: _t->AuthenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MagnatuneSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_MagnatuneSettingsPage.data,
    qt_meta_data_MagnatuneSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagnatuneSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagnatuneSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagnatuneSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int MagnatuneSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
