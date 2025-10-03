/****************************************************************************
** Meta object code from reading C++ file 'notificationssettingspage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/ui/notificationssettingspage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notificationssettingspage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NotificationsSettingsPage_t {
    QByteArrayData data[21];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NotificationsSettingsPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NotificationsSettingsPage_t qt_meta_stringdata_NotificationsSettingsPage = {
    {
QT_MOC_LITERAL(0, 0, 25), // "NotificationsSettingsPage"
QT_MOC_LITERAL(1, 26, 19), // "NotificationPreview"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 14), // "OSD::Behaviour"
QT_MOC_LITERAL(4, 62, 23), // "NotificationTypeChanged"
QT_MOC_LITERAL(5, 86, 29), // "NotificationCustomTextChanged"
QT_MOC_LITERAL(6, 116, 7), // "enabled"
QT_MOC_LITERAL(7, 124, 26), // "PrepareNotificationPreview"
QT_MOC_LITERAL(8, 151, 23), // "InsertVariableFirstLine"
QT_MOC_LITERAL(9, 175, 8), // "QAction*"
QT_MOC_LITERAL(10, 184, 6), // "action"
QT_MOC_LITERAL(11, 191, 24), // "InsertVariableSecondLine"
QT_MOC_LITERAL(12, 216, 15), // "ShowMenuTooltip"
QT_MOC_LITERAL(13, 232, 20), // "PrettyOpacityChanged"
QT_MOC_LITERAL(14, 253, 5), // "value"
QT_MOC_LITERAL(15, 259, 24), // "PrettyColorPresetChanged"
QT_MOC_LITERAL(16, 284, 5), // "index"
QT_MOC_LITERAL(17, 290, 13), // "ChooseBgColor"
QT_MOC_LITERAL(18, 304, 13), // "ChooseFgColor"
QT_MOC_LITERAL(19, 318, 10), // "ChooseFont"
QT_MOC_LITERAL(20, 329, 18) // "UpdatePopupVisible"

    },
    "NotificationsSettingsPage\0NotificationPreview\0"
    "\0OSD::Behaviour\0NotificationTypeChanged\0"
    "NotificationCustomTextChanged\0enabled\0"
    "PrepareNotificationPreview\0"
    "InsertVariableFirstLine\0QAction*\0"
    "action\0InsertVariableSecondLine\0"
    "ShowMenuTooltip\0PrettyOpacityChanged\0"
    "value\0PrettyColorPresetChanged\0index\0"
    "ChooseBgColor\0ChooseFgColor\0ChooseFont\0"
    "UpdatePopupVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NotificationsSettingsPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    1,   91,    2, 0x08 /* Private */,
      11,    1,   94,    2, 0x08 /* Private */,
      12,    1,   97,    2, 0x08 /* Private */,
      13,    1,  100,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      17,    0,  106,    2, 0x08 /* Private */,
      18,    0,  107,    2, 0x08 /* Private */,
      19,    0,  108,    2, 0x08 /* Private */,
      20,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NotificationsSettingsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NotificationsSettingsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->NotificationPreview((*reinterpret_cast< OSD::Behaviour(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->NotificationTypeChanged(); break;
        case 2: _t->NotificationCustomTextChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->PrepareNotificationPreview(); break;
        case 4: _t->InsertVariableFirstLine((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 5: _t->InsertVariableSecondLine((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: _t->ShowMenuTooltip((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 7: _t->PrettyOpacityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->PrettyColorPresetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->ChooseBgColor(); break;
        case 10: _t->ChooseFgColor(); break;
        case 11: _t->ChooseFont(); break;
        case 12: _t->UpdatePopupVisible(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NotificationsSettingsPage::*)(OSD::Behaviour , QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NotificationsSettingsPage::NotificationPreview)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NotificationsSettingsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsPage::staticMetaObject>(),
    qt_meta_stringdata_NotificationsSettingsPage.data,
    qt_meta_data_NotificationsSettingsPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NotificationsSettingsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NotificationsSettingsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NotificationsSettingsPage.stringdata0))
        return static_cast<void*>(this);
    return SettingsPage::qt_metacast(_clname);
}

int NotificationsSettingsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void NotificationsSettingsPage::NotificationPreview(OSD::Behaviour _t1, QString _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
