/****************************************************************************
** Meta object code from reading C++ file 'itunessearchpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/podcasts/itunessearchpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'itunessearchpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ITunesSearchPage_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ITunesSearchPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ITunesSearchPage_t qt_meta_stringdata_ITunesSearchPage = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ITunesSearchPage"
QT_MOC_LITERAL(1, 17, 13), // "SearchClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "SearchFinished"
QT_MOC_LITERAL(4, 47, 14), // "QNetworkReply*"
QT_MOC_LITERAL(5, 62, 5) // "reply"

    },
    "ITunesSearchPage\0SearchClicked\0\0"
    "SearchFinished\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ITunesSearchPage[] = {

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
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void ITunesSearchPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ITunesSearchPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SearchClicked(); break;
        case 1: _t->SearchFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ITunesSearchPage::staticMetaObject = { {
    QMetaObject::SuperData::link<AddPodcastPage::staticMetaObject>(),
    qt_meta_stringdata_ITunesSearchPage.data,
    qt_meta_data_ITunesSearchPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ITunesSearchPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ITunesSearchPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ITunesSearchPage.stringdata0))
        return static_cast<void*>(this);
    return AddPodcastPage::qt_metacast(_clname);
}

int ITunesSearchPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AddPodcastPage::qt_metacall(_c, _id, _a);
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
