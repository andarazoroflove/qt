/****************************************************************************
** Meta object code from reading C++ file 'qlocalserver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../socket/qlocalserver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlocalserver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLocalServer_t {
    QByteArrayData data[12];
    char stringdata[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLocalServer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLocalServer_t qt_meta_stringdata_QLocalServer = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 13),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 18),
QT_MOC_LITERAL(4, 47, 13),
QT_MOC_LITERAL(5, 61, 13),
QT_MOC_LITERAL(6, 75, 12),
QT_MOC_LITERAL(7, 88, 9),
QT_MOC_LITERAL(8, 98, 16),
QT_MOC_LITERAL(9, 115, 17),
QT_MOC_LITERAL(10, 133, 17),
QT_MOC_LITERAL(11, 151, 17)
    },
    "QLocalServer\0newConnection\0\0"
    "_q_onNewConnection\0socketOptions\0"
    "SocketOptions\0SocketOption\0NoOptions\0"
    "UserAccessOption\0GroupAccessOption\0"
    "OtherAccessOption\0WorldAccessOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLocalServer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   26, // properties
       2,   29, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0009510b,

 // enums: name, flags, count, data
       6, 0x1,    5,   37,
       5, 0x1,    5,   47,

 // enum data: key, value
       7, uint(QLocalServer::NoOptions),
       8, uint(QLocalServer::UserAccessOption),
       9, uint(QLocalServer::GroupAccessOption),
      10, uint(QLocalServer::OtherAccessOption),
      11, uint(QLocalServer::WorldAccessOption),
       7, uint(QLocalServer::NoOptions),
       8, uint(QLocalServer::UserAccessOption),
       9, uint(QLocalServer::GroupAccessOption),
      10, uint(QLocalServer::OtherAccessOption),
      11, uint(QLocalServer::WorldAccessOption),

       0        // eod
};

void QLocalServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLocalServer *_t = static_cast<QLocalServer *>(_o);
        switch (_id) {
        case 0: _t->newConnection(); break;
        case 1: _t->d_func()->_q_onNewConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLocalServer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLocalServer::newConnection)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QLocalServer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLocalServer.data,
      qt_meta_data_QLocalServer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QLocalServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLocalServer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLocalServer.stringdata))
        return static_cast<void*>(const_cast< QLocalServer*>(this));
    return QObject::qt_metacast(_clname);
}

int QLocalServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(socketOptions()); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSocketOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QLocalServer::newConnection()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
