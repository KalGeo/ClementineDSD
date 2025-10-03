/****************************************************************************
** Meta object code from reading C++ file 'fileview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/fileview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileView_t {
    QByteArrayData data[26];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileView_t qt_meta_stringdata_FileView = {
    {
QT_MOC_LITERAL(0, 0, 8), // "FileView"
QT_MOC_LITERAL(1, 9, 11), // "PathChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 4), // "path"
QT_MOC_LITERAL(4, 27, 13), // "AddToPlaylist"
QT_MOC_LITERAL(5, 41, 10), // "QMimeData*"
QT_MOC_LITERAL(6, 52, 4), // "data"
QT_MOC_LITERAL(7, 57, 13), // "CopyToLibrary"
QT_MOC_LITERAL(8, 71, 11), // "QList<QUrl>"
QT_MOC_LITERAL(9, 83, 4), // "urls"
QT_MOC_LITERAL(10, 88, 13), // "MoveToLibrary"
QT_MOC_LITERAL(11, 102, 12), // "CopyToDevice"
QT_MOC_LITERAL(12, 115, 8), // "EditTags"
QT_MOC_LITERAL(13, 124, 6), // "FileUp"
QT_MOC_LITERAL(14, 131, 8), // "FileHome"
QT_MOC_LITERAL(15, 140, 14), // "ChangeFilePath"
QT_MOC_LITERAL(16, 155, 8), // "new_path"
QT_MOC_LITERAL(17, 164, 13), // "ItemActivated"
QT_MOC_LITERAL(18, 178, 11), // "QModelIndex"
QT_MOC_LITERAL(19, 190, 5), // "index"
QT_MOC_LITERAL(20, 196, 15), // "ItemDoubleClick"
QT_MOC_LITERAL(21, 212, 6), // "Delete"
QT_MOC_LITERAL(22, 219, 9), // "filenames"
QT_MOC_LITERAL(23, 229, 14), // "DeleteFinished"
QT_MOC_LITERAL(24, 244, 8), // "SongList"
QT_MOC_LITERAL(25, 253, 17) // "songs_with_errors"

    },
    "FileView\0PathChanged\0\0path\0AddToPlaylist\0"
    "QMimeData*\0data\0CopyToLibrary\0QList<QUrl>\0"
    "urls\0MoveToLibrary\0CopyToDevice\0"
    "EditTags\0FileUp\0FileHome\0ChangeFilePath\0"
    "new_path\0ItemActivated\0QModelIndex\0"
    "index\0ItemDoubleClick\0Delete\0filenames\0"
    "DeleteFinished\0SongList\0songs_with_errors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       7,    1,   85,    2, 0x06 /* Public */,
      10,    1,   88,    2, 0x06 /* Public */,
      11,    1,   91,    2, 0x06 /* Public */,
      12,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    1,   99,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      20,    1,  105,    2, 0x08 /* Private */,
      21,    1,  108,    2, 0x08 /* Private */,
      23,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::QStringList,   22,
    QMetaType::Void, 0x80000000 | 24,   25,

       0        // eod
};

void FileView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->PathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 2: _t->CopyToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 3: _t->MoveToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 4: _t->CopyToDevice((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 5: _t->EditTags((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 6: _t->FileUp(); break;
        case 7: _t->FileHome(); break;
        case 8: _t->ChangeFilePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->ItemActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->ItemDoubleClick((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->Delete((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 12: _t->DeleteFinished((*reinterpret_cast< const SongList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileView::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::PathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileView::*)(QMimeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::AddToPlaylist)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileView::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::CopyToLibrary)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileView::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::MoveToLibrary)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileView::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::CopyToDevice)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileView::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileView::EditTags)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_FileView.data,
    qt_meta_data_FileView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void FileView::PathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileView::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileView::CopyToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileView::MoveToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileView::CopyToDevice(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileView::EditTags(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
