/****************************************************************************
** Meta object code from reading C++ file 'artistinfoview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/songinfo/artistinfoview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'artistinfoview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArtistInfoView_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArtistInfoView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArtistInfoView_t qt_meta_stringdata_ArtistInfoView = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ArtistInfoView"
QT_MOC_LITERAL(1, 15, 11), // "ResultReady"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 2), // "id"
QT_MOC_LITERAL(4, 31, 23), // "SongInfoFetcher::Result"
QT_MOC_LITERAL(5, 55, 6) // "result"

    },
    "ArtistInfoView\0ResultReady\0\0id\0"
    "SongInfoFetcher::Result\0result"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArtistInfoView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

       0        // eod
};

void ArtistInfoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ArtistInfoView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ResultReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongInfoFetcher::Result(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ArtistInfoView::staticMetaObject = { {
    QMetaObject::SuperData::link<SongInfoBase::staticMetaObject>(),
    qt_meta_stringdata_ArtistInfoView.data,
    qt_meta_data_ArtistInfoView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ArtistInfoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArtistInfoView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ArtistInfoView.stringdata0))
        return static_cast<void*>(this);
    return SongInfoBase::qt_metacast(_clname);
}

int ArtistInfoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SongInfoBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
