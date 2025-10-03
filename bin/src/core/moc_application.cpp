/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/core/application.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Application_t {
    QByteArrayData data[19];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Application_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Application_t qt_meta_stringdata_Application = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Application"
QT_MOC_LITERAL(1, 12, 10), // "ErrorAdded"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 7), // "message"
QT_MOC_LITERAL(4, 32, 15), // "SettingsChanged"
QT_MOC_LITERAL(5, 48, 12), // "SaveSettings"
QT_MOC_LITERAL(6, 61, 10), // "QSettings*"
QT_MOC_LITERAL(7, 72, 8), // "settings"
QT_MOC_LITERAL(8, 81, 23), // "SettingsDialogRequested"
QT_MOC_LITERAL(9, 105, 20), // "SettingsDialog::Page"
QT_MOC_LITERAL(10, 126, 4), // "page"
QT_MOC_LITERAL(11, 131, 15), // "NewDebugConsole"
QT_MOC_LITERAL(12, 147, 8), // "Console*"
QT_MOC_LITERAL(13, 156, 7), // "console"
QT_MOC_LITERAL(14, 164, 8), // "Starting"
QT_MOC_LITERAL(15, 173, 8), // "AddError"
QT_MOC_LITERAL(16, 182, 14), // "ReloadSettings"
QT_MOC_LITERAL(17, 197, 24), // "OpenSettingsDialogAtPage"
QT_MOC_LITERAL(18, 222, 13) // "SaveSettings_"

    },
    "Application\0ErrorAdded\0\0message\0"
    "SettingsChanged\0SaveSettings\0QSettings*\0"
    "settings\0SettingsDialogRequested\0"
    "SettingsDialog::Page\0page\0NewDebugConsole\0"
    "Console*\0console\0Starting\0AddError\0"
    "ReloadSettings\0OpenSettingsDialogAtPage\0"
    "SaveSettings_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Application[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    0,   67,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       8,    1,   71,    2, 0x06 /* Public */,
      11,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   77,    2, 0x0a /* Public */,
      15,    1,   78,    2, 0x0a /* Public */,
      16,    0,   81,    2, 0x0a /* Public */,
      17,    1,   82,    2, 0x0a /* Public */,
      18,    0,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ErrorAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SettingsChanged(); break;
        case 2: _t->SaveSettings((*reinterpret_cast< QSettings*(*)>(_a[1]))); break;
        case 3: _t->SettingsDialogRequested((*reinterpret_cast< SettingsDialog::Page(*)>(_a[1]))); break;
        case 4: _t->NewDebugConsole((*reinterpret_cast< Console*(*)>(_a[1]))); break;
        case 5: _t->Starting(); break;
        case 6: _t->AddError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->ReloadSettings(); break;
        case 8: _t->OpenSettingsDialogAtPage((*reinterpret_cast< SettingsDialog::Page(*)>(_a[1]))); break;
        case 9: _t->SaveSettings_(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Application::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::ErrorAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::SettingsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Application::*)(QSettings * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::SaveSettings)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Application::*)(SettingsDialog::Page );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::SettingsDialogRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Application::*)(Console * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Application::NewDebugConsole)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Application::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Application.data,
    qt_meta_data_Application,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Application.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void Application::ErrorAdded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Application::SettingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Application::SaveSettings(QSettings * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Application::SettingsDialogRequested(SettingsDialog::Page _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Application::NewDebugConsole(Console * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
