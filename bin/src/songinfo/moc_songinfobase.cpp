/****************************************************************************
** Meta object code from reading C++ file 'songinfobase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/songinfo/songinfobase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songinfobase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SongInfoBase_t {
    QByteArrayData data[19];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SongInfoBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SongInfoBase_t qt_meta_stringdata_SongInfoBase = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SongInfoBase"
QT_MOC_LITERAL(1, 13, 18), // "ShowSettingsDialog"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 14), // "DoGlobalSearch"
QT_MOC_LITERAL(4, 48, 5), // "query"
QT_MOC_LITERAL(5, 54, 11), // "SongChanged"
QT_MOC_LITERAL(6, 66, 4), // "Song"
QT_MOC_LITERAL(7, 71, 8), // "metadata"
QT_MOC_LITERAL(8, 80, 12), // "SongFinished"
QT_MOC_LITERAL(9, 93, 14), // "ReloadSettings"
QT_MOC_LITERAL(10, 108, 15), // "InfoResultReady"
QT_MOC_LITERAL(11, 124, 2), // "id"
QT_MOC_LITERAL(12, 127, 25), // "CollapsibleInfoPane::Data"
QT_MOC_LITERAL(13, 153, 4), // "data"
QT_MOC_LITERAL(14, 158, 11), // "ResultReady"
QT_MOC_LITERAL(15, 170, 23), // "SongInfoFetcher::Result"
QT_MOC_LITERAL(16, 194, 6), // "result"
QT_MOC_LITERAL(17, 201, 14), // "SectionToggled"
QT_MOC_LITERAL(18, 216, 5) // "value"

    },
    "SongInfoBase\0ShowSettingsDialog\0\0"
    "DoGlobalSearch\0query\0SongChanged\0Song\0"
    "metadata\0SongFinished\0ReloadSettings\0"
    "InfoResultReady\0id\0CollapsibleInfoPane::Data\0"
    "data\0ResultReady\0SongInfoFetcher::Result\0"
    "result\0SectionToggled\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SongInfoBase[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   58,    2, 0x0a /* Public */,
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    2,   63,    2, 0x09 /* Protected */,
      14,    2,   68,    2, 0x09 /* Protected */,
      17,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 15,   11,   16,
    QMetaType::Void, QMetaType::Bool,   18,

       0        // eod
};

void SongInfoBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SongInfoBase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ShowSettingsDialog(); break;
        case 1: _t->DoGlobalSearch((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SongChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 3: _t->SongFinished(); break;
        case 4: _t->ReloadSettings(); break;
        case 5: _t->InfoResultReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const CollapsibleInfoPane::Data(*)>(_a[2]))); break;
        case 6: _t->ResultReady((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const SongInfoFetcher::Result(*)>(_a[2]))); break;
        case 7: _t->SectionToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SongInfoBase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoBase::ShowSettingsDialog)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SongInfoBase::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SongInfoBase::DoGlobalSearch)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SongInfoBase::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SongInfoBase.data,
    qt_meta_data_SongInfoBase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SongInfoBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongInfoBase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SongInfoBase.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SongInfoBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SongInfoBase::ShowSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SongInfoBase::DoGlobalSearch(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
