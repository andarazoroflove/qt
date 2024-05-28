/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemdelegate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qabstractitemdelegate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemdelegate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractItemDelegate_t {
    QByteArrayData data[9];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractItemDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractItemDelegate_t qt_meta_stringdata_QAbstractItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 21),
QT_MOC_LITERAL(1, 22, 10),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 8),
QT_MOC_LITERAL(4, 43, 6),
QT_MOC_LITERAL(5, 50, 11),
QT_MOC_LITERAL(6, 62, 34),
QT_MOC_LITERAL(7, 97, 4),
QT_MOC_LITERAL(8, 102, 15)
    },
    "QAbstractItemDelegate\0commitData\0\0"
    "QWidget*\0editor\0closeEditor\0"
    "QAbstractItemDelegate::EndEditHint\0"
    "hint\0sizeHintChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractItemDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    2,   37,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x26 /* Public | MethodCloned */,
       8,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    4,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QModelIndex,    2,

       0        // eod
};

void QAbstractItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractItemDelegate *_t = static_cast<QAbstractItemDelegate *>(_o);
        switch (_id) {
        case 0: _t->commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 1: _t->closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 2: _t->closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->sizeHintChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractItemDelegate::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemDelegate::commitData)) {
                *result = 0;
            }
        }
        {
            typedef void (QAbstractItemDelegate::*_t)(QWidget * , QAbstractItemDelegate::EndEditHint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemDelegate::closeEditor)) {
                *result = 1;
            }
        }
        {
            typedef void (QAbstractItemDelegate::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemDelegate::sizeHintChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QAbstractItemDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractItemDelegate.data,
      qt_meta_data_QAbstractItemDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *QAbstractItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractItemDelegate.stringdata))
        return static_cast<void*>(const_cast< QAbstractItemDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QAbstractItemDelegate::commitData(QWidget * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractItemDelegate::closeEditor(QWidget * _t1, QAbstractItemDelegate::EndEditHint _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void QAbstractItemDelegate::sizeHintChanged(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
