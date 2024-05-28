/****************************************************************************
** Meta object code from reading C++ file 'qstatemachine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qstatemachine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstatemachine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QStateMachine_t {
    QByteArrayData data[15];
    char stringdata[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStateMachine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStateMachine_t qt_meta_stringdata_QStateMachine = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 7),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 7),
QT_MOC_LITERAL(4, 31, 5),
QT_MOC_LITERAL(5, 37, 4),
QT_MOC_LITERAL(6, 42, 8),
QT_MOC_LITERAL(7, 51, 10),
QT_MOC_LITERAL(8, 62, 20),
QT_MOC_LITERAL(9, 83, 25),
QT_MOC_LITERAL(10, 109, 24),
QT_MOC_LITERAL(11, 134, 11),
QT_MOC_LITERAL(12, 146, 19),
QT_MOC_LITERAL(13, 166, 21),
QT_MOC_LITERAL(14, 188, 8)
    },
    "QStateMachine\0started\0\0stopped\0start\0"
    "stop\0_q_start\0_q_process\0_q_animationFinished\0"
    "_q_startDelayedEventTimer\0"
    "_q_killDelayedEventTimer\0errorString\0"
    "globalRestorePolicy\0QState::RestorePolicy\0"
    "animated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStateMachine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    2,   66,    2, 0x08 /* Private */,
      10,    2,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags
      11, QMetaType::QString, 0x00095001,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStateMachine *_t = static_cast<QStateMachine *>(_o);
        switch (_id) {
        case 0: _t->started(QPrivateSignal()); break;
        case 1: _t->stopped(QPrivateSignal()); break;
        case 2: _t->start(); break;
        case 3: _t->stop(); break;
        case 4: _t->d_func()->_q_start(); break;
        case 5: _t->d_func()->_q_process(); break;
        case 6: _t->d_func()->_q_animationFinished(); break;
        case 7: _t->d_func()->_q_startDelayedEventTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->d_func()->_q_killDelayedEventTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QStateMachine::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStateMachine::started)) {
                *result = 0;
            }
        }
        {
            typedef void (QStateMachine::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStateMachine::stopped)) {
                *result = 1;
            }
        }
    }
}

static const QMetaObject * const qt_meta_extradata_QStateMachine[] = {
        &QState::staticMetaObject,
    0
};

const QMetaObject QStateMachine::staticMetaObject = {
    { &QState::staticMetaObject, qt_meta_stringdata_QStateMachine.data,
      qt_meta_data_QStateMachine,  qt_static_metacall, qt_meta_extradata_QStateMachine, 0}
};


const QMetaObject *QStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStateMachine.stringdata))
        return static_cast<void*>(const_cast< QStateMachine*>(this));
    return QState::qt_metacast(_clname);
}

int QStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QState::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = errorString(); break;
        case 1: *reinterpret_cast< QState::RestorePolicy*>(_v) = globalRestorePolicy(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isAnimated(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setGlobalRestorePolicy(*reinterpret_cast< QState::RestorePolicy*>(_v)); break;
        case 2: setAnimated(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QStateMachine::started(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QStateMachine::stopped(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
