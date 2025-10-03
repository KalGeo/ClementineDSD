/****************************************************************************
** Meta object code from reading C++ file 'trackslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/trackslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'trackslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackSlider_t {
    QByteArrayData data[19];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackSlider_t qt_meta_stringdata_TrackSlider = {
    {
QT_MOC_LITERAL(0, 0, 11), // "TrackSlider"
QT_MOC_LITERAL(1, 12, 12), // "ValueChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "value"
QT_MOC_LITERAL(4, 32, 19), // "ValueChangedSeconds"
QT_MOC_LITERAL(5, 52, 11), // "SeekForward"
QT_MOC_LITERAL(6, 64, 12), // "SeekBackward"
QT_MOC_LITERAL(7, 77, 4), // "Next"
QT_MOC_LITERAL(8, 82, 8), // "Previous"
QT_MOC_LITERAL(9, 91, 8), // "SetValue"
QT_MOC_LITERAL(10, 100, 7), // "elapsed"
QT_MOC_LITERAL(11, 108, 5), // "total"
QT_MOC_LITERAL(12, 114, 10), // "SetStopped"
QT_MOC_LITERAL(13, 125, 10), // "SetCanSeek"
QT_MOC_LITERAL(14, 136, 8), // "can_seek"
QT_MOC_LITERAL(15, 145, 4), // "Seek"
QT_MOC_LITERAL(16, 150, 3), // "gap"
QT_MOC_LITERAL(17, 154, 17), // "ValueMaybeChanged"
QT_MOC_LITERAL(18, 172, 17) // "ToggleTimeDisplay"

    },
    "TrackSlider\0ValueChanged\0\0value\0"
    "ValueChangedSeconds\0SeekForward\0"
    "SeekBackward\0Next\0Previous\0SetValue\0"
    "elapsed\0total\0SetStopped\0SetCanSeek\0"
    "can_seek\0Seek\0gap\0ValueMaybeChanged\0"
    "ToggleTimeDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackSlider[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       5,    0,   80,    2, 0x06 /* Public */,
       6,    0,   81,    2, 0x06 /* Public */,
       7,    0,   82,    2, 0x06 /* Public */,
       8,    0,   83,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   84,    2, 0x0a /* Public */,
      12,    0,   89,    2, 0x0a /* Public */,
      13,    1,   90,    2, 0x0a /* Public */,
      15,    1,   93,    2, 0x0a /* Public */,
      17,    1,   96,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

       0        // eod
};

void TrackSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackSlider *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ValueChangedSeconds((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SeekForward(); break;
        case 3: _t->SeekBackward(); break;
        case 4: _t->Next(); break;
        case 5: _t->Previous(); break;
        case 6: _t->SetValue((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->SetStopped(); break;
        case 8: _t->SetCanSeek((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->Seek((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->ValueMaybeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->ToggleTimeDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackSlider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSlider::ValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSlider::ValueChangedSeconds)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSlider::SeekForward)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSlider::SeekBackward)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSlider::Next)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TrackSlider::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackSlider::Previous)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackSlider::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_TrackSlider.data,
    qt_meta_data_TrackSlider,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackSlider.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrackSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void TrackSlider::ValueChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TrackSlider::ValueChangedSeconds(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TrackSlider::SeekForward()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TrackSlider::SeekBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TrackSlider::Next()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TrackSlider::Previous()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
