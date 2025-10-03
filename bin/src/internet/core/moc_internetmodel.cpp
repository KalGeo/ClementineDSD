/****************************************************************************
** Meta object code from reading C++ file 'internetmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/core/internetmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'internetmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InternetModel_t {
    QByteArrayData data[19];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InternetModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InternetModel_t qt_meta_stringdata_InternetModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "InternetModel"
QT_MOC_LITERAL(1, 14, 11), // "StreamError"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "message"
QT_MOC_LITERAL(4, 35, 19), // "StreamMetadataFound"
QT_MOC_LITERAL(5, 55, 12), // "original_url"
QT_MOC_LITERAL(6, 68, 4), // "Song"
QT_MOC_LITERAL(7, 73, 4), // "song"
QT_MOC_LITERAL(8, 78, 13), // "AddToPlaylist"
QT_MOC_LITERAL(9, 92, 10), // "QMimeData*"
QT_MOC_LITERAL(10, 103, 4), // "data"
QT_MOC_LITERAL(11, 108, 13), // "ScrollToIndex"
QT_MOC_LITERAL(12, 122, 11), // "QModelIndex"
QT_MOC_LITERAL(13, 134, 5), // "index"
QT_MOC_LITERAL(14, 140, 14), // "ServiceDeleted"
QT_MOC_LITERAL(15, 155, 20), // "RowsAboutToBeRemoved"
QT_MOC_LITERAL(16, 176, 6), // "parent"
QT_MOC_LITERAL(17, 183, 5), // "first"
QT_MOC_LITERAL(18, 189, 4) // "last"

    },
    "InternetModel\0StreamError\0\0message\0"
    "StreamMetadataFound\0original_url\0Song\0"
    "song\0AddToPlaylist\0QMimeData*\0data\0"
    "ScrollToIndex\0QModelIndex\0index\0"
    "ServiceDeleted\0RowsAboutToBeRemoved\0"
    "parent\0first\0last"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InternetModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    2,   47,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,
      11,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   58,    2, 0x08 /* Private */,
      15,    3,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int, QMetaType::Int,   16,   17,   18,

       0        // eod
};

void InternetModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InternetModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StreamError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->StreamMetadataFound((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const Song(*)>(_a[2]))); break;
        case 2: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 3: _t->ScrollToIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->ServiceDeleted(); break;
        case 5: _t->RowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InternetModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InternetModel::StreamError)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InternetModel::*)(const QUrl & , const Song & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InternetModel::StreamMetadataFound)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InternetModel::*)(QMimeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InternetModel::AddToPlaylist)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InternetModel::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InternetModel::ScrollToIndex)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InternetModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QStandardItemModel::staticMetaObject>(),
    qt_meta_stringdata_InternetModel.data,
    qt_meta_data_InternetModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InternetModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InternetModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InternetModel.stringdata0))
        return static_cast<void*>(this);
    return QStandardItemModel::qt_metacast(_clname);
}

int InternetModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void InternetModel::StreamError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InternetModel::StreamMetadataFound(const QUrl & _t1, const Song & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InternetModel::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InternetModel::ScrollToIndex(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
