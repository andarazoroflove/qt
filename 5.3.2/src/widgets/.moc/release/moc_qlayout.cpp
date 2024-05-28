/****************************************************************************
** Meta object code from reading C++ file 'qlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLayout_t {
    QByteArrayData data[11];
    char stringdata[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLayout_t qt_meta_stringdata_QLayout = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 6),
QT_MOC_LITERAL(2, 15, 7),
QT_MOC_LITERAL(3, 23, 14),
QT_MOC_LITERAL(4, 38, 14),
QT_MOC_LITERAL(5, 53, 20),
QT_MOC_LITERAL(6, 74, 15),
QT_MOC_LITERAL(7, 90, 14),
QT_MOC_LITERAL(8, 105, 12),
QT_MOC_LITERAL(9, 118, 14),
QT_MOC_LITERAL(10, 133, 16)
    },
    "QLayout\0margin\0spacing\0sizeConstraint\0"
    "SizeConstraint\0SetDefaultConstraint\0"
    "SetNoConstraint\0SetMinimumSize\0"
    "SetFixedSize\0SetMaximumSize\0"
    "SetMinAndMaxSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,

 // enums: name, flags, count, data
       4, 0x0,    6,   27,

 // enum data: key, value
       5, uint(QLayout::SetDefaultConstraint),
       6, uint(QLayout::SetNoConstraint),
       7, uint(QLayout::SetMinimumSize),
       8, uint(QLayout::SetFixedSize),
       9, uint(QLayout::SetMaximumSize),
      10, uint(QLayout::SetMinAndMaxSize),

       0        // eod
};

void QLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLayout.data,
      qt_meta_data_QLayout,  qt_static_metacall, 0, 0}
};


const QMetaObject *QLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLayout.stringdata))
        return static_cast<void*>(const_cast< QLayout*>(this));
    if (!strcmp(_clname, "QLayoutItem"))
        return static_cast< QLayoutItem*>(const_cast< QLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int QLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = margin(); break;
        case 1: *reinterpret_cast< int*>(_v) = spacing(); break;
        case 2: *reinterpret_cast< SizeConstraint*>(_v) = sizeConstraint(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMargin(*reinterpret_cast< int*>(_v)); break;
        case 1: setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 2: setSizeConstraint(*reinterpret_cast< SizeConstraint*>(_v)); break;
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
QT_END_MOC_NAMESPACE
