/****************************************************************************
** Meta object code from reading C++ file 'avahientrygroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "avahientrygroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'avahientrygroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrgFreedesktopAvahiEntryGroupInterface_t {
    QByteArrayData data[32];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrgFreedesktopAvahiEntryGroupInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrgFreedesktopAvahiEntryGroupInterface_t qt_meta_stringdata_OrgFreedesktopAvahiEntryGroupInterface = {
    {
QT_MOC_LITERAL(0, 0, 38), // "OrgFreedesktopAvahiEntryGroup..."
QT_MOC_LITERAL(1, 39, 12), // "StateChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 5), // "state"
QT_MOC_LITERAL(4, 59, 5), // "error"
QT_MOC_LITERAL(5, 65, 10), // "AddAddress"
QT_MOC_LITERAL(6, 76, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(7, 96, 9), // "interface"
QT_MOC_LITERAL(8, 106, 8), // "protocol"
QT_MOC_LITERAL(9, 115, 5), // "flags"
QT_MOC_LITERAL(10, 121, 4), // "name"
QT_MOC_LITERAL(11, 126, 7), // "address"
QT_MOC_LITERAL(12, 134, 9), // "AddRecord"
QT_MOC_LITERAL(13, 144, 5), // "clazz"
QT_MOC_LITERAL(14, 150, 4), // "type"
QT_MOC_LITERAL(15, 155, 3), // "ttl"
QT_MOC_LITERAL(16, 159, 5), // "rdata"
QT_MOC_LITERAL(17, 165, 10), // "AddService"
QT_MOC_LITERAL(18, 176, 6), // "domain"
QT_MOC_LITERAL(19, 183, 4), // "host"
QT_MOC_LITERAL(20, 188, 4), // "port"
QT_MOC_LITERAL(21, 193, 3), // "txt"
QT_MOC_LITERAL(22, 197, 17), // "AddServiceSubtype"
QT_MOC_LITERAL(23, 215, 7), // "subtype"
QT_MOC_LITERAL(24, 223, 6), // "Commit"
QT_MOC_LITERAL(25, 230, 4), // "Free"
QT_MOC_LITERAL(26, 235, 8), // "GetState"
QT_MOC_LITERAL(27, 244, 22), // "QDBusPendingReply<int>"
QT_MOC_LITERAL(28, 267, 7), // "IsEmpty"
QT_MOC_LITERAL(29, 275, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(30, 299, 5), // "Reset"
QT_MOC_LITERAL(31, 305, 16) // "UpdateServiceTxt"

    },
    "OrgFreedesktopAvahiEntryGroupInterface\0"
    "StateChanged\0\0state\0error\0AddAddress\0"
    "QDBusPendingReply<>\0interface\0protocol\0"
    "flags\0name\0address\0AddRecord\0clazz\0"
    "type\0ttl\0rdata\0AddService\0domain\0host\0"
    "port\0txt\0AddServiceSubtype\0subtype\0"
    "Commit\0Free\0GetState\0QDBusPendingReply<int>\0"
    "IsEmpty\0QDBusPendingReply<bool>\0Reset\0"
    "UpdateServiceTxt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrgFreedesktopAvahiEntryGroupInterface[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    5,   74,    2, 0x0a /* Public */,
      12,    8,   85,    2, 0x0a /* Public */,
      17,    9,  102,    2, 0x0a /* Public */,
      22,    7,  121,    2, 0x0a /* Public */,
      24,    0,  136,    2, 0x0a /* Public */,
      25,    0,  137,    2, 0x0a /* Public */,
      26,    0,  138,    2, 0x0a /* Public */,
      28,    0,  139,    2, 0x0a /* Public */,
      30,    0,  140,    2, 0x0a /* Public */,
      31,    7,  141,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,

 // slots: parameters
    0x80000000 | 6, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,
    0x80000000 | 6, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::QString, QMetaType::UShort, QMetaType::UShort, QMetaType::UInt, QMetaType::QByteArray,    7,    8,    9,   10,   13,   14,   15,   16,
    0x80000000 | 6, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::UShort, QMetaType::QByteArrayList,    7,    8,    9,   10,   14,   18,   19,   20,   21,
    0x80000000 | 6, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   14,   18,   23,
    0x80000000 | 6,
    0x80000000 | 6,
    0x80000000 | 27,
    0x80000000 | 29,
    0x80000000 | 6,
    0x80000000 | 6, QMetaType::Int, QMetaType::Int, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QByteArrayList,    7,    8,    9,   10,   14,   18,   21,

       0        // eod
};

void OrgFreedesktopAvahiEntryGroupInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrgFreedesktopAvahiEntryGroupInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->StateChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: { QDBusPendingReply<> _r = _t->AddAddress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 2: { QDBusPendingReply<> _r = _t->AddRecord((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< ushort(*)>(_a[5])),(*reinterpret_cast< ushort(*)>(_a[6])),(*reinterpret_cast< uint(*)>(_a[7])),(*reinterpret_cast< const QByteArray(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 3: { QDBusPendingReply<> _r = _t->AddService((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< ushort(*)>(_a[8])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[9])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 4: { QDBusPendingReply<> _r = _t->AddServiceSubtype((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 5: { QDBusPendingReply<> _r = _t->Commit();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 6: { QDBusPendingReply<> _r = _t->Free();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 7: { QDBusPendingReply<int> _r = _t->GetState();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<int>*>(_a[0]) = std::move(_r); }  break;
        case 8: { QDBusPendingReply<bool> _r = _t->IsEmpty();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = std::move(_r); }  break;
        case 9: { QDBusPendingReply<> _r = _t->Reset();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        case 10: { QDBusPendingReply<> _r = _t->UpdateServiceTxt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QString(*)>(_a[6])),(*reinterpret_cast< const QList<QByteArray>(*)>(_a[7])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrgFreedesktopAvahiEntryGroupInterface::*)(int , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrgFreedesktopAvahiEntryGroupInterface::StateChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrgFreedesktopAvahiEntryGroupInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QDBusAbstractInterface::staticMetaObject>(),
    qt_meta_stringdata_OrgFreedesktopAvahiEntryGroupInterface.data,
    qt_meta_data_OrgFreedesktopAvahiEntryGroupInterface,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrgFreedesktopAvahiEntryGroupInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrgFreedesktopAvahiEntryGroupInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrgFreedesktopAvahiEntryGroupInterface.stringdata0))
        return static_cast<void*>(this);
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int OrgFreedesktopAvahiEntryGroupInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OrgFreedesktopAvahiEntryGroupInterface::StateChanged(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
