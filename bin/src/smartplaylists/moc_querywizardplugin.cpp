/****************************************************************************
** Meta object code from reading C++ file 'querywizardplugin.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/smartplaylists/querywizardplugin.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querywizardplugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_smart_playlists__QueryWizardPlugin_t {
    QByteArrayData data[11];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_smart_playlists__QueryWizardPlugin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_smart_playlists__QueryWizardPlugin_t qt_meta_stringdata_smart_playlists__QueryWizardPlugin = {
    {
QT_MOC_LITERAL(0, 0, 34), // "smart_playlists::QueryWizardP..."
QT_MOC_LITERAL(1, 35, 13), // "AddSearchTerm"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 16), // "RemoveSearchTerm"
QT_MOC_LITERAL(4, 67, 17), // "SearchTypeChanged"
QT_MOC_LITERAL(5, 85, 17), // "UpdateTermPreview"
QT_MOC_LITERAL(6, 103, 17), // "UpdateSortPreview"
QT_MOC_LITERAL(7, 121, 15), // "UpdateSortOrder"
QT_MOC_LITERAL(8, 137, 20), // "MoveTermListToBottom"
QT_MOC_LITERAL(9, 158, 3), // "min"
QT_MOC_LITERAL(10, 162, 3) // "max"

    },
    "smart_playlists::QueryWizardPlugin\0"
    "AddSearchTerm\0\0RemoveSearchTerm\0"
    "SearchTypeChanged\0UpdateTermPreview\0"
    "UpdateSortPreview\0UpdateSortOrder\0"
    "MoveTermListToBottom\0min\0max"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_smart_playlists__QueryWizardPlugin[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    2,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

       0        // eod
};

void smart_playlists::QueryWizardPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QueryWizardPlugin *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->AddSearchTerm(); break;
        case 1: _t->RemoveSearchTerm(); break;
        case 2: _t->SearchTypeChanged(); break;
        case 3: _t->UpdateTermPreview(); break;
        case 4: _t->UpdateSortPreview(); break;
        case 5: _t->UpdateSortOrder(); break;
        case 6: _t->MoveTermListToBottom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject smart_playlists::QueryWizardPlugin::staticMetaObject = { {
    QMetaObject::SuperData::link<WizardPlugin::staticMetaObject>(),
    qt_meta_stringdata_smart_playlists__QueryWizardPlugin.data,
    qt_meta_data_smart_playlists__QueryWizardPlugin,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *smart_playlists::QueryWizardPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *smart_playlists::QueryWizardPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_smart_playlists__QueryWizardPlugin.stringdata0))
        return static_cast<void*>(this);
    return WizardPlugin::qt_metacast(_clname);
}

int smart_playlists::QueryWizardPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizardPlugin::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
