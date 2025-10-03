/****************************************************************************
** Meta object code from reading C++ file 'visualisationcontainer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/visualisations/visualisationcontainer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visualisationcontainer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VisualisationContainer_t {
    QByteArrayData data[15];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisualisationContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisualisationContainer_t qt_meta_stringdata_VisualisationContainer = {
    {
QT_MOC_LITERAL(0, 0, 22), // "VisualisationContainer"
QT_MOC_LITERAL(1, 23, 19), // "SongMetadataChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4), // "Song"
QT_MOC_LITERAL(4, 49, 8), // "metadata"
QT_MOC_LITERAL(5, 58, 7), // "Stopped"
QT_MOC_LITERAL(6, 66, 20), // "ChangeOverlayOpacity"
QT_MOC_LITERAL(7, 87, 5), // "value"
QT_MOC_LITERAL(8, 93, 13), // "ShowPopupMenu"
QT_MOC_LITERAL(9, 107, 3), // "pos"
QT_MOC_LITERAL(10, 111, 16), // "ToggleFullscreen"
QT_MOC_LITERAL(11, 128, 6), // "SetFps"
QT_MOC_LITERAL(12, 135, 3), // "fps"
QT_MOC_LITERAL(13, 139, 10), // "SetQuality"
QT_MOC_LITERAL(14, 150, 4) // "size"

    },
    "VisualisationContainer\0SongMetadataChanged\0"
    "\0Song\0metadata\0Stopped\0ChangeOverlayOpacity\0"
    "value\0ShowPopupMenu\0pos\0ToggleFullscreen\0"
    "SetFps\0fps\0SetQuality\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisualisationContainer[] = {

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
       1,    1,   49,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x08 /* Private */,
       8,    1,   56,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,
      11,    1,   60,    2, 0x08 /* Private */,
      13,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QPoint,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void VisualisationContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VisualisationContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SongMetadataChanged((*reinterpret_cast< const Song(*)>(_a[1]))); break;
        case 1: _t->Stopped(); break;
        case 2: _t->ChangeOverlayOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->ShowPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->ToggleFullscreen(); break;
        case 5: _t->SetFps((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->SetQuality((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Song >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VisualisationContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_VisualisationContainer.data,
    qt_meta_data_VisualisationContainer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VisualisationContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisualisationContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VisualisationContainer.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int VisualisationContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
