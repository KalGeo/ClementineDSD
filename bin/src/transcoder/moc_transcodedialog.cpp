/****************************************************************************
** Meta object code from reading C++ file 'transcodedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/transcoder/transcodedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transcodedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TranscodeDialog_t {
    QByteArrayData data[18];
    char stringdata0[163];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TranscodeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TranscodeDialog_t qt_meta_stringdata_TranscodeDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TranscodeDialog"
QT_MOC_LITERAL(1, 16, 3), // "Add"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 6), // "Import"
QT_MOC_LITERAL(4, 28, 6), // "Remove"
QT_MOC_LITERAL(5, 35, 5), // "Start"
QT_MOC_LITERAL(6, 41, 6), // "Cancel"
QT_MOC_LITERAL(7, 48, 11), // "JobComplete"
QT_MOC_LITERAL(8, 60, 5), // "input"
QT_MOC_LITERAL(9, 66, 6), // "output"
QT_MOC_LITERAL(10, 73, 7), // "success"
QT_MOC_LITERAL(11, 81, 7), // "LogLine"
QT_MOC_LITERAL(12, 89, 7), // "message"
QT_MOC_LITERAL(13, 97, 15), // "AllJobsComplete"
QT_MOC_LITERAL(14, 113, 7), // "Options"
QT_MOC_LITERAL(15, 121, 14), // "AddDestination"
QT_MOC_LITERAL(16, 136, 18), // "PipelineDumpAction"
QT_MOC_LITERAL(17, 155, 7) // "checked"

    },
    "TranscodeDialog\0Add\0\0Import\0Remove\0"
    "Start\0Cancel\0JobComplete\0input\0output\0"
    "success\0LogLine\0message\0AllJobsComplete\0"
    "Options\0AddDestination\0PipelineDumpAction\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TranscodeDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    3,   74,    2, 0x08 /* Private */,
      11,    1,   81,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    0,   86,    2, 0x08 /* Private */,
      16,    1,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Bool,    8,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,

       0        // eod
};

void TranscodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TranscodeDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Add(); break;
        case 1: _t->Import(); break;
        case 2: _t->Remove(); break;
        case 3: _t->Start(); break;
        case 4: _t->Cancel(); break;
        case 5: _t->JobComplete((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 6: _t->LogLine((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->AllJobsComplete(); break;
        case 8: _t->Options(); break;
        case 9: _t->AddDestination(); break;
        case 10: _t->PipelineDumpAction((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TranscodeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_TranscodeDialog.data,
    qt_meta_data_TranscodeDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TranscodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TranscodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TranscodeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TranscodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
