/****************************************************************************
** Meta object code from reading C++ file 'qgesture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qgesture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGesture_t {
    QByteArrayData data[9];
    char stringdata[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGesture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGesture_t qt_meta_stringdata_QGesture = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 5),
QT_MOC_LITERAL(2, 15, 16),
QT_MOC_LITERAL(3, 32, 11),
QT_MOC_LITERAL(4, 44, 15),
QT_MOC_LITERAL(5, 60, 19),
QT_MOC_LITERAL(6, 80, 29),
QT_MOC_LITERAL(7, 110, 7),
QT_MOC_LITERAL(8, 118, 10)
    },
    "QGesture\0state\0Qt::GestureState\0"
    "gestureType\0Qt::GestureType\0"
    "gestureCancelPolicy\0QGesture::GestureCancelPolicy\0"
    "hotSpot\0hasHotSpot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, 0x80000000 | 4, 0x00095009,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QPointF, 0x00095107,
       8, QMetaType::Bool, 0x00095001,

       0        // eod
};

void QGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture::GestureCancelPolicy >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::GestureState >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::GestureType >(); break;
        }
    }

    Q_UNUSED(_o);
}

const QMetaObject QGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGesture.data,
      qt_meta_data_QGesture,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGesture.stringdata))
        return static_cast<void*>(const_cast< QGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int QGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::GestureState*>(_v) = state(); break;
        case 1: *reinterpret_cast< Qt::GestureType*>(_v) = gestureType(); break;
        case 2: *reinterpret_cast< QGesture::GestureCancelPolicy*>(_v) = gestureCancelPolicy(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = hotSpot(); break;
        case 4: *reinterpret_cast< bool*>(_v) = hasHotSpot(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setGestureCancelPolicy(*reinterpret_cast< QGesture::GestureCancelPolicy*>(_v)); break;
        case 3: setHotSpot(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        switch (_id) {
        case 3: unsetHotSpot(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QPanGesture_t {
    QByteArrayData data[7];
    char stringdata[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPanGesture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPanGesture_t qt_meta_stringdata_QPanGesture = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 10),
QT_MOC_LITERAL(2, 23, 6),
QT_MOC_LITERAL(3, 30, 5),
QT_MOC_LITERAL(4, 36, 12),
QT_MOC_LITERAL(5, 49, 18),
QT_MOC_LITERAL(6, 68, 16)
    },
    "QPanGesture\0lastOffset\0offset\0delta\0"
    "acceleration\0horizontalVelocity\0"
    "verticalVelocity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPanGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,
       2, QMetaType::QPointF, 0x00095103,
       3, QMetaType::QPointF, 0x00085001,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QPanGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QPanGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QPanGesture.data,
      qt_meta_data_QPanGesture,  qt_static_metacall, 0, 0}
};


const QMetaObject *QPanGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPanGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPanGesture.stringdata))
        return static_cast<void*>(const_cast< QPanGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QPanGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = lastOffset(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = offset(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = delta(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = acceleration(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = QPanGesture::d_func()->horizontalVelocity(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = QPanGesture::d_func()->verticalVelocity(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setLastOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: setAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 4: QPanGesture::d_func()->setHorizontalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 5: QPanGesture::d_func()->setVerticalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::ResetProperty) {
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
struct qt_meta_stringdata_QPinchGesture_t {
    QByteArrayData data[17];
    char stringdata[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPinchGesture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPinchGesture_t qt_meta_stringdata_QPinchGesture = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 16),
QT_MOC_LITERAL(2, 31, 11),
QT_MOC_LITERAL(3, 43, 11),
QT_MOC_LITERAL(4, 55, 16),
QT_MOC_LITERAL(5, 72, 15),
QT_MOC_LITERAL(6, 88, 11),
QT_MOC_LITERAL(7, 100, 18),
QT_MOC_LITERAL(8, 119, 17),
QT_MOC_LITERAL(9, 137, 13),
QT_MOC_LITERAL(10, 151, 16),
QT_MOC_LITERAL(11, 168, 15),
QT_MOC_LITERAL(12, 184, 11),
QT_MOC_LITERAL(13, 196, 10),
QT_MOC_LITERAL(14, 207, 18),
QT_MOC_LITERAL(15, 226, 20),
QT_MOC_LITERAL(16, 247, 18)
    },
    "QPinchGesture\0totalChangeFlags\0"
    "ChangeFlags\0changeFlags\0totalScaleFactor\0"
    "lastScaleFactor\0scaleFactor\0"
    "totalRotationAngle\0lastRotationAngle\0"
    "rotationAngle\0startCenterPoint\0"
    "lastCenterPoint\0centerPoint\0ChangeFlag\0"
    "ScaleFactorChanged\0RotationAngleChanged\0"
    "CenterPointChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPinchGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       2,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 2, 0x0009510b,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QReal, 0x00095103,
      10, QMetaType::QPointF, 0x00095103,
      11, QMetaType::QPointF, 0x00095103,
      12, QMetaType::QPointF, 0x00095103,

 // enums: name, flags, count, data
      13, 0x1,    3,   55,
       2, 0x1,    3,   61,

 // enum data: key, value
      14, uint(QPinchGesture::ScaleFactorChanged),
      15, uint(QPinchGesture::RotationAngleChanged),
      16, uint(QPinchGesture::CenterPointChanged),
      14, uint(QPinchGesture::ScaleFactorChanged),
      15, uint(QPinchGesture::RotationAngleChanged),
      16, uint(QPinchGesture::CenterPointChanged),

       0        // eod
};

void QPinchGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QPinchGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QPinchGesture.data,
      qt_meta_data_QPinchGesture,  qt_static_metacall, 0, 0}
};


const QMetaObject *QPinchGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPinchGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPinchGesture.stringdata))
        return static_cast<void*>(const_cast< QPinchGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QPinchGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(totalChangeFlags()); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(changeFlags()); break;
        case 2: *reinterpret_cast< qreal*>(_v) = totalScaleFactor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = lastScaleFactor(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = scaleFactor(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = totalRotationAngle(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = lastRotationAngle(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = rotationAngle(); break;
        case 8: *reinterpret_cast< QPointF*>(_v) = startCenterPoint(); break;
        case 9: *reinterpret_cast< QPointF*>(_v) = lastCenterPoint(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = centerPoint(); break;
        default: break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTotalChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: setChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: setTotalScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setLastScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 5: setTotalRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setLastRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 7: setRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 8: setStartCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 9: setLastCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 10: setCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QSwipeGesture_t {
    QByteArrayData data[11];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSwipeGesture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSwipeGesture_t qt_meta_stringdata_QSwipeGesture = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 19),
QT_MOC_LITERAL(2, 34, 14),
QT_MOC_LITERAL(3, 49, 17),
QT_MOC_LITERAL(4, 67, 10),
QT_MOC_LITERAL(5, 78, 8),
QT_MOC_LITERAL(6, 87, 11),
QT_MOC_LITERAL(7, 99, 4),
QT_MOC_LITERAL(8, 104, 5),
QT_MOC_LITERAL(9, 110, 2),
QT_MOC_LITERAL(10, 113, 4)
    },
    "QSwipeGesture\0horizontalDirection\0"
    "SwipeDirection\0verticalDirection\0"
    "swipeAngle\0velocity\0NoDirection\0Left\0"
    "Right\0Up\0Down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSwipeGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00085009,
       3, 0x80000000 | 2, 0x00085009,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,

 // enums: name, flags, count, data
       2, 0x0,    5,   30,

 // enum data: key, value
       6, uint(QSwipeGesture::NoDirection),
       7, uint(QSwipeGesture::Left),
       8, uint(QSwipeGesture::Right),
       9, uint(QSwipeGesture::Up),
      10, uint(QSwipeGesture::Down),

       0        // eod
};

void QSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QSwipeGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QSwipeGesture.data,
      qt_meta_data_QSwipeGesture,  qt_static_metacall, 0, 0}
};


const QMetaObject *QSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSwipeGesture.stringdata))
        return static_cast<void*>(const_cast< QSwipeGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QSwipeGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SwipeDirection*>(_v) = horizontalDirection(); break;
        case 1: *reinterpret_cast< SwipeDirection*>(_v) = verticalDirection(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = swipeAngle(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = QSwipeGesture::d_func()->velocity(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 2: setSwipeAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 3: QSwipeGesture::d_func()->setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QTapGesture_t {
    QByteArrayData data[2];
    char stringdata[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTapGesture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTapGesture_t qt_meta_stringdata_QTapGesture = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 8)
    },
    "QTapGesture\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTapGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,

       0        // eod
};

void QTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QTapGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QTapGesture.data,
      qt_meta_data_QTapGesture,  qt_static_metacall, 0, 0}
};


const QMetaObject *QTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTapGesture.stringdata))
        return static_cast<void*>(const_cast< QTapGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QTapGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = position(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPosition(*reinterpret_cast< QPointF*>(_v)); break;
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
struct qt_meta_stringdata_QTapAndHoldGesture_t {
    QByteArrayData data[2];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTapAndHoldGesture_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTapAndHoldGesture_t qt_meta_stringdata_QTapAndHoldGesture = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 8)
    },
    "QTapAndHoldGesture\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTapAndHoldGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,

       0        // eod
};

void QTapAndHoldGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QTapAndHoldGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QTapAndHoldGesture.data,
      qt_meta_data_QTapAndHoldGesture,  qt_static_metacall, 0, 0}
};


const QMetaObject *QTapAndHoldGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapAndHoldGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTapAndHoldGesture.stringdata))
        return static_cast<void*>(const_cast< QTapAndHoldGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QTapAndHoldGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = position(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setPosition(*reinterpret_cast< QPointF*>(_v)); break;
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
