/****************************************************************************
** Meta object code from reading C++ file 'gpoddertoptagsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/podcasts/gpoddertoptagsmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gpoddertoptagsmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GPodderTopTagsModel_t {
    QByteArrayData data[8];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GPodderTopTagsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GPodderTopTagsModel_t qt_meta_stringdata_GPodderTopTagsModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "GPodderTopTagsModel"
QT_MOC_LITERAL(1, 20, 21), // "PodcastsOfTagFinished"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 55, 6), // "parent"
QT_MOC_LITERAL(5, 62, 19), // "mygpo::PodcastList*"
QT_MOC_LITERAL(6, 82, 4), // "list"
QT_MOC_LITERAL(7, 87, 19) // "PodcastsOfTagFailed"

    },
    "GPodderTopTagsModel\0PodcastsOfTagFinished\0"
    "\0QModelIndex\0parent\0mygpo::PodcastList*\0"
    "list\0PodcastsOfTagFailed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GPodderTopTagsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x08 /* Private */,
       7,    2,   29,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,

       0        // eod
};

void GPodderTopTagsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GPodderTopTagsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PodcastsOfTagFinished((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< mygpo::PodcastList*(*)>(_a[2]))); break;
        case 1: _t->PodcastsOfTagFailed((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< mygpo::PodcastList*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GPodderTopTagsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<PodcastDiscoveryModel::staticMetaObject>(),
    qt_meta_stringdata_GPodderTopTagsModel.data,
    qt_meta_data_GPodderTopTagsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GPodderTopTagsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GPodderTopTagsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GPodderTopTagsModel.stringdata0))
        return static_cast<void*>(this);
    return PodcastDiscoveryModel::qt_metacast(_clname);
}

int GPodderTopTagsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PodcastDiscoveryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
