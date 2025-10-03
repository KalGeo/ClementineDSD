/****************************************************************************
** Meta object code from reading C++ file 'songinfoprovider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/songinfo/songinfoprovider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfoprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongInfoProvider_t {
    QByteArrayData data[9];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongInfoProvider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongInfoProvider_t qt_meta_stringdata_SongInfoProvider = {
    {
QT_MOC_LITERAL(0, 0, 16), // "SongInfoProvider"
QT_MOC_LITERAL(1, 17, 10), // "ImageReady"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "id"
QT_MOC_LITERAL(4, 32, 3), // "url"
QT_MOC_LITERAL(5, 36, 9), // "InfoReady"
QT_MOC_LITERAL(6, 46, 25), // "CollapsibleInfoPane::Data"
QT_MOC_LITERAL(7, 72, 4), // "data"
QT_MOC_LITERAL(8, 77, 8) // "Finished"

    },
    "SongInfoProvider\0ImageReady\0\0id\0url\0"
    "InfoReady\0CollapsibleInfoPane::Data\0"
    "data\0Finished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongInfoProvider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,
       8,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QUrl,    3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SongInfoProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongInfoProvider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ImageReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QUrl(*)>(_a[2]))); break;
        case 1: _t->InfoReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const CollapsibleInfoPane::Data(*)>(_a[2]))); break;
        case 2: _t->Finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongInfoProvider::*)(int , const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoProvider::ImageReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongInfoProvider::*)(int , const CollapsibleInfoPane::Data & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoProvider::InfoReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SongInfoProvider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoProvider::Finished)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongInfoProvider::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongInfoProvider.data,
    qt_meta_data_SongInfoProvider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongInfoProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongInfoProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoProvider.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongInfoProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SongInfoProvider::ImageReady(int _t1, const QUrl & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SongInfoProvider::InfoReady(int _t1, const CollapsibleInfoPane::Data & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SongInfoProvider::Finished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
