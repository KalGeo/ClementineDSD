/****************************************************************************
** Meta object code from reading C++ file 'visualisationoverlay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/visualisations/visualisationoverlay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualisationoverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualisationOverlay_t {
    QByteArrayData data[9];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualisationOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualisationOverlay_t qt_meta_stringdata_VisualisationOverlay = {
    {
QT_MOC_LITERAL(0, 0, 20), // "VisualisationOverlay"
QT_MOC_LITERAL(1, 21, 14), // "OpacityChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "value"
QT_MOC_LITERAL(4, 43, 13), // "ShowPopupMenu"
QT_MOC_LITERAL(5, 57, 3), // "pos"
QT_MOC_LITERAL(6, 61, 10), // "SetVisible"
QT_MOC_LITERAL(7, 72, 7), // "visible"
QT_MOC_LITERAL(8, 80, 16) // "ShowSettingsMenu"

    },
    "VisualisationOverlay\0OpacityChanged\0"
    "\0value\0ShowPopupMenu\0pos\0SetVisible\0"
    "visible\0ShowSettingsMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualisationOverlay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QPoint,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,

       0        // eod
};

void VisualisationOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualisationOverlay *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->OpacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->ShowPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->SetVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->ShowSettingsMenu(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VisualisationOverlay::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualisationOverlay::OpacityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VisualisationOverlay::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VisualisationOverlay::ShowPopupMenu)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VisualisationOverlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_VisualisationOverlay.data,
    qt_meta_data_VisualisationOverlay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisualisationOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualisationOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualisationOverlay.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VisualisationOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void VisualisationOverlay::OpacityChanged(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void VisualisationOverlay::ShowPopupMenu(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
