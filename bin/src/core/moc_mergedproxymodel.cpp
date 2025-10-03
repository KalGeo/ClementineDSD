/****************************************************************************
** Meta object code from reading C++ file 'mergedproxymodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/mergedproxymodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mergedproxymodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MergedProxyModel_t {
    QByteArrayData data[21];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MergedProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MergedProxyModel_t qt_meta_stringdata_MergedProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MergedProxyModel"
QT_MOC_LITERAL(1, 17, 13), // "SubModelReset"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 44, 4), // "root"
QT_MOC_LITERAL(5, 49, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(6, 69, 5), // "model"
QT_MOC_LITERAL(7, 75, 16), // "SourceModelReset"
QT_MOC_LITERAL(8, 92, 22), // "SubModelAboutToBeReset"
QT_MOC_LITERAL(9, 115, 21), // "RowsAboutToBeInserted"
QT_MOC_LITERAL(10, 137, 13), // "source_parent"
QT_MOC_LITERAL(11, 151, 5), // "start"
QT_MOC_LITERAL(12, 157, 3), // "end"
QT_MOC_LITERAL(13, 161, 12), // "RowsInserted"
QT_MOC_LITERAL(14, 174, 20), // "RowsAboutToBeRemoved"
QT_MOC_LITERAL(15, 195, 11), // "RowsRemoved"
QT_MOC_LITERAL(16, 207, 11), // "DataChanged"
QT_MOC_LITERAL(17, 219, 8), // "top_left"
QT_MOC_LITERAL(18, 228, 12), // "bottom_right"
QT_MOC_LITERAL(19, 241, 22), // "LayoutAboutToBeChanged"
QT_MOC_LITERAL(20, 264, 13) // "LayoutChanged"

    },
    "MergedProxyModel\0SubModelReset\0\0"
    "QModelIndex\0root\0QAbstractItemModel*\0"
    "model\0SourceModelReset\0SubModelAboutToBeReset\0"
    "RowsAboutToBeInserted\0source_parent\0"
    "start\0end\0RowsInserted\0RowsAboutToBeRemoved\0"
    "RowsRemoved\0DataChanged\0top_left\0"
    "bottom_right\0LayoutAboutToBeChanged\0"
    "LayoutChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MergedProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       1,    0,   76,    2, 0x08 /* Private */,
       9,    3,   77,    2, 0x08 /* Private */,
      13,    3,   84,    2, 0x08 /* Private */,
      14,    3,   91,    2, 0x08 /* Private */,
      15,    3,   98,    2, 0x08 /* Private */,
      16,    2,  105,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,   17,   18,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MergedProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MergedProxyModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SubModelReset((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel*(*)>(_a[2]))); break;
        case 1: _t->SourceModelReset(); break;
        case 2: _t->SubModelAboutToBeReset(); break;
        case 3: _t->SubModelReset(); break;
        case 4: _t->RowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: _t->RowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->RowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 7: _t->RowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->DataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 9: _t->LayoutAboutToBeChanged(); break;
        case 10: _t->LayoutChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MergedProxyModel::*)(const QModelIndex & , QAbstractItemModel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MergedProxyModel::SubModelReset)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MergedProxyModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractProxyModel::staticMetaObject>(),
    qt_meta_stringdata_MergedProxyModel.data,
    qt_meta_data_MergedProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MergedProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MergedProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MergedProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractProxyModel::qt_metacast(_clname);
}

int MergedProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MergedProxyModel::SubModelReset(const QModelIndex & _t1, QAbstractItemModel * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
