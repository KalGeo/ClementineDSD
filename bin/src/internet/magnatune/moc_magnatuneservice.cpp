/****************************************************************************
** Meta object code from reading C++ file 'magnatuneservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/magnatune/magnatuneservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magnatuneservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagnatuneService_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagnatuneService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagnatuneService_t qt_meta_stringdata_MagnatuneService = {
    {
QT_MOC_LITERAL(0, 0, 16), // "MagnatuneService"
QT_MOC_LITERAL(1, 17, 16), // "DownloadFinished"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "albums"
QT_MOC_LITERAL(4, 42, 20), // "UpdateTotalSongCount"
QT_MOC_LITERAL(5, 63, 5), // "count"
QT_MOC_LITERAL(6, 69, 14), // "ReloadDatabase"
QT_MOC_LITERAL(7, 84, 22), // "ReloadDatabaseFinished"
QT_MOC_LITERAL(8, 107, 8), // "Download"
QT_MOC_LITERAL(9, 116, 8), // "Homepage"
QT_MOC_LITERAL(10, 125, 10) // "ShowConfig"

    },
    "MagnatuneService\0DownloadFinished\0\0"
    "albums\0UpdateTotalSongCount\0count\0"
    "ReloadDatabase\0ReloadDatabaseFinished\0"
    "Download\0Homepage\0ShowConfig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagnatuneService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MagnatuneService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MagnatuneService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DownloadFinished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->UpdateTotalSongCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->ReloadDatabase(); break;
        case 3: _t->ReloadDatabaseFinished(); break;
        case 4: _t->Download(); break;
        case 5: _t->Homepage(); break;
        case 6: _t->ShowConfig(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MagnatuneService::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagnatuneService::DownloadFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MagnatuneService::staticMetaObject = { {
    QMetaObject::SuperData::link<InternetService::staticMetaObject>(),
    qt_meta_stringdata_MagnatuneService.data,
    qt_meta_data_MagnatuneService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagnatuneService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagnatuneService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagnatuneService.stringdata0))
        return static_cast<void*>(this);
    return InternetService::qt_metacast(_clname);
}

int MagnatuneService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MagnatuneService::DownloadFinished(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
