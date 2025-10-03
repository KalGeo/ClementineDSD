/****************************************************************************
** Meta object code from reading C++ file 'searchtermwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/smartplaylists/searchtermwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchtermwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smart_playlists__SearchTermWidget_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smart_playlists__SearchTermWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smart_playlists__SearchTermWidget_t qt_meta_stringdata_smart_playlists__SearchTermWidget = {
    {
QT_MOC_LITERAL(0, 0, 33), // "smart_playlists::SearchTermWi..."
QT_MOC_LITERAL(1, 34, 7), // "Clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 13), // "RemoveClicked"
QT_MOC_LITERAL(4, 57, 7), // "Changed"
QT_MOC_LITERAL(5, 65, 12), // "FieldChanged"
QT_MOC_LITERAL(6, 78, 5), // "index"
QT_MOC_LITERAL(7, 84, 9), // "OpChanged"
QT_MOC_LITERAL(8, 94, 20), // "RelativeValueChanged"
QT_MOC_LITERAL(9, 115, 4), // "Grab"
QT_MOC_LITERAL(10, 120, 15) // "overlay_opacity"

    },
    "smart_playlists::SearchTermWidget\0"
    "Clicked\0\0RemoveClicked\0Changed\0"
    "FieldChanged\0index\0OpChanged\0"
    "RelativeValueChanged\0Grab\0overlay_opacity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smart_playlists__SearchTermWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       1,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    0,   58,    2, 0x08 /* Private */,
       9,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Float, 0x00095003,

       0        // eod
};

void smart_playlists::SearchTermWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchTermWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Clicked(); break;
        case 1: _t->RemoveClicked(); break;
        case 2: _t->Changed(); break;
        case 3: _t->FieldChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OpChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->RelativeValueChanged(); break;
        case 6: _t->Grab(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchTermWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchTermWidget::Clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchTermWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchTermWidget::RemoveClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchTermWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchTermWidget::Changed)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SearchTermWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->overlay_opacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SearchTermWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_overlay_opacity(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject smart_playlists::SearchTermWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_smart_playlists__SearchTermWidget.data,
    qt_meta_data_smart_playlists__SearchTermWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smart_playlists::SearchTermWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smart_playlists::SearchTermWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smart_playlists__SearchTermWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int smart_playlists::SearchTermWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void smart_playlists::SearchTermWidget::Clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void smart_playlists::SearchTermWidget::RemoveClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void smart_playlists::SearchTermWidget::Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
