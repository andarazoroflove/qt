/****************************************************************************
** Meta object code from reading C++ file 'qstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QState_t {
    QByteArrayData data[14];
    char stringdata[181];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QState_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QState_t qt_meta_stringdata_QState = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 8),
QT_MOC_LITERAL(2, 16, 0),
QT_MOC_LITERAL(3, 17, 18),
QT_MOC_LITERAL(4, 36, 12),
QT_MOC_LITERAL(5, 49, 15),
QT_MOC_LITERAL(6, 65, 10),
QT_MOC_LITERAL(7, 76, 9),
QT_MOC_LITERAL(8, 86, 9),
QT_MOC_LITERAL(9, 96, 15),
QT_MOC_LITERAL(10, 112, 14),
QT_MOC_LITERAL(11, 127, 13),
QT_MOC_LITERAL(12, 141, 21),
QT_MOC_LITERAL(13, 163, 17)
    },
    "QState\0finished\0\0propertiesAssigned\0"
    "initialState\0QAbstractState*\0errorState\0"
    "childMode\0ChildMode\0ExclusiveStates\0"
    "ParallelStates\0RestorePolicy\0"
    "DontRestoreProperties\0RestoreProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   26, // properties
       2,   35, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x0009510b,
       6, 0x80000000 | 5, 0x0009510b,
       7, 0x80000000 | 8, 0x0009510b,

 // enums: name, flags, count, data
       8, 0x0,    2,   43,
      11, 0x0,    2,   47,

 // enum data: key, value
       9, uint(QState::ExclusiveStates),
      10, uint(QState::ParallelStates),
      12, uint(QState::DontRestoreProperties),
      13, uint(QState::RestoreProperties),

       0        // eod
};

void QState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QState *_t = static_cast<QState *>(_o);
        switch (_id) {
        case 0: _t->finished(QPrivateSignal()); break;
        case 1: _t->propertiesAssigned(QPrivateSignal()); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::finished)) {
                *result = 0;
            }
        }
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::propertiesAssigned)) {
                *result = 1;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractState* >(); break;
        }
    }

}

const QMetaObject QState::staticMetaObject = {
    { &QAbstractState::staticMetaObject, qt_meta_stringdata_QState.data,
      qt_meta_data_QState,  qt_static_metacall, 0, 0}
};


const QMetaObject *QState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QState::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QState.stringdata))
        return static_cast<void*>(const_cast< QState*>(this));
    return QAbstractState::qt_metacast(_clname);
}

int QState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractState::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QAbstractState**>(_v) = initialState(); break;
        case 1: *reinterpret_cast< QAbstractState**>(_v) = errorState(); break;
        case 2: *reinterpret_cast< ChildMode*>(_v) = childMode(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setInitialState(*reinterpret_cast< QAbstractState**>(_v)); break;
        case 1: setErrorState(*reinterpret_cast< QAbstractState**>(_v)); break;
        case 2: setChildMode(*reinterpret_cast< ChildMode*>(_v)); break;
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QState::finished(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QState::propertiesAssigned(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
