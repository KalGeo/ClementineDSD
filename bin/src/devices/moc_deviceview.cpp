/****************************************************************************
** Meta object code from reading C++ file 'deviceview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/devices/deviceview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeviceView_t {
    QByteArrayData data[20];
    char stringdata0[219];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeviceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeviceView_t qt_meta_stringdata_DeviceView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DeviceView"
QT_MOC_LITERAL(1, 11, 7), // "Connect"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "Unmount"
QT_MOC_LITERAL(4, 28, 6), // "Forget"
QT_MOC_LITERAL(5, 35, 10), // "Properties"
QT_MOC_LITERAL(6, 46, 4), // "Load"
QT_MOC_LITERAL(7, 51, 13), // "AddToPlaylist"
QT_MOC_LITERAL(8, 65, 17), // "OpenInNewPlaylist"
QT_MOC_LITERAL(9, 83, 8), // "Organise"
QT_MOC_LITERAL(10, 92, 6), // "Delete"
QT_MOC_LITERAL(11, 99, 15), // "DeviceConnected"
QT_MOC_LITERAL(12, 115, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 127, 3), // "idx"
QT_MOC_LITERAL(14, 131, 18), // "DeviceDisconnected"
QT_MOC_LITERAL(15, 150, 14), // "DeleteFinished"
QT_MOC_LITERAL(16, 165, 8), // "SongList"
QT_MOC_LITERAL(17, 174, 17), // "songs_with_errors"
QT_MOC_LITERAL(18, 192, 20), // "CanRecursivelyExpand"
QT_MOC_LITERAL(19, 213, 5) // "index"

    },
    "DeviceView\0Connect\0\0Unmount\0Forget\0"
    "Properties\0Load\0AddToPlaylist\0"
    "OpenInNewPlaylist\0Organise\0Delete\0"
    "DeviceConnected\0QModelIndex\0idx\0"
    "DeviceDisconnected\0DeleteFinished\0"
    "SongList\0songs_with_errors\0"
    "CanRecursivelyExpand\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeviceView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    0,   87,    2, 0x08 /* Private */,
      11,    1,   88,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      18,    1,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Bool, 0x80000000 | 12,   19,

       0        // eod
};

void DeviceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Connect(); break;
        case 1: _t->Unmount(); break;
        case 2: _t->Forget(); break;
        case 3: _t->Properties(); break;
        case 4: _t->Load(); break;
        case 5: _t->AddToPlaylist(); break;
        case 6: _t->OpenInNewPlaylist(); break;
        case 7: _t->Organise(); break;
        case 8: _t->Delete(); break;
        case 9: _t->DeviceConnected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 10: _t->DeviceDisconnected((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 11: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        case 12: { bool _r = _t->CanRecursivelyExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DeviceView::staticMetaObject = { {
    QMetaObject::SuperData::link<AutoExpandingTreeView::staticMetaObject>(),
    qt_meta_stringdata_DeviceView.data,
    qt_meta_data_DeviceView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeviceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeviceView.stringdata0))
        return static_cast<void*>(this);
    return AutoExpandingTreeView::qt_metacast(_clname);
}

int DeviceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AutoExpandingTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
