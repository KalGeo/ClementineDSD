/****************************************************************************
** Meta object code from reading C++ file 'ripper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ripper/ripper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ripper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Ripper_t {
    QByteArrayData data[17];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Ripper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Ripper_t qt_meta_stringdata_Ripper = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Ripper"
QT_MOC_LITERAL(1, 7, 8), // "Finished"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "Cancelled"
QT_MOC_LITERAL(4, 27, 15), // "RippingComplete"
QT_MOC_LITERAL(5, 43, 5), // "Start"
QT_MOC_LITERAL(6, 49, 6), // "Cancel"
QT_MOC_LITERAL(7, 56, 22), // "TranscodingJobComplete"
QT_MOC_LITERAL(8, 79, 5), // "input"
QT_MOC_LITERAL(9, 85, 6), // "output"
QT_MOC_LITERAL(10, 92, 7), // "success"
QT_MOC_LITERAL(11, 100, 26), // "AllTranscodingJobsComplete"
QT_MOC_LITERAL(12, 127, 7), // "LogLine"
QT_MOC_LITERAL(13, 135, 7), // "message"
QT_MOC_LITERAL(14, 143, 10), // "FileTagged"
QT_MOC_LITERAL(15, 154, 15), // "TagReaderReply*"
QT_MOC_LITERAL(16, 170, 5) // "reply"

    },
    "Ripper\0Finished\0\0Cancelled\0RippingComplete\0"
    "Start\0Cancel\0TranscodingJobComplete\0"
    "input\0output\0success\0AllTranscodingJobsComplete\0"
    "LogLine\0message\0FileTagged\0TagReaderReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Ripper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    3,   64,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    1,   72,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

void Ripper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Ripper *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished(); break;
        case 1: _t->Cancelled(); break;
        case 2: _t->RippingComplete(); break;
        case 3: _t->Start(); break;
        case 4: _t->Cancel(); break;
        case 5: _t->TranscodingJobComplete((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->AllTranscodingJobsComplete(); break;
        case 7: _t->LogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->FileTagged((*reinterpret_cast< TagReaderReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Ripper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ripper::Finished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Ripper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ripper::Cancelled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Ripper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Ripper::RippingComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Ripper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Ripper.data,
    qt_meta_data_Ripper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Ripper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Ripper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Ripper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Ripper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Ripper::Finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Ripper::Cancelled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Ripper::RippingComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
