/****************************************************************************
** Meta object code from reading C++ file 'qnetworksession_impl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qnetworksession_impl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworksession_impl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkSessionPrivateImpl_t {
    QByteArrayData data[13];
    char stringdata[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkSessionPrivateImpl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkSessionPrivateImpl_t qt_meta_stringdata_QNetworkSessionPrivateImpl = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 28),
QT_MOC_LITERAL(2, 56, 0),
QT_MOC_LITERAL(3, 57, 20),
QT_MOC_LITERAL(4, 78, 35),
QT_MOC_LITERAL(5, 114, 6),
QT_MOC_LITERAL(6, 121, 18),
QT_MOC_LITERAL(7, 140, 21),
QT_MOC_LITERAL(8, 162, 15),
QT_MOC_LITERAL(9, 178, 2),
QT_MOC_LITERAL(10, 181, 34),
QT_MOC_LITERAL(11, 216, 5),
QT_MOC_LITERAL(12, 222, 16)
    },
    "QNetworkSessionPrivateImpl\0"
    "networkConfigurationsChanged\0\0"
    "configurationChanged\0"
    "QNetworkConfigurationPrivatePointer\0"
    "config\0forcedSessionClose\0"
    "QNetworkConfiguration\0connectionError\0"
    "id\0QBearerEngineImpl::ConnectionError\0"
    "error\0decrementTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkSessionPrivateImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,
       8,    2,   46,    2, 0x08 /* Private */,
      12,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,
    QMetaType::Void,

       0        // eod
};

void QNetworkSessionPrivateImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkSessionPrivateImpl *_t = static_cast<QNetworkSessionPrivateImpl *>(_o);
        switch (_id) {
        case 0: _t->networkConfigurationsChanged(); break;
        case 1: _t->configurationChanged((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 2: _t->forcedSessionClose((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->connectionError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QBearerEngineImpl::ConnectionError(*)>(_a[2]))); break;
        case 4: _t->decrementTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationPrivatePointer >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBearerEngineImpl::ConnectionError >(); break;
            }
            break;
        }
    }
}

const QMetaObject QNetworkSessionPrivateImpl::staticMetaObject = {
    { &QNetworkSessionPrivate::staticMetaObject, qt_meta_stringdata_QNetworkSessionPrivateImpl.data,
      qt_meta_data_QNetworkSessionPrivateImpl,  qt_static_metacall, 0, 0}
};


const QMetaObject *QNetworkSessionPrivateImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkSessionPrivateImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkSessionPrivateImpl.stringdata))
        return static_cast<void*>(const_cast< QNetworkSessionPrivateImpl*>(this));
    return QNetworkSessionPrivate::qt_metacast(_clname);
}

int QNetworkSessionPrivateImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkSessionPrivate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
