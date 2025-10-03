/****************************************************************************
** Meta object code from reading C++ file 'songsender.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/networkremote/songsender.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songsender.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongSender_t {
    QByteArrayData data[12];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongSender_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongSender_t qt_meta_stringdata_SongSender = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SongSender"
QT_MOC_LITERAL(1, 11, 9), // "SendSongs"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 33), // "cpb::remote::RequestDownloadS..."
QT_MOC_LITERAL(4, 56, 7), // "request"
QT_MOC_LITERAL(5, 64, 17), // "ResponseSongOffer"
QT_MOC_LITERAL(6, 82, 8), // "accepted"
QT_MOC_LITERAL(7, 91, 20), // "TranscodeJobComplete"
QT_MOC_LITERAL(8, 112, 5), // "input"
QT_MOC_LITERAL(9, 118, 6), // "output"
QT_MOC_LITERAL(10, 125, 7), // "success"
QT_MOC_LITERAL(11, 133, 13) // "StartTransfer"

    },
    "SongSender\0SendSongs\0\0"
    "cpb::remote::RequestDownloadSongs\0"
    "request\0ResponseSongOffer\0accepted\0"
    "TranscodeJobComplete\0input\0output\0"
    "success\0StartTransfer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongSender[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       7,    3,   40,    2, 0x08 /* Private */,
      11,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void,

       0        // eod
};

void SongSender::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongSender *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SendSongs((*reinterpret_cast< const cpb::remote::RequestDownloadSongs(*)>(_a[1]))); break;
        case 1: _t->ResponseSongOffer((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->TranscodeJobComplete((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->StartTransfer(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongSender::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SongSender.data,
    qt_meta_data_SongSender,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongSender::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongSender::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongSender.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongSender::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
