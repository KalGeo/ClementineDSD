/****************************************************************************
** Meta object code from reading C++ file 'transcoder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/transcoder/transcoder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcoder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Transcoder_t {
    QByteArrayData data[9];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Transcoder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Transcoder_t qt_meta_stringdata_Transcoder = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Transcoder"
QT_MOC_LITERAL(1, 11, 11), // "JobComplete"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "input"
QT_MOC_LITERAL(4, 30, 6), // "output"
QT_MOC_LITERAL(5, 37, 7), // "success"
QT_MOC_LITERAL(6, 45, 7), // "LogLine"
QT_MOC_LITERAL(7, 53, 7), // "message"
QT_MOC_LITERAL(8, 61, 15) // "AllJobsComplete"

    },
    "Transcoder\0JobComplete\0\0input\0output\0"
    "success\0LogLine\0message\0AllJobsComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Transcoder[] = {

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
       1,    3,   29,    2, 0x06 /* Public */,
       6,    1,   36,    2, 0x06 /* Public */,
       8,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Bool,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void Transcoder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Transcoder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->JobComplete((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->LogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->AllJobsComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Transcoder::*)(const QUrl & , const QString & , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Transcoder::JobComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Transcoder::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Transcoder::LogLine)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Transcoder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Transcoder::AllJobsComplete)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Transcoder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Transcoder.data,
    qt_meta_data_Transcoder,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Transcoder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Transcoder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Transcoder.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Transcoder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Transcoder::JobComplete(const QUrl & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Transcoder::LogLine(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Transcoder::AllJobsComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
