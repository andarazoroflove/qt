/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsscenebsptreeindex_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicsscenebsptreeindex_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsscenebsptreeindex_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGraphicsSceneBspTreeIndex_t {
    QByteArrayData data[7];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsSceneBspTreeIndex_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsSceneBspTreeIndex_t qt_meta_stringdata_QGraphicsSceneBspTreeIndex = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 15),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 4),
QT_MOC_LITERAL(4, 49, 18),
QT_MOC_LITERAL(5, 68, 14),
QT_MOC_LITERAL(6, 83, 12)
    },
    "QGraphicsSceneBspTreeIndex\0updateSceneRect\0"
    "\0rect\0_q_updateSortCache\0_q_updateIndex\0"
    "bspTreeDepth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsSceneBspTreeIndex[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    0,   32,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRectF,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095103,

       0        // eod
};

void QGraphicsSceneBspTreeIndex::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsSceneBspTreeIndex *_t = static_cast<QGraphicsSceneBspTreeIndex *>(_o);
        switch (_id) {
        case 0: _t->updateSceneRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_updateSortCache(); break;
        case 2: _t->d_func()->_q_updateIndex(); break;
        default: ;
        }
    }
}

const QMetaObject QGraphicsSceneBspTreeIndex::staticMetaObject = {
    { &QGraphicsSceneIndex::staticMetaObject, qt_meta_stringdata_QGraphicsSceneBspTreeIndex.data,
      qt_meta_data_QGraphicsSceneBspTreeIndex,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGraphicsSceneBspTreeIndex::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsSceneBspTreeIndex::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsSceneBspTreeIndex.stringdata))
        return static_cast<void*>(const_cast< QGraphicsSceneBspTreeIndex*>(this));
    return QGraphicsSceneIndex::qt_metacast(_clname);
}

int QGraphicsSceneBspTreeIndex::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsSceneIndex::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< int*>(_v) = bspTreeDepth(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBspTreeDepth(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
