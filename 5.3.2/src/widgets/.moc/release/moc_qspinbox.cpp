/****************************************************************************
** Meta object code from reading C++ file 'qspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qspinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSpinBox_t {
    QByteArrayData data[13];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSpinBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSpinBox_t qt_meta_stringdata_QSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 12),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 8),
QT_MOC_LITERAL(4, 32, 3),
QT_MOC_LITERAL(5, 36, 6),
QT_MOC_LITERAL(6, 43, 6),
QT_MOC_LITERAL(7, 50, 9),
QT_MOC_LITERAL(8, 60, 7),
QT_MOC_LITERAL(9, 68, 7),
QT_MOC_LITERAL(10, 76, 10),
QT_MOC_LITERAL(11, 87, 5),
QT_MOC_LITERAL(12, 93, 18)
    },
    "QSpinBox\0valueChanged\0\0setValue\0val\0"
    "suffix\0prefix\0cleanText\0minimum\0maximum\0"
    "singleStep\0value\0displayIntegerBase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       1,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Int, 0x00095103,
      10, QMetaType::Int, 0x00095103,
      11, QMetaType::Int, 0x00595103,
      12, QMetaType::Int, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSpinBox *_t = static_cast<QSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSpinBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSpinBox::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QSpinBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSpinBox::valueChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_QSpinBox.data,
      qt_meta_data_QSpinBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *QSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSpinBox.stringdata))
        return static_cast<void*>(const_cast< QSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = suffix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = prefix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = minimum(); break;
        case 4: *reinterpret_cast< int*>(_v) = maximum(); break;
        case 5: *reinterpret_cast< int*>(_v) = singleStep(); break;
        case 6: *reinterpret_cast< int*>(_v) = value(); break;
        case 7: *reinterpret_cast< int*>(_v) = displayIntegerBase(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 1: setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 3: setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 4: setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 5: setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 6: setValue(*reinterpret_cast< int*>(_v)); break;
        case 7: setDisplayIntegerBase(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QSpinBox::valueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QDoubleSpinBox_t {
    QByteArrayData data[13];
    char stringdata[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleSpinBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleSpinBox_t qt_meta_stringdata_QDoubleSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 12),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 8),
QT_MOC_LITERAL(4, 38, 3),
QT_MOC_LITERAL(5, 42, 6),
QT_MOC_LITERAL(6, 49, 6),
QT_MOC_LITERAL(7, 56, 9),
QT_MOC_LITERAL(8, 66, 8),
QT_MOC_LITERAL(9, 75, 7),
QT_MOC_LITERAL(10, 83, 7),
QT_MOC_LITERAL(11, 91, 10),
QT_MOC_LITERAL(12, 102, 5)
    },
    "QDoubleSpinBox\0valueChanged\0\0setValue\0"
    "val\0prefix\0suffix\0cleanText\0decimals\0"
    "minimum\0maximum\0singleStep\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       8,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       1,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095001,
       8, QMetaType::Int, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      10, QMetaType::Double, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      12, QMetaType::Double, 0x00595103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QDoubleSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDoubleSpinBox *_t = static_cast<QDoubleSpinBox *>(_o);
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->valueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDoubleSpinBox::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleSpinBox::valueChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QDoubleSpinBox::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleSpinBox::valueChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QDoubleSpinBox::staticMetaObject = {
    { &QAbstractSpinBox::staticMetaObject, qt_meta_stringdata_QDoubleSpinBox.data,
      qt_meta_data_QDoubleSpinBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *QDoubleSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSpinBox.stringdata))
        return static_cast<void*>(const_cast< QDoubleSpinBox*>(this));
    return QAbstractSpinBox::qt_metacast(_clname);
}

int QDoubleSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = prefix(); break;
        case 1: *reinterpret_cast< QString*>(_v) = suffix(); break;
        case 2: *reinterpret_cast< QString*>(_v) = cleanText(); break;
        case 3: *reinterpret_cast< int*>(_v) = decimals(); break;
        case 4: *reinterpret_cast< double*>(_v) = minimum(); break;
        case 5: *reinterpret_cast< double*>(_v) = maximum(); break;
        case 6: *reinterpret_cast< double*>(_v) = singleStep(); break;
        case 7: *reinterpret_cast< double*>(_v) = value(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPrefix(*reinterpret_cast< QString*>(_v)); break;
        case 1: setSuffix(*reinterpret_cast< QString*>(_v)); break;
        case 3: setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 4: setMinimum(*reinterpret_cast< double*>(_v)); break;
        case 5: setMaximum(*reinterpret_cast< double*>(_v)); break;
        case 6: setSingleStep(*reinterpret_cast< double*>(_v)); break;
        case 7: setValue(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDoubleSpinBox::valueChanged(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleSpinBox::valueChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
