/****************************************************************************
** Meta object code from reading C++ file 'qprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QProcess_t {
    QByteArrayData data[22];
    char stringdata[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProcess_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProcess_t qt_meta_stringdata_QProcess = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 7),
QT_MOC_LITERAL(2, 17, 0),
QT_MOC_LITERAL(3, 18, 8),
QT_MOC_LITERAL(4, 27, 8),
QT_MOC_LITERAL(5, 36, 20),
QT_MOC_LITERAL(6, 57, 10),
QT_MOC_LITERAL(7, 68, 5),
QT_MOC_LITERAL(8, 74, 22),
QT_MOC_LITERAL(9, 97, 12),
QT_MOC_LITERAL(10, 110, 22),
QT_MOC_LITERAL(11, 133, 5),
QT_MOC_LITERAL(12, 139, 23),
QT_MOC_LITERAL(13, 163, 22),
QT_MOC_LITERAL(14, 186, 9),
QT_MOC_LITERAL(15, 196, 4),
QT_MOC_LITERAL(16, 201, 24),
QT_MOC_LITERAL(17, 226, 23),
QT_MOC_LITERAL(18, 250, 11),
QT_MOC_LITERAL(19, 262, 22),
QT_MOC_LITERAL(20, 285, 14),
QT_MOC_LITERAL(21, 300, 11)
    },
    "QProcess\0started\0\0finished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0error\0"
    "QProcess::ProcessError\0stateChanged\0"
    "QProcess::ProcessState\0state\0"
    "readyReadStandardOutput\0readyReadStandardError\0"
    "terminate\0kill\0_q_canReadStandardOutput\0"
    "_q_canReadStandardError\0_q_canWrite\0"
    "_q_startupNotification\0_q_processDied\0"
    "_q_notified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       3,    2,   93,    2, 0x06 /* Public */,
       7,    1,   98,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,
      12,    0,  104,    2, 0x06 /* Public */,
      13,    0,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,
      18,    0,  110,    2, 0x08 /* Private */,
      19,    0,  111,    2, 0x08 /* Private */,
      20,    0,  112,    2, 0x08 /* Private */,
      21,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void QProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QProcess *_t = static_cast<QProcess *>(_o);
        switch (_id) {
        case 0: _t->started(QPrivateSignal()); break;
        case 1: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1])), QPrivateSignal()); break;
        case 5: _t->readyReadStandardOutput(QPrivateSignal()); break;
        case 6: _t->readyReadStandardError(QPrivateSignal()); break;
        case 7: _t->terminate(); break;
        case 8: _t->kill(); break;
        case 9: { bool _r = _t->d_func()->_q_canReadStandardOutput();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 10: { bool _r = _t->d_func()->_q_canReadStandardError();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->d_func()->_q_canWrite();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->d_func()->_q_startupNotification();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->d_func()->_q_processDied();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: _t->d_func()->_q_notified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QProcess::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::started)) {
                *result = 0;
            }
        }
        {
            typedef void (QProcess::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (QProcess::*_t)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::finished)) {
                *result = 2;
            }
        }
        {
            typedef void (QProcess::*_t)(QProcess::ProcessError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::error)) {
                *result = 3;
            }
        }
        {
            typedef void (QProcess::*_t)(QProcess::ProcessState , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::stateChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QProcess::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::readyReadStandardOutput)) {
                *result = 5;
            }
        }
        {
            typedef void (QProcess::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::readyReadStandardError)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject QProcess::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QProcess.data,
      qt_meta_data_QProcess,  qt_static_metacall, 0, 0}
};


const QMetaObject *QProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProcess.stringdata))
        return static_cast<void*>(const_cast< QProcess*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QProcess::started(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QProcess::finished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QProcess::finished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QProcess::error(QProcess::ProcessError _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QProcess::stateChanged(QProcess::ProcessState _t1, QPrivateSignal)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QProcess::readyReadStandardOutput(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void QProcess::readyReadStandardError(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}
QT_END_MOC_NAMESPACE
