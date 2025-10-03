/****************************************************************************
** Meta object code from reading C++ file 'songinfosettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/songinfo/songinfosettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfosettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongInfoSettingsPage_t {
    QByteArrayData data[12];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongInfoSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongInfoSettingsPage_t qt_meta_stringdata_SongInfoSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 20), // "SongInfoSettingsPage"
QT_MOC_LITERAL(1, 21, 6), // "MoveUp"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "MoveDown"
QT_MOC_LITERAL(4, 38, 4), // "Move"
QT_MOC_LITERAL(5, 43, 1), // "d"
QT_MOC_LITERAL(6, 45, 18), // "CurrentItemChanged"
QT_MOC_LITERAL(7, 64, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 81, 4), // "item"
QT_MOC_LITERAL(9, 86, 11), // "ItemChanged"
QT_MOC_LITERAL(10, 98, 15), // "FontSizeChanged"
QT_MOC_LITERAL(11, 114, 5) // "value"

    },
    "SongInfoSettingsPage\0MoveUp\0\0MoveDown\0"
    "Move\0d\0CurrentItemChanged\0QListWidgetItem*\0"
    "item\0ItemChanged\0FontSizeChanged\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongInfoSettingsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    1,   49,    2, 0x08 /* Private */,
       9,    1,   52,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Double,   11,

       0        // eod
};

void SongInfoSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongInfoSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->MoveUp(); break;
        case 1: _t->MoveDown(); break;
        case 2: _t->Move((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->CurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->ItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->FontSizeChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongInfoSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_SongInfoSettingsPage.data,
    qt_meta_data_SongInfoSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongInfoSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongInfoSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int SongInfoSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
