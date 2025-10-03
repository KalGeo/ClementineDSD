/****************************************************************************
** Meta object code from reading C++ file 'equalizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/equalizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'equalizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Equalizer_t {
    QByteArrayData data[18];
    char stringdata0[187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Equalizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Equalizer_t qt_meta_stringdata_Equalizer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Equalizer"
QT_MOC_LITERAL(1, 10, 14), // "EnabledChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7), // "enabled"
QT_MOC_LITERAL(4, 34, 17), // "ParametersChanged"
QT_MOC_LITERAL(5, 52, 6), // "preamp"
QT_MOC_LITERAL(6, 59, 10), // "QList<int>"
QT_MOC_LITERAL(7, 70, 10), // "band_gains"
QT_MOC_LITERAL(8, 81, 20), // "StereoBalanceChanged"
QT_MOC_LITERAL(9, 102, 7), // "balance"
QT_MOC_LITERAL(10, 110, 13), // "PresetChanged"
QT_MOC_LITERAL(11, 124, 4), // "name"
QT_MOC_LITERAL(12, 129, 5), // "index"
QT_MOC_LITERAL(13, 135, 10), // "SavePreset"
QT_MOC_LITERAL(14, 146, 9), // "DelPreset"
QT_MOC_LITERAL(15, 156, 4), // "Save"
QT_MOC_LITERAL(16, 161, 19), // "StereoSliderChanged"
QT_MOC_LITERAL(17, 181, 5) // "value"

    },
    "Equalizer\0EnabledChanged\0\0enabled\0"
    "ParametersChanged\0preamp\0QList<int>\0"
    "band_gains\0StereoBalanceChanged\0balance\0"
    "PresetChanged\0name\0index\0SavePreset\0"
    "DelPreset\0Save\0StereoSliderChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Equalizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    2,   67,    2, 0x06 /* Public */,
       8,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   75,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      10,    1,   79,    2, 0x08 /* Private */,
      13,    0,   82,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Float,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

void Equalizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Equalizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->EnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->ParametersChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 2: _t->StereoBalanceChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->ParametersChanged(); break;
        case 4: _t->PresetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->PresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SavePreset(); break;
        case 7: _t->DelPreset(); break;
        case 8: _t->Save(); break;
        case 9: _t->StereoSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Equalizer::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Equalizer::EnabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Equalizer::*)(int , const QList<int> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Equalizer::ParametersChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Equalizer::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Equalizer::StereoBalanceChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Equalizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Equalizer.data,
    qt_meta_data_Equalizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Equalizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Equalizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Equalizer.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Equalizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Equalizer::EnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Equalizer::ParametersChanged(int _t1, const QList<int> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Equalizer::StereoBalanceChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
