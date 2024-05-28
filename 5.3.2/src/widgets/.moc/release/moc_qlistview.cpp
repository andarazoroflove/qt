/****************************************************************************
** Meta object code from reading C++ file 'qlistview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qlistview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlistview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QListView_t {
    QByteArrayData data[34];
    char stringdata[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QListView_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QListView_t qt_meta_stringdata_QListView = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 12),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 15),
QT_MOC_LITERAL(4, 40, 7),
QT_MOC_LITERAL(5, 48, 8),
QT_MOC_LITERAL(6, 57, 8),
QT_MOC_LITERAL(7, 66, 4),
QT_MOC_LITERAL(8, 71, 4),
QT_MOC_LITERAL(9, 76, 10),
QT_MOC_LITERAL(10, 87, 10),
QT_MOC_LITERAL(11, 98, 10),
QT_MOC_LITERAL(12, 109, 10),
QT_MOC_LITERAL(13, 120, 10),
QT_MOC_LITERAL(14, 131, 7),
QT_MOC_LITERAL(15, 139, 8),
QT_MOC_LITERAL(16, 148, 8),
QT_MOC_LITERAL(17, 157, 8),
QT_MOC_LITERAL(18, 166, 11),
QT_MOC_LITERAL(19, 178, 16),
QT_MOC_LITERAL(20, 195, 9),
QT_MOC_LITERAL(21, 205, 8),
QT_MOC_LITERAL(22, 214, 20),
QT_MOC_LITERAL(23, 235, 6),
QT_MOC_LITERAL(24, 242, 4),
QT_MOC_LITERAL(25, 247, 4),
QT_MOC_LITERAL(26, 252, 11),
QT_MOC_LITERAL(27, 264, 11),
QT_MOC_LITERAL(28, 276, 5),
QT_MOC_LITERAL(29, 282, 6),
QT_MOC_LITERAL(30, 289, 10),
QT_MOC_LITERAL(31, 300, 7),
QT_MOC_LITERAL(32, 308, 8),
QT_MOC_LITERAL(33, 317, 8)
    },
    "QListView\0indexesMoved\0\0QModelIndexList\0"
    "indexes\0movement\0Movement\0flow\0Flow\0"
    "isWrapping\0resizeMode\0ResizeMode\0"
    "layoutMode\0LayoutMode\0spacing\0gridSize\0"
    "viewMode\0ViewMode\0modelColumn\0"
    "uniformItemSizes\0batchSize\0wordWrap\0"
    "selectionRectVisible\0Static\0Free\0Snap\0"
    "LeftToRight\0TopToBottom\0Fixed\0Adjust\0"
    "SinglePass\0Batched\0ListMode\0IconMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
      13,   22, // properties
       5,   61, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 8, 0x0009510b,
       9, QMetaType::Bool, 0x00095003,
      10, 0x80000000 | 11, 0x0009510b,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::QSize, 0x00095103,
      16, 0x80000000 | 17, 0x0009510b,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Int, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
       6, 0x0,    3,   81,
       8, 0x0,    2,   87,
      11, 0x0,    2,   91,
      13, 0x0,    2,   95,
      17, 0x0,    2,   99,

 // enum data: key, value
      23, uint(QListView::Static),
      24, uint(QListView::Free),
      25, uint(QListView::Snap),
      26, uint(QListView::LeftToRight),
      27, uint(QListView::TopToBottom),
      28, uint(QListView::Fixed),
      29, uint(QListView::Adjust),
      30, uint(QListView::SinglePass),
      31, uint(QListView::Batched),
      32, uint(QListView::ListMode),
      33, uint(QListView::IconMode),

       0        // eod
};

void QListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QListView *_t = static_cast<QListView *>(_o);
        switch (_id) {
        case 0: _t->indexesMoved((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QListView::*_t)(const QModelIndexList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QListView::indexesMoved)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QListView::staticMetaObject = {
    { &QAbstractItemView::staticMetaObject, qt_meta_stringdata_QListView.data,
      qt_meta_data_QListView,  qt_static_metacall, 0, 0}
};


const QMetaObject *QListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QListView.stringdata))
        return static_cast<void*>(const_cast< QListView*>(this));
    return QAbstractItemView::qt_metacast(_clname);
}

int QListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Movement*>(_v) = movement(); break;
        case 1: *reinterpret_cast< Flow*>(_v) = flow(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isWrapping(); break;
        case 3: *reinterpret_cast< ResizeMode*>(_v) = resizeMode(); break;
        case 4: *reinterpret_cast< LayoutMode*>(_v) = layoutMode(); break;
        case 5: *reinterpret_cast< int*>(_v) = spacing(); break;
        case 6: *reinterpret_cast< QSize*>(_v) = gridSize(); break;
        case 7: *reinterpret_cast< ViewMode*>(_v) = viewMode(); break;
        case 8: *reinterpret_cast< int*>(_v) = modelColumn(); break;
        case 9: *reinterpret_cast< bool*>(_v) = uniformItemSizes(); break;
        case 10: *reinterpret_cast< int*>(_v) = batchSize(); break;
        case 11: *reinterpret_cast< bool*>(_v) = wordWrap(); break;
        case 12: *reinterpret_cast< bool*>(_v) = isSelectionRectVisible(); break;
        default: break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMovement(*reinterpret_cast< Movement*>(_v)); break;
        case 1: setFlow(*reinterpret_cast< Flow*>(_v)); break;
        case 2: setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 3: setResizeMode(*reinterpret_cast< ResizeMode*>(_v)); break;
        case 4: setLayoutMode(*reinterpret_cast< LayoutMode*>(_v)); break;
        case 5: setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 6: setGridSize(*reinterpret_cast< QSize*>(_v)); break;
        case 7: setViewMode(*reinterpret_cast< ViewMode*>(_v)); break;
        case 8: setModelColumn(*reinterpret_cast< int*>(_v)); break;
        case 9: setUniformItemSizes(*reinterpret_cast< bool*>(_v)); break;
        case 10: setBatchSize(*reinterpret_cast< int*>(_v)); break;
        case 11: setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 12: setSelectionRectVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 13;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QListView::indexesMoved(const QModelIndexList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
