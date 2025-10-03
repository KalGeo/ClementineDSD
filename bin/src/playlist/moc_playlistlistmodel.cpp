/****************************************************************************
** Meta object code from reading C++ file 'playlistlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/playlist/playlistlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlaylistListModel_t {
    QByteArrayData data[15];
    char stringdata0[157];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlaylistListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlaylistListModel_t qt_meta_stringdata_PlaylistListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PlaylistListModel"
QT_MOC_LITERAL(1, 18, 19), // "PlaylistPathChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 2), // "id"
QT_MOC_LITERAL(4, 42, 8), // "new_path"
QT_MOC_LITERAL(5, 51, 15), // "PlaylistRenamed"
QT_MOC_LITERAL(6, 67, 8), // "new_name"
QT_MOC_LITERAL(7, 76, 11), // "RowsChanged"
QT_MOC_LITERAL(8, 88, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 100, 5), // "begin"
QT_MOC_LITERAL(10, 106, 3), // "end"
QT_MOC_LITERAL(11, 110, 20), // "RowsAboutToBeRemoved"
QT_MOC_LITERAL(12, 131, 6), // "parent"
QT_MOC_LITERAL(13, 138, 5), // "start"
QT_MOC_LITERAL(14, 144, 12) // "RowsInserted"

    },
    "PlaylistListModel\0PlaylistPathChanged\0"
    "\0id\0new_path\0PlaylistRenamed\0new_name\0"
    "RowsChanged\0QModelIndex\0begin\0end\0"
    "RowsAboutToBeRemoved\0parent\0start\0"
    "RowsInserted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlaylistListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   49,    2, 0x08 /* Private */,
      11,    3,   54,    2, 0x08 /* Private */,
      14,    3,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,   12,   13,   10,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,   12,   13,   10,

       0        // eod
};

void PlaylistListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PlaylistListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PlaylistPathChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->PlaylistRenamed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->RowsChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->RowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->RowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PlaylistListModel::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistListModel::PlaylistPathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PlaylistListModel::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlaylistListModel::PlaylistRenamed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PlaylistListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_PlaylistListModel.data,
    qt_meta_data_PlaylistListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlaylistListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlaylistListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlaylistListModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int PlaylistListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PlaylistListModel::PlaylistPathChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PlaylistListModel::PlaylistRenamed(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
