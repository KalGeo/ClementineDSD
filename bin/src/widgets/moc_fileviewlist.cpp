/****************************************************************************
** Meta object code from reading C++ file 'fileviewlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/fileviewlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileviewlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileViewList_t {
    QByteArrayData data[28];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileViewList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileViewList_t qt_meta_stringdata_FileViewList = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileViewList"
QT_MOC_LITERAL(1, 13, 13), // "AddToPlaylist"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 10), // "QMimeData*"
QT_MOC_LITERAL(4, 39, 4), // "data"
QT_MOC_LITERAL(5, 44, 13), // "CopyToLibrary"
QT_MOC_LITERAL(6, 58, 11), // "QList<QUrl>"
QT_MOC_LITERAL(7, 70, 4), // "urls"
QT_MOC_LITERAL(8, 75, 13), // "MoveToLibrary"
QT_MOC_LITERAL(9, 89, 12), // "CopyToDevice"
QT_MOC_LITERAL(10, 102, 6), // "Delete"
QT_MOC_LITERAL(11, 109, 9), // "filenames"
QT_MOC_LITERAL(12, 119, 8), // "EditTags"
QT_MOC_LITERAL(13, 128, 4), // "Back"
QT_MOC_LITERAL(14, 133, 7), // "Forward"
QT_MOC_LITERAL(15, 141, 8), // "LoadSlot"
QT_MOC_LITERAL(16, 150, 17), // "AddToPlaylistSlot"
QT_MOC_LITERAL(17, 168, 21), // "OpenInNewPlaylistSlot"
QT_MOC_LITERAL(18, 190, 17), // "CopyToLibrarySlot"
QT_MOC_LITERAL(19, 208, 17), // "MoveToLibrarySlot"
QT_MOC_LITERAL(20, 226, 16), // "CopyToDeviceSlot"
QT_MOC_LITERAL(21, 243, 10), // "DeleteSlot"
QT_MOC_LITERAL(22, 254, 12), // "EditTagsSlot"
QT_MOC_LITERAL(23, 267, 13), // "ShowInBrowser"
QT_MOC_LITERAL(24, 281, 22), // "FilenamesFromSelection"
QT_MOC_LITERAL(25, 304, 20), // "UrlListFromSelection"
QT_MOC_LITERAL(26, 325, 21), // "MimeDataFromSelection"
QT_MOC_LITERAL(27, 347, 9) // "MimeData*"

    },
    "FileViewList\0AddToPlaylist\0\0QMimeData*\0"
    "data\0CopyToLibrary\0QList<QUrl>\0urls\0"
    "MoveToLibrary\0CopyToDevice\0Delete\0"
    "filenames\0EditTags\0Back\0Forward\0"
    "LoadSlot\0AddToPlaylistSlot\0"
    "OpenInNewPlaylistSlot\0CopyToLibrarySlot\0"
    "MoveToLibrarySlot\0CopyToDeviceSlot\0"
    "DeleteSlot\0EditTagsSlot\0ShowInBrowser\0"
    "FilenamesFromSelection\0UrlListFromSelection\0"
    "MimeDataFromSelection\0MimeData*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileViewList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       8,    1,  120,    2, 0x06 /* Public */,
       9,    1,  123,    2, 0x06 /* Public */,
      10,    1,  126,    2, 0x06 /* Public */,
      12,    1,  129,    2, 0x06 /* Public */,
      13,    0,  132,    2, 0x06 /* Public */,
      14,    0,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  134,    2, 0x08 /* Private */,
      16,    0,  135,    2, 0x08 /* Private */,
      17,    0,  136,    2, 0x08 /* Private */,
      18,    0,  137,    2, 0x08 /* Private */,
      19,    0,  138,    2, 0x08 /* Private */,
      20,    0,  139,    2, 0x08 /* Private */,
      21,    0,  140,    2, 0x08 /* Private */,
      22,    0,  141,    2, 0x08 /* Private */,
      23,    0,  142,    2, 0x08 /* Private */,
      24,    0,  143,    2, 0x08 /* Private */,
      25,    0,  144,    2, 0x08 /* Private */,
      26,    0,  145,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QStringList,   11,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QStringList,
    0x80000000 | 6,
    0x80000000 | 27,

       0        // eod
};

void FileViewList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileViewList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddToPlaylist((*reinterpret_cast< QMimeData*(*)>(_a[1]))); break;
        case 1: _t->CopyToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 2: _t->MoveToLibrary((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 3: _t->CopyToDevice((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 4: _t->Delete((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 5: _t->EditTags((*reinterpret_cast< const QList<QUrl>(*)>(_a[1]))); break;
        case 6: _t->Back(); break;
        case 7: _t->Forward(); break;
        case 8: _t->LoadSlot(); break;
        case 9: _t->AddToPlaylistSlot(); break;
        case 10: _t->OpenInNewPlaylistSlot(); break;
        case 11: _t->CopyToLibrarySlot(); break;
        case 12: _t->MoveToLibrarySlot(); break;
        case 13: _t->CopyToDeviceSlot(); break;
        case 14: _t->DeleteSlot(); break;
        case 15: _t->EditTagsSlot(); break;
        case 16: _t->ShowInBrowser(); break;
        case 17: { QStringList _r = _t->FilenamesFromSelection();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 18: { QList<QUrl> _r = _t->UrlListFromSelection();
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = std::move(_r); }  break;
        case 19: { MimeData* _r = _t->MimeDataFromSelection();
            if (_a[0]) *reinterpret_cast< MimeData**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
            }
            break;
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
            using _t = void (FileViewList::*)(QMimeData * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::AddToPlaylist)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::CopyToLibrary)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::MoveToLibrary)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::CopyToDevice)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::Delete)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)(const QList<QUrl> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::EditTags)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::Back)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (FileViewList::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileViewList::Forward)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileViewList::staticMetaObject = { {
    QMetaObject::SuperData::link<QListView::staticMetaObject>(),
    qt_meta_stringdata_FileViewList.data,
    qt_meta_data_FileViewList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileViewList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileViewList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileViewList.stringdata0))
        return static_cast<void*>(this);
    return QListView::qt_metacast(_clname);
}

int FileViewList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void FileViewList::AddToPlaylist(QMimeData * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileViewList::CopyToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileViewList::MoveToLibrary(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileViewList::CopyToDevice(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileViewList::Delete(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileViewList::EditTags(const QList<QUrl> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileViewList::Back()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void FileViewList::Forward()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
