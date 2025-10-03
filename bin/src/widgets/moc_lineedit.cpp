/****************************************************************************
** Meta object code from reading C++ file 'lineedit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/lineedit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lineedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LineEdit_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LineEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LineEdit_t qt_meta_stringdata_LineEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "LineEdit"
QT_MOC_LITERAL(1, 9, 5), // "Reset"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "text_changed"
QT_MOC_LITERAL(4, 29, 4), // "text"
QT_MOC_LITERAL(5, 34, 4), // "hint"
QT_MOC_LITERAL(6, 39, 15), // "font_point_size"
QT_MOC_LITERAL(7, 55, 16), // "has_clear_button"
QT_MOC_LITERAL(8, 72, 16) // "has_reset_button"

    },
    "LineEdit\0Reset\0\0text_changed\0text\0"
    "hint\0font_point_size\0has_clear_button\0"
    "has_reset_button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LineEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   28, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095003,
       6, QMetaType::QReal, 0x00095003,
       7, QMetaType::Bool, 0x00095003,
       8, QMetaType::Bool, 0x00095003,

       0        // eod
};

void LineEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        case 1: _t->text_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LineEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LineEdit::Reset)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->font_point_size(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LineEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_font_point_size(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LineEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QLineEdit::staticMetaObject>(),
    qt_meta_stringdata_LineEdit.data,
    qt_meta_data_LineEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LineEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QLineEdit::qt_metacast(_clname);
}

int LineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LineEdit::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_TextEdit_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TextEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TextEdit_t qt_meta_stringdata_TextEdit = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TextEdit"
QT_MOC_LITERAL(1, 9, 5), // "Reset"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "hint"
QT_MOC_LITERAL(4, 21, 16), // "has_clear_button"
QT_MOC_LITERAL(5, 38, 16) // "has_reset_button"

    },
    "TextEdit\0Reset\0\0hint\0has_clear_button\0"
    "has_reset_button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TextEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::Bool, 0x00095003,
       5, QMetaType::Bool, 0x00095003,

       0        // eod
};

void TextEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TextEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TextEdit::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TextEdit::Reset)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TextEdit *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject TextEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_TextEdit.data,
    qt_meta_data_TextEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TextEdit.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int TextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TextEdit::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SpinBox_t {
    QByteArrayData data[6];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SpinBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SpinBox_t qt_meta_stringdata_SpinBox = {
    {
QT_MOC_LITERAL(0, 0, 7), // "SpinBox"
QT_MOC_LITERAL(1, 8, 5), // "Reset"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 4), // "hint"
QT_MOC_LITERAL(4, 20, 16), // "has_clear_button"
QT_MOC_LITERAL(5, 37, 16) // "has_reset_button"

    },
    "SpinBox\0Reset\0\0hint\0has_clear_button\0"
    "has_reset_button"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SpinBox[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       3,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00095003,
       4, QMetaType::Bool, 0x00095003,
       5, QMetaType::Bool, 0x00095003,

       0        // eod
};

void SpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Reset(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SpinBox::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SpinBox::Reset)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->hint(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->has_clear_button(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->has_reset_button(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SpinBox *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->set_hint(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->set_clear_button(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->set_reset_button(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_SpinBox.data,
    qt_meta_data_SpinBox,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SpinBox.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ExtendedEditor"))
        return static_cast< ExtendedEditor*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SpinBox::Reset()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
