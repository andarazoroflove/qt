/****************************************************************************
** Meta object code from reading C++ file 'qdial.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../widgets/qdial.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDial[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   24, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,    7,    6,    6, 0x0a,
      42,   39,    6,    6, 0x0a,

 // properties: name, type, flags
      65,   60, 0x01095103,
      78,   74, 0x02095001,
      94,   88, ((uint)QMetaType::QReal << 24) | 0x00095103,
     106,   60, 0x01095103,

       0        // eod
};

static const char qt_meta_stringdata_QDial[] = {
    "QDial\0\0visible\0setNotchesVisible(bool)\0"
    "on\0setWrapping(bool)\0bool\0wrapping\0"
    "int\0notchSize\0qreal\0notchTarget\0"
    "notchesVisible\0"
};

void QDial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDial *_t = static_cast<QDial *>(_o);
        switch (_id) {
        case 0: _t->setNotchesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setWrapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDial::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDial::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_QDial,
      qt_meta_data_QDial, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDial::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDial::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDial))
        return static_cast<void*>(const_cast< QDial*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int QDial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = wrapping(); break;
        case 1: *reinterpret_cast< int*>(_v) = notchSize(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = notchTarget(); break;
        case 3: *reinterpret_cast< bool*>(_v) = notchesVisible(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 2: setNotchTarget(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setNotchesVisible(*reinterpret_cast< bool*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
