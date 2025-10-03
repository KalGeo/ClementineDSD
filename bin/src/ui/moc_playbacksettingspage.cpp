/****************************************************************************
** Meta object code from reading C++ file 'playbacksettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/playbacksettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playbacksettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaybackSettingsPage_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaybackSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaybackSettingsPage_t qt_meta_stringdata_PlaybackSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "PlaybackSettingsPage"
QT_MOC_LITERAL(1, 21, 15), // "RgPreampChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 20), // "BufferMinFillChanged"
QT_MOC_LITERAL(5, 65, 20), // "AlsaExclusiveToggled"
QT_MOC_LITERAL(6, 86, 2) // "on"

    },
    "PlaybackSettingsPage\0RgPreampChanged\0"
    "\0value\0BufferMinFillChanged\0"
    "AlsaExclusiveToggled\0on"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaybackSettingsPage[] = {

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
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void PlaybackSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaybackSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RgPreampChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->BufferMinFillChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->AlsaExclusiveToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaybackSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_PlaybackSettingsPage.data,
    qt_meta_data_PlaybackSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaybackSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaybackSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaybackSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int PlaybackSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
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
