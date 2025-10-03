/****************************************************************************
** Meta object code from reading C++ file 'rainbowanalyzer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/analyzers/rainbowanalyzer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rainbowanalyzer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Rainbow__RainbowAnalyzer_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rainbow__RainbowAnalyzer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rainbow__RainbowAnalyzer_t qt_meta_stringdata_Rainbow__RainbowAnalyzer = {
    {
QT_MOC_LITERAL(0, 0, 24) // "Rainbow::RainbowAnalyzer"

    },
    "Rainbow::RainbowAnalyzer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rainbow__RainbowAnalyzer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void Rainbow::RainbowAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Rainbow::RainbowAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<Analyzer::Base::staticMetaObject>(),
    qt_meta_stringdata_Rainbow__RainbowAnalyzer.data,
    qt_meta_data_Rainbow__RainbowAnalyzer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Rainbow::RainbowAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rainbow::RainbowAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Rainbow__RainbowAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return Analyzer::Base::qt_metacast(_clname);
}

int Rainbow::RainbowAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Analyzer::Base::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Rainbow__NyanCatAnalyzer_t {
    QByteArrayData data[5];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rainbow__NyanCatAnalyzer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rainbow__NyanCatAnalyzer_t qt_meta_stringdata_Rainbow__NyanCatAnalyzer = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Rainbow::NyanCatAnalyzer"
QT_MOC_LITERAL(1, 25, 15), // "NyanCatAnalyzer"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 8), // "QWidget*"
QT_MOC_LITERAL(4, 51, 6) // "parent"

    },
    "Rainbow::NyanCatAnalyzer\0NyanCatAnalyzer\0"
    "\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rainbow__NyanCatAnalyzer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   17, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 3,    4,

 // constructors: name, argc, parameters, tag, flags
       1,    1,   14,    2, 0x0e /* Public */,

       0        // eod
};

void Rainbow::NyanCatAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { NyanCatAnalyzer *_r = new NyanCatAnalyzer((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject Rainbow::NyanCatAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<RainbowAnalyzer::staticMetaObject>(),
    qt_meta_stringdata_Rainbow__NyanCatAnalyzer.data,
    qt_meta_data_Rainbow__NyanCatAnalyzer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Rainbow::NyanCatAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rainbow::NyanCatAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Rainbow__NyanCatAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return RainbowAnalyzer::qt_metacast(_clname);
}

int Rainbow::NyanCatAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RainbowAnalyzer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Rainbow__RainbowDashAnalyzer_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Rainbow__RainbowDashAnalyzer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Rainbow__RainbowDashAnalyzer_t qt_meta_stringdata_Rainbow__RainbowDashAnalyzer = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Rainbow::RainbowDashAnalyzer"
QT_MOC_LITERAL(1, 29, 19), // "RainbowDashAnalyzer"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 8), // "QWidget*"
QT_MOC_LITERAL(4, 59, 6) // "parent"

    },
    "Rainbow::RainbowDashAnalyzer\0"
    "RainbowDashAnalyzer\0\0QWidget*\0parent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Rainbow__RainbowDashAnalyzer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       1,   17, // constructors
       0,       // flags
       0,       // signalCount

 // constructors: parameters
    0x80000000 | 2, 0x80000000 | 3,    4,

 // constructors: name, argc, parameters, tag, flags
       1,    1,   14,    2, 0x0e /* Public */,

       0        // eod
};

void Rainbow::RainbowDashAnalyzer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::CreateInstance) {
        switch (_id) {
        case 0: { RainbowDashAnalyzer *_r = new RainbowDashAnalyzer((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast<QObject**>(_a[0]) = _r; } break;
        default: break;
        }
    }
    (void)_o;
}

QT_INIT_METAOBJECT const QMetaObject Rainbow::RainbowDashAnalyzer::staticMetaObject = { {
    QMetaObject::SuperData::link<RainbowAnalyzer::staticMetaObject>(),
    qt_meta_stringdata_Rainbow__RainbowDashAnalyzer.data,
    qt_meta_data_Rainbow__RainbowDashAnalyzer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Rainbow::RainbowDashAnalyzer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rainbow::RainbowDashAnalyzer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Rainbow__RainbowDashAnalyzer.stringdata0))
        return static_cast<void*>(this);
    return RainbowAnalyzer::qt_metacast(_clname);
}

int Rainbow::RainbowDashAnalyzer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RainbowAnalyzer::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
