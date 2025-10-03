/****************************************************************************
** Meta object code from reading C++ file 'organisedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/organisedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'organisedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrganiseDialog_t {
    QByteArrayData data[12];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrganiseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrganiseDialog_t qt_meta_stringdata_OrganiseDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "OrganiseDialog"
QT_MOC_LITERAL(1, 15, 10), // "FileCopied"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "accept"
QT_MOC_LITERAL(4, 34, 5), // "Reset"
QT_MOC_LITERAL(5, 40, 14), // "UpdatePreviews"
QT_MOC_LITERAL(6, 55, 15), // "DestDataChanged"
QT_MOC_LITERAL(7, 71, 11), // "QModelIndex"
QT_MOC_LITERAL(8, 83, 5), // "begin"
QT_MOC_LITERAL(9, 89, 3), // "end"
QT_MOC_LITERAL(10, 93, 16), // "OrganiseFinished"
QT_MOC_LITERAL(11, 110, 17) // "files_with_errors"

    },
    "OrganiseDialog\0FileCopied\0\0accept\0"
    "Reset\0UpdatePreviews\0DestDataChanged\0"
    "QModelIndex\0begin\0end\0OrganiseFinished\0"
    "files_with_errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrganiseDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x0a /* Public */,
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    2,   50,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, QMetaType::QStringList,   11,

       0        // eod
};

void OrganiseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrganiseDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->FileCopied((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->Reset(); break;
        case 3: _t->UpdatePreviews(); break;
        case 4: _t->DestDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 5: _t->OrganiseFinished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrganiseDialog::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrganiseDialog::FileCopied)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrganiseDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_OrganiseDialog.data,
    qt_meta_data_OrganiseDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrganiseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrganiseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrganiseDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OrganiseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OrganiseDialog::FileCopied(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
