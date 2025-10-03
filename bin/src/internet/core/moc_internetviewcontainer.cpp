/****************************************************************************
** Meta object code from reading C++ file 'internetviewcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/core/internetviewcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internetviewcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InternetViewContainer_t {
    QByteArrayData data[13];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InternetViewContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InternetViewContainer_t qt_meta_stringdata_InternetViewContainer = {
    {
QT_MOC_LITERAL(0, 0, 21), // "InternetViewContainer"
QT_MOC_LITERAL(1, 22, 13), // "ScrollToIndex"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 49, 5), // "index"
QT_MOC_LITERAL(5, 55, 9), // "Collapsed"
QT_MOC_LITERAL(6, 65, 8), // "Expanded"
QT_MOC_LITERAL(7, 74, 19), // "CurrentIndexChanged"
QT_MOC_LITERAL(8, 94, 15), // "SetHeaderHeight"
QT_MOC_LITERAL(9, 110, 6), // "height"
QT_MOC_LITERAL(10, 117, 13), // "FocusOnFilter"
QT_MOC_LITERAL(11, 131, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 142, 5) // "event"

    },
    "InternetViewContainer\0ScrollToIndex\0"
    "\0QModelIndex\0index\0Collapsed\0Expanded\0"
    "CurrentIndexChanged\0SetHeaderHeight\0"
    "height\0FocusOnFilter\0QKeyEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InternetViewContainer[] = {

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
       1,    1,   44,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x08 /* Private */,
       6,    1,   50,    2, 0x08 /* Private */,
       7,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

void InternetViewContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InternetViewContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ScrollToIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->Collapsed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->Expanded((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->CurrentIndexChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->SetHeaderHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->FocusOnFilter((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InternetViewContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_InternetViewContainer.data,
    qt_meta_data_InternetViewContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InternetViewContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InternetViewContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InternetViewContainer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int InternetViewContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
