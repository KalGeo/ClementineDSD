/****************************************************************************
** Meta object code from reading C++ file 'qbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../3rdparty/qocoa/qbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QButton_t {
    QByteArrayData data[9];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QButton_t qt_meta_stringdata_QButton = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QButton"
QT_MOC_LITERAL(1, 8, 7), // "clicked"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 7), // "checked"
QT_MOC_LITERAL(4, 25, 7), // "setText"
QT_MOC_LITERAL(5, 33, 4), // "text"
QT_MOC_LITERAL(6, 38, 8), // "setImage"
QT_MOC_LITERAL(7, 47, 5), // "image"
QT_MOC_LITERAL(8, 53, 10) // "setChecked"

    },
    "QButton\0clicked\0\0checked\0setText\0text\0"
    "setImage\0image\0setChecked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       1,    0,   42,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   43,    2, 0x0a /* Public */,
       6,    1,   46,    2, 0x0a /* Public */,
       8,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QPixmap,    7,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void QButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->clicked(); break;
        case 2: _t->setText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setImage((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 4: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QButton::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QButton::clicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_QButton.data,
    qt_meta_data_QButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QButton.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QButton::clicked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
