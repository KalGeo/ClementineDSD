/****************************************************************************
** Meta object code from reading C++ file 'libraryfilterwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/library/libraryfilterwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libraryfilterwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LibraryFilterWidget_t {
    QByteArrayData data[23];
    char stringdata0[279];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LibraryFilterWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LibraryFilterWidget_t qt_meta_stringdata_LibraryFilterWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "LibraryFilterWidget"
QT_MOC_LITERAL(1, 20, 9), // "UpPressed"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "DownPressed"
QT_MOC_LITERAL(4, 43, 13), // "ReturnPressed"
QT_MOC_LITERAL(5, 57, 6), // "Filter"
QT_MOC_LITERAL(6, 64, 4), // "text"
QT_MOC_LITERAL(7, 69, 12), // "SetQueryMode"
QT_MOC_LITERAL(8, 82, 23), // "QueryOptions::QueryMode"
QT_MOC_LITERAL(9, 106, 4), // "view"
QT_MOC_LITERAL(10, 111, 13), // "FocusOnFilter"
QT_MOC_LITERAL(11, 125, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 136, 1), // "e"
QT_MOC_LITERAL(13, 138, 15), // "GroupingChanged"
QT_MOC_LITERAL(14, 154, 22), // "LibraryModel::Grouping"
QT_MOC_LITERAL(15, 177, 1), // "g"
QT_MOC_LITERAL(16, 179, 14), // "GroupByClicked"
QT_MOC_LITERAL(17, 194, 8), // "QAction*"
QT_MOC_LITERAL(18, 203, 6), // "action"
QT_MOC_LITERAL(19, 210, 11), // "SaveGroupBy"
QT_MOC_LITERAL(20, 222, 19), // "ShowGroupingManager"
QT_MOC_LITERAL(21, 242, 17), // "FilterTextChanged"
QT_MOC_LITERAL(22, 260, 18) // "FilterDelayTimeout"

    },
    "LibraryFilterWidget\0UpPressed\0\0"
    "DownPressed\0ReturnPressed\0Filter\0text\0"
    "SetQueryMode\0QueryOptions::QueryMode\0"
    "view\0FocusOnFilter\0QKeyEvent*\0e\0"
    "GroupingChanged\0LibraryModel::Grouping\0"
    "g\0GroupByClicked\0QAction*\0action\0"
    "SaveGroupBy\0ShowGroupingManager\0"
    "FilterTextChanged\0FilterDelayTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LibraryFilterWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   80,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      13,    1,   86,    2, 0x08 /* Private */,
      16,    1,   89,    2, 0x08 /* Private */,
      19,    0,   92,    2, 0x08 /* Private */,
      20,    0,   93,    2, 0x08 /* Private */,
      21,    1,   94,    2, 0x08 /* Private */,
      22,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void LibraryFilterWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LibraryFilterWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->UpPressed(); break;
        case 1: _t->DownPressed(); break;
        case 2: _t->ReturnPressed(); break;
        case 3: _t->Filter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->SetQueryMode((*reinterpret_cast< QueryOptions::QueryMode(*)>(_a[1]))); break;
        case 5: _t->FocusOnFilter((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->GroupingChanged((*reinterpret_cast< const LibraryModel::Grouping(*)>(_a[1]))); break;
        case 7: _t->GroupByClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->SaveGroupBy(); break;
        case 9: _t->ShowGroupingManager(); break;
        case 10: _t->FilterTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->FilterDelayTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< LibraryModel::Grouping >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LibraryFilterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryFilterWidget::UpPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LibraryFilterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryFilterWidget::DownPressed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LibraryFilterWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryFilterWidget::ReturnPressed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LibraryFilterWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LibraryFilterWidget::Filter)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LibraryFilterWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LibraryFilterWidget.data,
    qt_meta_data_LibraryFilterWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LibraryFilterWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LibraryFilterWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LibraryFilterWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LibraryFilterWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void LibraryFilterWidget::UpPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LibraryFilterWidget::DownPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LibraryFilterWidget::ReturnPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LibraryFilterWidget::Filter(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
