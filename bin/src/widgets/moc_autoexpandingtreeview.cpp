/****************************************************************************
** Meta object code from reading C++ file 'autoexpandingtreeview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/autoexpandingtreeview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autoexpandingtreeview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoExpandingTreeView_t {
    QByteArrayData data[16];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoExpandingTreeView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoExpandingTreeView_t qt_meta_stringdata_AutoExpandingTreeView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "AutoExpandingTreeView"
QT_MOC_LITERAL(1, 22, 19), // "AddToPlaylistSignal"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "QMimeData*"
QT_MOC_LITERAL(4, 54, 4), // "data"
QT_MOC_LITERAL(5, 59, 19), // "FocusOnFilterSignal"
QT_MOC_LITERAL(6, 79, 10), // "QKeyEvent*"
QT_MOC_LITERAL(7, 90, 5), // "event"
QT_MOC_LITERAL(8, 96, 17), // "RecursivelyExpand"
QT_MOC_LITERAL(9, 114, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 126, 5), // "index"
QT_MOC_LITERAL(11, 132, 10), // "UpAndFocus"
QT_MOC_LITERAL(12, 143, 12), // "DownAndFocus"
QT_MOC_LITERAL(13, 156, 12), // "ItemExpanded"
QT_MOC_LITERAL(14, 169, 11), // "ItemClicked"
QT_MOC_LITERAL(15, 181, 17) // "ItemDoubleClicked"

    },
    "AutoExpandingTreeView\0AddToPlaylistSignal\0"
    "\0QMimeData*\0data\0FocusOnFilterSignal\0"
    "QKeyEvent*\0event\0RecursivelyExpand\0"
    "QModelIndex\0index\0UpAndFocus\0DownAndFocus\0"
    "ItemExpanded\0ItemClicked\0ItemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoExpandingTreeView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   60,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x0a /* Public */,
      13,    1,   65,    2, 0x08 /* Private */,
      14,    1,   68,    2, 0x08 /* Private */,
      15,    1,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void AutoExpandingTreeView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutoExpandingTreeView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddToPlaylistSignal((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 1: _t->FocusOnFilterSignal((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 2: _t->RecursivelyExpand((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->UpAndFocus(); break;
        case 4: _t->DownAndFocus(); break;
        case 5: _t->ItemExpanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->ItemClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->ItemDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutoExpandingTreeView::*)(QMimeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoExpandingTreeView::AddToPlaylistSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutoExpandingTreeView::*)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutoExpandingTreeView::FocusOnFilterSignal)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutoExpandingTreeView::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeView::staticMetaObject>(),
    qt_meta_stringdata_AutoExpandingTreeView.data,
    qt_meta_data_AutoExpandingTreeView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutoExpandingTreeView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoExpandingTreeView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoExpandingTreeView.stringdata0))
        return static_cast<void*>(this);
    return QTreeView::qt_metacast(_clname);
}

int AutoExpandingTreeView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void AutoExpandingTreeView::AddToPlaylistSignal(QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutoExpandingTreeView::FocusOnFilterSignal(QKeyEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
