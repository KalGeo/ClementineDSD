/****************************************************************************
** Meta object code from reading C++ file 'gstenginepipeline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/engines/gstenginepipeline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gstenginepipeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GstEnginePipeline_t {
    QByteArrayData data[22];
    char stringdata0[275];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GstEnginePipeline_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GstEnginePipeline_t qt_meta_stringdata_GstEnginePipeline = {
    {
QT_MOC_LITERAL(0, 0, 17), // "GstEnginePipeline"
QT_MOC_LITERAL(1, 18, 18), // "EndOfStreamReached"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 11), // "pipeline_id"
QT_MOC_LITERAL(4, 50, 14), // "has_next_track"
QT_MOC_LITERAL(5, 65, 13), // "MetadataFound"
QT_MOC_LITERAL(6, 79, 24), // "Engine::SimpleMetaBundle"
QT_MOC_LITERAL(7, 104, 6), // "bundle"
QT_MOC_LITERAL(8, 111, 5), // "Error"
QT_MOC_LITERAL(9, 117, 7), // "message"
QT_MOC_LITERAL(10, 125, 6), // "domain"
QT_MOC_LITERAL(11, 132, 10), // "error_code"
QT_MOC_LITERAL(12, 143, 13), // "FaderFinished"
QT_MOC_LITERAL(13, 157, 16), // "BufferingStarted"
QT_MOC_LITERAL(14, 174, 17), // "BufferingProgress"
QT_MOC_LITERAL(15, 192, 7), // "percent"
QT_MOC_LITERAL(16, 200, 17), // "BufferingFinished"
QT_MOC_LITERAL(17, 218, 17), // "SetVolumeModifier"
QT_MOC_LITERAL(18, 236, 3), // "mod"
QT_MOC_LITERAL(19, 240, 21), // "FaderTimelineFinished"
QT_MOC_LITERAL(20, 262, 4), // "Seek"
QT_MOC_LITERAL(21, 267, 7) // "nanosec"

    },
    "GstEnginePipeline\0EndOfStreamReached\0"
    "\0pipeline_id\0has_next_track\0MetadataFound\0"
    "Engine::SimpleMetaBundle\0bundle\0Error\0"
    "message\0domain\0error_code\0FaderFinished\0"
    "BufferingStarted\0BufferingProgress\0"
    "percent\0BufferingFinished\0SetVolumeModifier\0"
    "mod\0FaderTimelineFinished\0Seek\0nanosec"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GstEnginePipeline[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       5,    2,   69,    2, 0x06 /* Public */,
       8,    4,   74,    2, 0x06 /* Public */,
      12,    0,   83,    2, 0x06 /* Public */,
      13,    0,   84,    2, 0x06 /* Public */,
      14,    1,   85,    2, 0x06 /* Public */,
      16,    0,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   89,    2, 0x0a /* Public */,
      19,    0,   92,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      20,    1,   93,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int,    3,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,   18,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::LongLong,   21,

       0        // eod
};

void GstEnginePipeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GstEnginePipeline *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->EndOfStreamReached((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->MetadataFound((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[2]))); break;
        case 2: _t->Error((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->FaderFinished(); break;
        case 4: _t->BufferingStarted(); break;
        case 5: _t->BufferingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->BufferingFinished(); break;
        case 7: _t->SetVolumeModifier((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->FaderTimelineFinished(); break;
        case 9: { bool _r = _t->Seek((*reinterpret_cast< qint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GstEnginePipeline::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::EndOfStreamReached)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GstEnginePipeline::*)(int , const Engine::SimpleMetaBundle & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::MetadataFound)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GstEnginePipeline::*)(int , const QString & , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::Error)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GstEnginePipeline::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::FaderFinished)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GstEnginePipeline::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::BufferingStarted)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GstEnginePipeline::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::BufferingProgress)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GstEnginePipeline::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GstEnginePipeline::BufferingFinished)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GstEnginePipeline::staticMetaObject = { {
    QMetaObject::SuperData::link<GstPipelineBase::staticMetaObject>(),
    qt_meta_stringdata_GstEnginePipeline.data,
    qt_meta_data_GstEnginePipeline,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GstEnginePipeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GstEnginePipeline::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GstEnginePipeline.stringdata0))
        return static_cast<void*>(this);
    return GstPipelineBase::qt_metacast(_clname);
}

int GstEnginePipeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GstPipelineBase::qt_metacall(_c, _id, _a);
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
void GstEnginePipeline::EndOfStreamReached(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GstEnginePipeline::MetadataFound(int _t1, const Engine::SimpleMetaBundle & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GstEnginePipeline::Error(int _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GstEnginePipeline::FaderFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GstEnginePipeline::BufferingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GstEnginePipeline::BufferingProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GstEnginePipeline::BufferingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
