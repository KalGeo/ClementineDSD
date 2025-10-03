/****************************************************************************
** Meta object code from reading C++ file 'gstengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/engines/gstengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gstengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GstEngine_t {
    QByteArrayData data[58];
    char stringdata0[768];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GstEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GstEngine_t qt_meta_stringdata_GstEngine = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GstEngine"
QT_MOC_LITERAL(1, 10, 15), // "StartPreloading"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 20), // "MediaPlaybackRequest"
QT_MOC_LITERAL(4, 48, 3), // "req"
QT_MOC_LITERAL(5, 52, 17), // "force_stop_at_end"
QT_MOC_LITERAL(6, 70, 17), // "beginning_nanosec"
QT_MOC_LITERAL(7, 88, 11), // "end_nanosec"
QT_MOC_LITERAL(8, 100, 4), // "Load"
QT_MOC_LITERAL(9, 105, 24), // "Engine::TrackChangeFlags"
QT_MOC_LITERAL(10, 130, 6), // "change"
QT_MOC_LITERAL(11, 137, 4), // "Play"
QT_MOC_LITERAL(12, 142, 14), // "offset_nanosec"
QT_MOC_LITERAL(13, 157, 4), // "Stop"
QT_MOC_LITERAL(14, 162, 10), // "stop_after"
QT_MOC_LITERAL(15, 173, 5), // "Pause"
QT_MOC_LITERAL(16, 179, 7), // "Unpause"
QT_MOC_LITERAL(17, 187, 4), // "Seek"
QT_MOC_LITERAL(18, 192, 19), // "SetEqualizerEnabled"
QT_MOC_LITERAL(19, 212, 22), // "SetEqualizerParameters"
QT_MOC_LITERAL(20, 235, 6), // "preamp"
QT_MOC_LITERAL(21, 242, 10), // "QList<int>"
QT_MOC_LITERAL(22, 253, 9), // "bandGains"
QT_MOC_LITERAL(23, 263, 16), // "SetStereoBalance"
QT_MOC_LITERAL(24, 280, 5), // "value"
QT_MOC_LITERAL(25, 286, 14), // "ReloadSettings"
QT_MOC_LITERAL(26, 301, 17), // "AddBufferConsumer"
QT_MOC_LITERAL(27, 319, 15), // "BufferConsumer*"
QT_MOC_LITERAL(28, 335, 8), // "consumer"
QT_MOC_LITERAL(29, 344, 20), // "RemoveBufferConsumer"
QT_MOC_LITERAL(30, 365, 15), // "NewDebugConsole"
QT_MOC_LITERAL(31, 381, 8), // "Console*"
QT_MOC_LITERAL(32, 390, 7), // "console"
QT_MOC_LITERAL(33, 398, 18), // "EndOfStreamReached"
QT_MOC_LITERAL(34, 417, 11), // "pipeline_id"
QT_MOC_LITERAL(35, 429, 14), // "has_next_track"
QT_MOC_LITERAL(36, 444, 19), // "HandlePipelineError"
QT_MOC_LITERAL(37, 464, 7), // "message"
QT_MOC_LITERAL(38, 472, 6), // "domain"
QT_MOC_LITERAL(39, 479, 10), // "error_code"
QT_MOC_LITERAL(40, 490, 11), // "NewMetaData"
QT_MOC_LITERAL(41, 502, 24), // "Engine::SimpleMetaBundle"
QT_MOC_LITERAL(42, 527, 6), // "bundle"
QT_MOC_LITERAL(43, 534, 16), // "AddBufferToScope"
QT_MOC_LITERAL(44, 551, 10), // "GstBuffer*"
QT_MOC_LITERAL(45, 562, 3), // "buf"
QT_MOC_LITERAL(46, 566, 15), // "FadeoutFinished"
QT_MOC_LITERAL(47, 582, 20), // "FadeoutPauseFinished"
QT_MOC_LITERAL(48, 603, 7), // "SeekNow"
QT_MOC_LITERAL(49, 611, 24), // "BackgroundStreamFinished"
QT_MOC_LITERAL(50, 636, 24), // "BackgroundStreamPlayDone"
QT_MOC_LITERAL(51, 661, 29), // "QFuture<GstStateChangeReturn>"
QT_MOC_LITERAL(52, 691, 8), // "PlayDone"
QT_MOC_LITERAL(53, 700, 6), // "future"
QT_MOC_LITERAL(54, 707, 16), // "BufferingStarted"
QT_MOC_LITERAL(55, 724, 17), // "BufferingProgress"
QT_MOC_LITERAL(56, 742, 7), // "percent"
QT_MOC_LITERAL(57, 750, 17) // "BufferingFinished"

    },
    "GstEngine\0StartPreloading\0\0"
    "MediaPlaybackRequest\0req\0force_stop_at_end\0"
    "beginning_nanosec\0end_nanosec\0Load\0"
    "Engine::TrackChangeFlags\0change\0Play\0"
    "offset_nanosec\0Stop\0stop_after\0Pause\0"
    "Unpause\0Seek\0SetEqualizerEnabled\0"
    "SetEqualizerParameters\0preamp\0QList<int>\0"
    "bandGains\0SetStereoBalance\0value\0"
    "ReloadSettings\0AddBufferConsumer\0"
    "BufferConsumer*\0consumer\0RemoveBufferConsumer\0"
    "NewDebugConsole\0Console*\0console\0"
    "EndOfStreamReached\0pipeline_id\0"
    "has_next_track\0HandlePipelineError\0"
    "message\0domain\0error_code\0NewMetaData\0"
    "Engine::SimpleMetaBundle\0bundle\0"
    "AddBufferToScope\0GstBuffer*\0buf\0"
    "FadeoutFinished\0FadeoutPauseFinished\0"
    "SeekNow\0BackgroundStreamFinished\0"
    "BackgroundStreamPlayDone\0"
    "QFuture<GstStateChangeReturn>\0PlayDone\0"
    "future\0BufferingStarted\0BufferingProgress\0"
    "percent\0BufferingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GstEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,  154,    2, 0x0a /* Public */,
       8,    5,  163,    2, 0x0a /* Public */,
      11,    1,  174,    2, 0x0a /* Public */,
      13,    1,  177,    2, 0x0a /* Public */,
      13,    0,  180,    2, 0x2a /* Public | MethodCloned */,
      15,    0,  181,    2, 0x0a /* Public */,
      16,    0,  182,    2, 0x0a /* Public */,
      17,    1,  183,    2, 0x0a /* Public */,
      18,    1,  186,    2, 0x0a /* Public */,
      19,    2,  189,    2, 0x0a /* Public */,
      23,    1,  194,    2, 0x0a /* Public */,
      25,    0,  197,    2, 0x0a /* Public */,
      26,    1,  198,    2, 0x0a /* Public */,
      29,    1,  201,    2, 0x0a /* Public */,
      30,    1,  204,    2, 0x0a /* Public */,
      33,    2,  207,    2, 0x08 /* Private */,
      36,    4,  212,    2, 0x08 /* Private */,
      40,    2,  221,    2, 0x08 /* Private */,
      43,    2,  226,    2, 0x08 /* Private */,
      46,    0,  231,    2, 0x08 /* Private */,
      47,    0,  232,    2, 0x08 /* Private */,
      48,    0,  233,    2, 0x08 /* Private */,
      49,    0,  234,    2, 0x08 /* Private */,
      50,    2,  235,    2, 0x08 /* Private */,
      52,    3,  240,    2, 0x08 /* Private */,
      54,    0,  247,    2, 0x08 /* Private */,
      55,    1,  248,    2, 0x08 /* Private */,
      57,    0,  251,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, QMetaType::LongLong, QMetaType::LongLong,    4,    5,    6,    7,
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 9, QMetaType::Bool, QMetaType::ULongLong, QMetaType::LongLong,    2,   10,    5,    6,    7,
    QMetaType::Bool, QMetaType::ULongLong,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::ULongLong,   12,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 21,   20,   22,
    QMetaType::Void, QMetaType::Float,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   34,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Int, QMetaType::Int,   34,   37,   38,   39,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 41,   34,   42,
    QMetaType::Void, 0x80000000 | 44, QMetaType::Int,   45,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 51, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 51, QMetaType::ULongLong, QMetaType::Int,   53,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   56,
    QMetaType::Void,

       0        // eod
};

void GstEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GstEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StartPreloading((*reinterpret_cast< const MediaPlaybackRequest(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 1: { bool _r = _t->Load((*reinterpret_cast< const MediaPlaybackRequest(*)>(_a[1])),(*reinterpret_cast< Engine::TrackChangeFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< quint64(*)>(_a[4])),(*reinterpret_cast< qint64(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->Play((*reinterpret_cast< quint64(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->Stop((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->Stop(); break;
        case 5: _t->Pause(); break;
        case 6: _t->Unpause(); break;
        case 7: _t->Seek((*reinterpret_cast< quint64(*)>(_a[1]))); break;
        case 8: _t->SetEqualizerEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->SetEqualizerParameters((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QList<int>(*)>(_a[2]))); break;
        case 10: _t->SetStereoBalance((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->ReloadSettings(); break;
        case 12: _t->AddBufferConsumer((*reinterpret_cast< BufferConsumer*(*)>(_a[1]))); break;
        case 13: _t->RemoveBufferConsumer((*reinterpret_cast< BufferConsumer*(*)>(_a[1]))); break;
        case 14: _t->NewDebugConsole((*reinterpret_cast< Console*(*)>(_a[1]))); break;
        case 15: _t->EndOfStreamReached((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->HandlePipelineError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 17: _t->NewMetaData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Engine::SimpleMetaBundle(*)>(_a[2]))); break;
        case 18: _t->AddBufferToScope((*reinterpret_cast< GstBuffer*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->FadeoutFinished(); break;
        case 20: _t->FadeoutPauseFinished(); break;
        case 21: _t->SeekNow(); break;
        case 22: _t->BackgroundStreamFinished(); break;
        case 23: _t->BackgroundStreamPlayDone((*reinterpret_cast< QFuture<GstStateChangeReturn>(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->PlayDone((*reinterpret_cast< QFuture<GstStateChangeReturn>(*)>(_a[1])),(*reinterpret_cast< const quint64(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 25: _t->BufferingStarted(); break;
        case 26: _t->BufferingProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->BufferingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GstEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<Engine::Base::staticMetaObject>(),
    qt_meta_stringdata_GstEngine.data,
    qt_meta_data_GstEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GstEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GstEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GstEngine.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BufferConsumer"))
        return static_cast< BufferConsumer*>(this);
    return Engine::Base::qt_metacast(_clname);
}

int GstEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Engine::Base::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
