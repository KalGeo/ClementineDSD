/****************************************************************************
** Meta object code from reading C++ file 'loginstatewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/widgets/loginstatewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginstatewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginStateWidget_t {
    QByteArrayData data[17];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginStateWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginStateWidget_t qt_meta_stringdata_LoginStateWidget = {
    {
QT_MOC_LITERAL(0, 0, 16), // "LoginStateWidget"
QT_MOC_LITERAL(1, 17, 13), // "LogoutClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "LoginClicked"
QT_MOC_LITERAL(4, 45, 11), // "SetLoggedIn"
QT_MOC_LITERAL(5, 57, 5), // "State"
QT_MOC_LITERAL(6, 63, 5), // "state"
QT_MOC_LITERAL(7, 69, 12), // "account_name"
QT_MOC_LITERAL(8, 82, 17), // "HideLoggedInState"
QT_MOC_LITERAL(9, 100, 18), // "SetAccountTypeText"
QT_MOC_LITERAL(10, 119, 4), // "text"
QT_MOC_LITERAL(11, 124, 21), // "SetAccountTypeVisible"
QT_MOC_LITERAL(12, 146, 7), // "visible"
QT_MOC_LITERAL(13, 154, 10), // "SetExpires"
QT_MOC_LITERAL(14, 165, 7), // "expires"
QT_MOC_LITERAL(15, 173, 6), // "Logout"
QT_MOC_LITERAL(16, 180, 24) // "FocusLastCredentialField"

    },
    "LoginStateWidget\0LogoutClicked\0\0"
    "LoginClicked\0SetLoggedIn\0State\0state\0"
    "account_name\0HideLoggedInState\0"
    "SetAccountTypeText\0text\0SetAccountTypeVisible\0"
    "visible\0SetExpires\0expires\0Logout\0"
    "FocusLastCredentialField"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginStateWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   66,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   74,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,
      11,    1,   78,    2, 0x0a /* Public */,
      13,    1,   81,    2, 0x0a /* Public */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QDate,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginStateWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginStateWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->LogoutClicked(); break;
        case 1: _t->LoginClicked(); break;
        case 2: _t->SetLoggedIn((*reinterpret_cast< State(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->SetLoggedIn((*reinterpret_cast< State(*)>(_a[1]))); break;
        case 4: _t->HideLoggedInState(); break;
        case 5: _t->SetAccountTypeText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SetAccountTypeVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SetExpires((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 8: _t->Logout(); break;
        case 9: _t->FocusLastCredentialField(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginStateWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginStateWidget::LogoutClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoginStateWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginStateWidget::LoginClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginStateWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LoginStateWidget.data,
    qt_meta_data_LoginStateWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginStateWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginStateWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginStateWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginStateWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LoginStateWidget::LogoutClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginStateWidget::LoginClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
