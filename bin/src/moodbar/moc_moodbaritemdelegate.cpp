/****************************************************************************
** Meta object code from reading C++ file 'moodbaritemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/moodbar/moodbaritemdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moodbaritemdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MoodbarItemDelegate_t {
    QByteArrayData data[12];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MoodbarItemDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MoodbarItemDelegate_t qt_meta_stringdata_MoodbarItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "MoodbarItemDelegate"
QT_MOC_LITERAL(1, 20, 14), // "ReloadSettings"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "DataLoaded"
QT_MOC_LITERAL(4, 47, 3), // "url"
QT_MOC_LITERAL(5, 51, 16), // "MoodbarPipeline*"
QT_MOC_LITERAL(6, 68, 8), // "pipeline"
QT_MOC_LITERAL(7, 77, 12), // "ColorsLoaded"
QT_MOC_LITERAL(8, 90, 20), // "QFuture<ColorVector>"
QT_MOC_LITERAL(9, 111, 6), // "future"
QT_MOC_LITERAL(10, 118, 11), // "ImageLoaded"
QT_MOC_LITERAL(11, 130, 15) // "QFuture<QImage>"

    },
    "MoodbarItemDelegate\0ReloadSettings\0\0"
    "DataLoaded\0url\0MoodbarPipeline*\0"
    "pipeline\0ColorsLoaded\0QFuture<ColorVector>\0"
    "future\0ImageLoaded\0QFuture<QImage>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MoodbarItemDelegate[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    2,   35,    2, 0x08 /* Private */,
       7,    2,   40,    2, 0x08 /* Private */,
      10,    2,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 5,    4,    6,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 8,    4,    9,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 11,    4,    9,

       0        // eod
};

void MoodbarItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MoodbarItemDelegate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ReloadSettings(); break;
        case 1: _t->DataLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< MoodbarPipeline*(*)>(_a[2]))); break;
        case 2: _t->ColorsLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QFuture<ColorVector>(*)>(_a[2]))); break;
        case 3: _t->ImageLoaded((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< QFuture<QImage>(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MoodbarItemDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_MoodbarItemDelegate.data,
    qt_meta_data_MoodbarItemDelegate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MoodbarItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MoodbarItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MoodbarItemDelegate.stringdata0))
        return static_cast<void*>(this);
    return QItemDelegate::qt_metacast(_clname);
}

int MoodbarItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
