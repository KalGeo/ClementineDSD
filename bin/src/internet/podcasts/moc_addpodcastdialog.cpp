/****************************************************************************
** Meta object code from reading C++ file 'addpodcastdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/podcasts/addpodcastdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addpodcastdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddPodcastDialog_t {
    QByteArrayData data[16];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddPodcastDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddPodcastDialog_t qt_meta_stringdata_AddPodcastDialog = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddPodcastDialog"
QT_MOC_LITERAL(1, 17, 16), // "OpenSettingsPage"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "AddPodcast"
QT_MOC_LITERAL(4, 46, 20), // "PodcastDoubleClicked"
QT_MOC_LITERAL(5, 67, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 79, 5), // "index"
QT_MOC_LITERAL(7, 85, 13), // "RemovePodcast"
QT_MOC_LITERAL(8, 99, 10), // "ChangePage"
QT_MOC_LITERAL(9, 110, 13), // "ChangePodcast"
QT_MOC_LITERAL(10, 124, 7), // "current"
QT_MOC_LITERAL(11, 132, 15), // "PageBusyChanged"
QT_MOC_LITERAL(12, 148, 4), // "busy"
QT_MOC_LITERAL(13, 153, 22), // "CurrentPageBusyChanged"
QT_MOC_LITERAL(14, 176, 18), // "SelectFirstPodcast"
QT_MOC_LITERAL(15, 195, 12) // "OpenOPMLFile"

    },
    "AddPodcastDialog\0OpenSettingsPage\0\0"
    "AddPodcast\0PodcastDoubleClicked\0"
    "QModelIndex\0index\0RemovePodcast\0"
    "ChangePage\0ChangePodcast\0current\0"
    "PageBusyChanged\0busy\0CurrentPageBusyChanged\0"
    "SelectFirstPodcast\0OpenOPMLFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddPodcastDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
       9,    1,   73,    2, 0x08 /* Private */,
      11,    1,   76,    2, 0x08 /* Private */,
      13,    1,   79,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddPodcastDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddPodcastDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OpenSettingsPage(); break;
        case 1: _t->AddPodcast(); break;
        case 2: _t->PodcastDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->RemovePodcast(); break;
        case 4: _t->ChangePage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->ChangePodcast((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->PageBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->CurrentPageBusyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->SelectFirstPodcast(); break;
        case 9: _t->OpenOPMLFile(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddPodcastDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddPodcastDialog.data,
    qt_meta_data_AddPodcastDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddPodcastDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddPodcastDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddPodcastDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddPodcastDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
