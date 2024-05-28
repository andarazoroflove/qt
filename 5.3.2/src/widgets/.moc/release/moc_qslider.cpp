/****************************************************************************
** Meta object code from reading C++ file 'qslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSlider_t {
    QByteArrayData data[10];
    char stringdata[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSlider_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSlider_t qt_meta_stringdata_QSlider = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 12),
QT_MOC_LITERAL(2, 21, 12),
QT_MOC_LITERAL(3, 34, 12),
QT_MOC_LITERAL(4, 47, 7),
QT_MOC_LITERAL(5, 55, 10),
QT_MOC_LITERAL(6, 66, 9),
QT_MOC_LITERAL(7, 76, 10),
QT_MOC_LITERAL(8, 87, 10),
QT_MOC_LITERAL(9, 98, 14)
    },
    "QSlider\0tickPosition\0TickPosition\0"
    "tickInterval\0NoTicks\0TicksAbove\0"
    "TicksLeft\0TicksBelow\0TicksRight\0"
    "TicksBothSides"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       1,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
       2, 0x0,    6,   24,

 // enum data: key, value
       4, uint(QSlider::NoTicks),
       5, uint(QSlider::TicksAbove),
       6, uint(QSlider::TicksLeft),
       7, uint(QSlider::TicksBelow),
       8, uint(QSlider::TicksRight),
       9, uint(QSlider::TicksBothSides),

       0        // eod
};

void QSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QSlider::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_QSlider.data,
      qt_meta_data_QSlider,  qt_static_metacall, 0, 0}
};


const QMetaObject *QSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSlider.stringdata))
        return static_cast<void*>(const_cast< QSlider*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int QSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< TickPosition*>(_v) = tickPosition(); break;
        case 1: *reinterpret_cast< int*>(_v) = tickInterval(); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTickPosition(*reinterpret_cast< TickPosition*>(_v)); break;
        case 1: setTickInterval(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 2;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
