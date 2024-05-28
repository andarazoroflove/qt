/****************************************************************************
** Meta object code from reading C++ file 'qwindowsnativeinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwindowsnativeinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsnativeinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWindowsNativeInterface_t {
    QByteArrayData data[10];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsNativeInterface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsNativeInterface_t qt_meta_stringdata_QWindowsNativeInterface = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 19),
QT_MOC_LITERAL(2, 44, 0),
QT_MOC_LITERAL(3, 45, 17),
QT_MOC_LITERAL(4, 63, 10),
QT_MOC_LITERAL(5, 74, 9),
QT_MOC_LITERAL(6, 84, 19),
QT_MOC_LITERAL(7, 104, 11),
QT_MOC_LITERAL(8, 116, 4),
QT_MOC_LITERAL(9, 121, 11)
    },
    "QWindowsNativeInterface\0createMessageWindow\0"
    "\0classNameTemplate\0windowName\0eventProc\0"
    "registerWindowClass\0classNameIn\0beep\0"
    "asyncExpose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsNativeInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x02 /* Public */,
       6,    2,   36,    2, 0x02 /* Public */,
       8,    0,   41,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::VoidStar, QMetaType::QString, QMetaType::QString, QMetaType::VoidStar,    3,    4,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::VoidStar,    7,    5,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QWindowsNativeInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsNativeInterface *_t = static_cast<QWindowsNativeInterface *>(_o);
        switch (_id) {
        case 0: { void* _r = _t->createMessageWindow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->registerWindowClass((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->beep(); break;
        default: ;
        }
    }
}

const QMetaObject QWindowsNativeInterface::staticMetaObject = {
    { &QPlatformNativeInterface::staticMetaObject, qt_meta_stringdata_QWindowsNativeInterface.data,
      qt_meta_data_QWindowsNativeInterface,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWindowsNativeInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsNativeInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsNativeInterface.stringdata))
        return static_cast<void*>(const_cast< QWindowsNativeInterface*>(this));
    return QPlatformNativeInterface::qt_metacast(_clname);
}

int QWindowsNativeInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformNativeInterface::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< bool*>(_v) = asyncExpose(); break;
        default: break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setAsyncExpose(*reinterpret_cast< bool*>(_v)); break;
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
