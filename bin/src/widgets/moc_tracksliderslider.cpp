/****************************************************************************
** Meta object code from reading C++ file 'tracksliderslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/tracksliderslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tracksliderslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackSliderSlider_t {
    QByteArrayData data[7];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackSliderSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackSliderSlider_t qt_meta_stringdata_TrackSliderSlider = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TrackSliderSlider"
QT_MOC_LITERAL(1, 18, 11), // "SeekForward"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 12), // "SeekBackward"
QT_MOC_LITERAL(4, 44, 8), // "Previous"
QT_MOC_LITERAL(5, 53, 4), // "Next"
QT_MOC_LITERAL(6, 58, 15) // "UpdateDeltaTime"

    },
    "TrackSliderSlider\0SeekForward\0\0"
    "SeekBackward\0Previous\0Next\0UpdateDeltaTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackSliderSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TrackSliderSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackSliderSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SeekForward(); break;
        case 1: _t->SeekBackward(); break;
        case 2: _t->Previous(); break;
        case 3: _t->Next(); break;
        case 4: _t->UpdateDeltaTime(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackSliderSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSliderSlider::SeekForward)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackSliderSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSliderSlider::SeekBackward)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackSliderSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSliderSlider::Previous)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrackSliderSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSliderSlider::Next)) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TrackSliderSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QSlider::staticMetaObject>(),
    qt_meta_stringdata_TrackSliderSlider.data,
    qt_meta_data_TrackSliderSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackSliderSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackSliderSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSliderSlider.stringdata0))
        return static_cast<void*>(this);
    return QSlider::qt_metacast(_clname);
}

int TrackSliderSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TrackSliderSlider::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrackSliderSlider::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TrackSliderSlider::Previous()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TrackSliderSlider::Next()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
