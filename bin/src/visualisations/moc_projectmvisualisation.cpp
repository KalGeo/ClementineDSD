/****************************************************************************
** Meta object code from reading C++ file 'projectmvisualisation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/visualisations/projectmvisualisation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'projectmvisualisation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProjectMVisualisation_t {
    QByteArrayData data[19];
    char stringdata0[178];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProjectMVisualisation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProjectMVisualisation_t qt_meta_stringdata_ProjectMVisualisation = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ProjectMVisualisation"
QT_MOC_LITERAL(1, 22, 14), // "SetTextureSize"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "size"
QT_MOC_LITERAL(4, 43, 11), // "SetDuration"
QT_MOC_LITERAL(5, 55, 7), // "seconds"
QT_MOC_LITERAL(6, 63, 11), // "SetSelected"
QT_MOC_LITERAL(7, 75, 5), // "paths"
QT_MOC_LITERAL(8, 81, 8), // "selected"
QT_MOC_LITERAL(9, 90, 13), // "ClearSelected"
QT_MOC_LITERAL(10, 104, 18), // "SetImmediatePreset"
QT_MOC_LITERAL(11, 123, 4), // "path"
QT_MOC_LITERAL(12, 128, 7), // "SetMode"
QT_MOC_LITERAL(13, 136, 4), // "Mode"
QT_MOC_LITERAL(14, 141, 4), // "mode"
QT_MOC_LITERAL(15, 146, 4), // "Lock"
QT_MOC_LITERAL(16, 151, 4), // "lock"
QT_MOC_LITERAL(17, 156, 16), // "SceneRectChanged"
QT_MOC_LITERAL(18, 173, 4) // "rect"

    },
    "ProjectMVisualisation\0SetTextureSize\0"
    "\0size\0SetDuration\0seconds\0SetSelected\0"
    "paths\0selected\0ClearSelected\0"
    "SetImmediatePreset\0path\0SetMode\0Mode\0"
    "mode\0Lock\0lock\0SceneRectChanged\0rect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProjectMVisualisation[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    2,   60,    2, 0x0a /* Public */,
       9,    0,   65,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      15,    1,   72,    2, 0x0a /* Public */,
      17,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QStringList, QMetaType::Bool,    7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QRectF,   18,

       0        // eod
};

void ProjectMVisualisation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProjectMVisualisation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SetTextureSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SetDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->SetSelected((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->ClearSelected(); break;
        case 4: _t->SetImmediatePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SetMode((*reinterpret_cast< Mode(*)>(_a[1]))); break;
        case 6: _t->Lock((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->SceneRectChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProjectMVisualisation::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_ProjectMVisualisation.data,
    qt_meta_data_ProjectMVisualisation,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProjectMVisualisation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProjectMVisualisation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProjectMVisualisation.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BufferConsumer"))
        return static_cast< BufferConsumer*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int ProjectMVisualisation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
