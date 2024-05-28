/****************************************************************************
** Meta object code from reading C++ file 'qformlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qformlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qformlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFormLayout_t {
    QByteArrayData data[20];
    char stringdata[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFormLayout_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFormLayout_t qt_meta_stringdata_QFormLayout = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 17),
QT_MOC_LITERAL(2, 30, 17),
QT_MOC_LITERAL(3, 48, 13),
QT_MOC_LITERAL(4, 62, 13),
QT_MOC_LITERAL(5, 76, 14),
QT_MOC_LITERAL(6, 91, 13),
QT_MOC_LITERAL(7, 105, 13),
QT_MOC_LITERAL(8, 119, 17),
QT_MOC_LITERAL(9, 137, 15),
QT_MOC_LITERAL(10, 153, 20),
QT_MOC_LITERAL(11, 174, 19),
QT_MOC_LITERAL(12, 194, 21),
QT_MOC_LITERAL(13, 216, 12),
QT_MOC_LITERAL(14, 229, 12),
QT_MOC_LITERAL(15, 242, 11),
QT_MOC_LITERAL(16, 254, 8),
QT_MOC_LITERAL(17, 263, 9),
QT_MOC_LITERAL(18, 273, 9),
QT_MOC_LITERAL(19, 283, 12)
    },
    "QFormLayout\0fieldGrowthPolicy\0"
    "FieldGrowthPolicy\0rowWrapPolicy\0"
    "RowWrapPolicy\0labelAlignment\0Qt::Alignment\0"
    "formAlignment\0horizontalSpacing\0"
    "verticalSpacing\0FieldsStayAtSizeHint\0"
    "ExpandingFieldsGrow\0AllNonFixedFieldsGrow\0"
    "DontWrapRows\0WrapLongRows\0WrapAllRows\0"
    "ItemRole\0LabelRole\0FieldRole\0SpanningRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFormLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       3,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510f,
       3, 0x80000000 | 4, 0x0009510f,
       5, 0x80000000 | 6, 0x0009510f,
       7, 0x80000000 | 6, 0x0009510f,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,

 // enums: name, flags, count, data
       2, 0x0,    3,   44,
       4, 0x0,    3,   50,
      16, 0x0,    3,   56,

 // enum data: key, value
      10, uint(QFormLayout::FieldsStayAtSizeHint),
      11, uint(QFormLayout::ExpandingFieldsGrow),
      12, uint(QFormLayout::AllNonFixedFieldsGrow),
      13, uint(QFormLayout::DontWrapRows),
      14, uint(QFormLayout::WrapLongRows),
      15, uint(QFormLayout::WrapAllRows),
      17, uint(QFormLayout::LabelRole),
      18, uint(QFormLayout::FieldRole),
      19, uint(QFormLayout::SpanningRole),

       0        // eod
};

void QFormLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QFormLayout::staticMetaObject = {
    { &QLayout::staticMetaObject, qt_meta_stringdata_QFormLayout.data,
      qt_meta_data_QFormLayout,  qt_static_metacall, 0, 0}
};


const QMetaObject *QFormLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFormLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFormLayout.stringdata))
        return static_cast<void*>(const_cast< QFormLayout*>(this));
    return QLayout::qt_metacast(_clname);
}

int QFormLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLayout::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FieldGrowthPolicy*>(_v) = fieldGrowthPolicy(); break;
        case 1: *reinterpret_cast< RowWrapPolicy*>(_v) = rowWrapPolicy(); break;
        case 2: *reinterpret_cast< Qt::Alignment*>(_v) = labelAlignment(); break;
        case 3: *reinterpret_cast< Qt::Alignment*>(_v) = formAlignment(); break;
        case 4: *reinterpret_cast< int*>(_v) = horizontalSpacing(); break;
        case 5: *reinterpret_cast< int*>(_v) = verticalSpacing(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setFieldGrowthPolicy(*reinterpret_cast< FieldGrowthPolicy*>(_v)); break;
        case 1: setRowWrapPolicy(*reinterpret_cast< RowWrapPolicy*>(_v)); break;
        case 2: setLabelAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 3: setFormAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 4: setHorizontalSpacing(*reinterpret_cast< int*>(_v)); break;
        case 5: setVerticalSpacing(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 0: resetFieldGrowthPolicy(); break;
        case 1: resetRowWrapPolicy(); break;
        case 2: resetLabelAlignment(); break;
        case 3: resetFormAlignment(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
