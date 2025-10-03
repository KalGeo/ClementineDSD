/****************************************************************************
** Meta object code from reading C++ file 'magnatunedownloaddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/internet/magnatune/magnatunedownloaddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magnatunedownloaddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MagnatuneDownloadDialog_t {
    QByteArrayData data[19];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MagnatuneDownloadDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MagnatuneDownloadDialog_t qt_meta_stringdata_MagnatuneDownloadDialog = {
    {
QT_MOC_LITERAL(0, 0, 23), // "MagnatuneDownloadDialog"
QT_MOC_LITERAL(1, 24, 8), // "Finished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 6), // "albums"
QT_MOC_LITERAL(4, 41, 6), // "accept"
QT_MOC_LITERAL(5, 48, 6), // "Browse"
QT_MOC_LITERAL(6, 55, 12), // "DownloadNext"
QT_MOC_LITERAL(7, 68, 5), // "Error"
QT_MOC_LITERAL(8, 74, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 102, 16), // "MetadataFinished"
QT_MOC_LITERAL(10, 119, 16), // "DownloadProgress"
QT_MOC_LITERAL(11, 136, 8), // "received"
QT_MOC_LITERAL(12, 145, 5), // "total"
QT_MOC_LITERAL(13, 151, 17), // "DownloadReadyRead"
QT_MOC_LITERAL(14, 169, 16), // "DownloadFinished"
QT_MOC_LITERAL(15, 186, 9), // "ShowError"
QT_MOC_LITERAL(16, 196, 7), // "message"
QT_MOC_LITERAL(17, 204, 11), // "AllFinished"
QT_MOC_LITERAL(18, 216, 5) // "error"

    },
    "MagnatuneDownloadDialog\0Finished\0\0"
    "albums\0accept\0Browse\0DownloadNext\0"
    "Error\0QNetworkReply::NetworkError\0"
    "MetadataFinished\0DownloadProgress\0"
    "received\0total\0DownloadReadyRead\0"
    "DownloadFinished\0ShowError\0message\0"
    "AllFinished\0error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MagnatuneDownloadDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x0a /* Public */,
       5,    0,   73,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    1,   75,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    2,   79,    2, 0x08 /* Private */,
      13,    0,   84,    2, 0x08 /* Private */,
      14,    0,   85,    2, 0x08 /* Private */,
      15,    1,   86,    2, 0x08 /* Private */,
      17,    1,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void MagnatuneDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MagnatuneDownloadDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Finished((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: _t->accept(); break;
        case 2: _t->Browse(); break;
        case 3: _t->DownloadNext(); break;
        case 4: _t->Error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->MetadataFinished(); break;
        case 6: _t->DownloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->DownloadReadyRead(); break;
        case 8: _t->DownloadFinished(); break;
        case 9: _t->ShowError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->AllFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MagnatuneDownloadDialog::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MagnatuneDownloadDialog::Finished)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MagnatuneDownloadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MagnatuneDownloadDialog.data,
    qt_meta_data_MagnatuneDownloadDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MagnatuneDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MagnatuneDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MagnatuneDownloadDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MagnatuneDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void MagnatuneDownloadDialog::Finished(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
