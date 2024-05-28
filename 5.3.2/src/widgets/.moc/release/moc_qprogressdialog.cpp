/****************************************************************************
** Meta object code from reading C++ file 'qprogressdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qprogressdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprogressdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QProgressDialog_t {
    QByteArrayData data[25];
    char stringdata[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProgressDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProgressDialog_t qt_meta_stringdata_QProgressDialog = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 8),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 6),
QT_MOC_LITERAL(4, 33, 5),
QT_MOC_LITERAL(5, 39, 10),
QT_MOC_LITERAL(6, 50, 7),
QT_MOC_LITERAL(7, 58, 10),
QT_MOC_LITERAL(8, 69, 7),
QT_MOC_LITERAL(9, 77, 8),
QT_MOC_LITERAL(10, 86, 8),
QT_MOC_LITERAL(11, 95, 8),
QT_MOC_LITERAL(12, 104, 12),
QT_MOC_LITERAL(13, 117, 4),
QT_MOC_LITERAL(14, 122, 19),
QT_MOC_LITERAL(15, 142, 18),
QT_MOC_LITERAL(16, 161, 2),
QT_MOC_LITERAL(17, 164, 9),
QT_MOC_LITERAL(18, 174, 20),
QT_MOC_LITERAL(19, 195, 11),
QT_MOC_LITERAL(20, 207, 5),
QT_MOC_LITERAL(21, 213, 9),
QT_MOC_LITERAL(22, 223, 9),
QT_MOC_LITERAL(23, 233, 15),
QT_MOC_LITERAL(24, 249, 9)
    },
    "QProgressDialog\0canceled\0\0cancel\0reset\0"
    "setMaximum\0maximum\0setMinimum\0minimum\0"
    "setRange\0setValue\0progress\0setLabelText\0"
    "text\0setCancelButtonText\0setMinimumDuration\0"
    "ms\0forceShow\0_q_disconnectOnClose\0"
    "wasCanceled\0value\0autoReset\0autoClose\0"
    "minimumDuration\0labelText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProgressDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       8,  102, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
       9,    2,   83,    2, 0x0a /* Public */,
      10,    1,   88,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,
      14,    1,   94,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,
      17,    0,  100,    2, 0x09 /* Protected */,
      18,    0,  101,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    6,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::Bool, 0x00095001,
       8, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
      20, QMetaType::Int, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::Int, 0x00095103,
      24, QMetaType::QString, 0x00095103,

       0        // eod
};

void QProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QProgressDialog *_t = static_cast<QProgressDialog *>(_o);
        switch (_id) {
        case 0: _t->canceled(); break;
        case 1: _t->cancel(); break;
        case 2: _t->reset(); break;
        case 3: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setLabelText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->setCancelButtonText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->setMinimumDuration((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->forceShow(); break;
        case 11: _t->d_func()->_q_disconnectOnClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QProgressDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProgressDialog::canceled)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QProgressDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QProgressDialog.data,
      qt_meta_data_QProgressDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *QProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProgressDialog.stringdata))
        return static_cast<void*>(const_cast< QProgressDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = wasCanceled(); break;
        case 1: *reinterpret_cast< int*>(_v) = minimum(); break;
        case 2: *reinterpret_cast< int*>(_v) = maximum(); break;
        case 3: *reinterpret_cast< int*>(_v) = value(); break;
        case 4: *reinterpret_cast< bool*>(_v) = autoReset(); break;
        case 5: *reinterpret_cast< bool*>(_v) = autoClose(); break;
        case 6: *reinterpret_cast< int*>(_v) = minimumDuration(); break;
        case 7: *reinterpret_cast< QString*>(_v) = labelText(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 2: setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 3: setValue(*reinterpret_cast< int*>(_v)); break;
        case 4: setAutoReset(*reinterpret_cast< bool*>(_v)); break;
        case 5: setAutoClose(*reinterpret_cast< bool*>(_v)); break;
        case 6: setMinimumDuration(*reinterpret_cast< int*>(_v)); break;
        case 7: setLabelText(*reinterpret_cast< QString*>(_v)); break;
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
void QProgressDialog::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
