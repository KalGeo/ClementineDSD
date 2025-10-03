/****************************************************************************
** Meta object code from reading C++ file 'radiobrowserservice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/radiobrowser/radiobrowserservice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'radiobrowserservice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RadioBrowserService_t {
    QByteArrayData data[27];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RadioBrowserService_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RadioBrowserService_t qt_meta_stringdata_RadioBrowserService = {
    {
QT_MOC_LITERAL(0, 0, 19), // "RadioBrowserService"
QT_MOC_LITERAL(1, 20, 14), // "SearchFinished"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9), // "search_id"
QT_MOC_LITERAL(4, 46, 31), // "RadioBrowserService::StreamList"
QT_MOC_LITERAL(5, 78, 7), // "streams"
QT_MOC_LITERAL(6, 86, 23), // "StationUrlResolveFailed"
QT_MOC_LITERAL(7, 110, 12), // "original_url"
QT_MOC_LITERAL(8, 123, 14), // "ReloadSettings"
QT_MOC_LITERAL(9, 138, 26), // "SongChangeRequestProcessed"
QT_MOC_LITERAL(10, 165, 3), // "url"
QT_MOC_LITERAL(11, 169, 5), // "valid"
QT_MOC_LITERAL(12, 175, 12), // "LazyPopulate"
QT_MOC_LITERAL(13, 188, 14), // "QStandardItem*"
QT_MOC_LITERAL(14, 203, 4), // "item"
QT_MOC_LITERAL(15, 208, 15), // "RefreshRootItem"
QT_MOC_LITERAL(16, 224, 15), // "RefreshCategory"
QT_MOC_LITERAL(17, 240, 19), // "RefreshCategoryItem"
QT_MOC_LITERAL(18, 260, 13), // "RefreshTop100"
QT_MOC_LITERAL(19, 274, 22), // "RefreshStreamsFinished"
QT_MOC_LITERAL(20, 297, 14), // "QNetworkReply*"
QT_MOC_LITERAL(21, 312, 5), // "reply"
QT_MOC_LITERAL(22, 318, 7), // "task_id"
QT_MOC_LITERAL(23, 326, 8), // "Homepage"
QT_MOC_LITERAL(24, 335, 10), // "ShowConfig"
QT_MOC_LITERAL(25, 346, 15), // "AddToSavedRadio"
QT_MOC_LITERAL(26, 362, 7) // "checked"

    },
    "RadioBrowserService\0SearchFinished\0\0"
    "search_id\0RadioBrowserService::StreamList\0"
    "streams\0StationUrlResolveFailed\0"
    "original_url\0ReloadSettings\0"
    "SongChangeRequestProcessed\0url\0valid\0"
    "LazyPopulate\0QStandardItem*\0item\0"
    "RefreshRootItem\0RefreshCategory\0"
    "RefreshCategoryItem\0RefreshTop100\0"
    "RefreshStreamsFinished\0QNetworkReply*\0"
    "reply\0task_id\0Homepage\0ShowConfig\0"
    "AddToSavedRadio\0checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RadioBrowserService[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       6,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   87,    2, 0x0a /* Public */,
       9,    2,   88,    2, 0x0a /* Public */,
      12,    1,   93,    2, 0x08 /* Private */,
      15,    0,   96,    2, 0x08 /* Private */,
      16,    1,   97,    2, 0x08 /* Private */,
      17,    1,  100,    2, 0x08 /* Private */,
      18,    1,  103,    2, 0x08 /* Private */,
      19,    3,  106,    2, 0x08 /* Private */,
      23,    0,  113,    2, 0x08 /* Private */,
      24,    0,  114,    2, 0x08 /* Private */,
      25,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QUrl,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Bool,   10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 20, QMetaType::Int, 0x80000000 | 13,   21,   22,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   26,

       0        // eod
};

void RadioBrowserService::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RadioBrowserService *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< RadioBrowserService::StreamList(*)>(_a[2]))); break;
        case 1: _t->StationUrlResolveFailed((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: _t->ReloadSettings(); break;
        case 3: _t->SongChangeRequestProcessed((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->LazyPopulate((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 5: _t->RefreshRootItem(); break;
        case 6: _t->RefreshCategory((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 7: _t->RefreshCategoryItem((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 8: _t->RefreshTop100((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 9: _t->RefreshStreamsFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QStandardItem*(*)>(_a[3]))); break;
        case 10: _t->Homepage(); break;
        case 11: _t->ShowConfig(); break;
        case 12: _t->AddToSavedRadio((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RadioBrowserService::*)(int , RadioBrowserService::StreamList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioBrowserService::SearchFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RadioBrowserService::*)(const QUrl & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RadioBrowserService::StationUrlResolveFailed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RadioBrowserService::staticMetaObject = { {
    QMetaObject::SuperData::link<InternetService::staticMetaObject>(),
    qt_meta_stringdata_RadioBrowserService.data,
    qt_meta_data_RadioBrowserService,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RadioBrowserService::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RadioBrowserService::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RadioBrowserService.stringdata0))
        return static_cast<void*>(this);
    return InternetService::qt_metacast(_clname);
}

int RadioBrowserService::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InternetService::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void RadioBrowserService::SearchFinished(int _t1, RadioBrowserService::StreamList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RadioBrowserService::StationUrlResolveFailed(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
