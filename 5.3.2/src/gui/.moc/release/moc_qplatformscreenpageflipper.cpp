/****************************************************************************
** Meta object code from reading C++ file 'qplatformscreenpageflipper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformscreenpageflipper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformscreenpageflipper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlatformScreenPageFlipper_t {
    QByteArrayData data[5];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformScreenPageFlipper_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformScreenPageFlipper_t qt_meta_stringdata_QPlatformScreenPageFlipper = {
    {
QT_MOC_LITERAL(0, 0, 26),
QT_MOC_LITERAL(1, 27, 15),
QT_MOC_LITERAL(2, 43, 0),
QT_MOC_LITERAL(3, 44, 22),
QT_MOC_LITERAL(4, 67, 14)
    },
    "QPlatformScreenPageFlipper\0bufferDisplayed\0"
    "\0QPlatformScreenBuffer*\0bufferReleased"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformScreenPageFlipper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void QPlatformScreenPageFlipper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformScreenPageFlipper *_t = static_cast<QPlatformScreenPageFlipper *>(_o);
        switch (_id) {
        case 0: _t->bufferDisplayed((*reinterpret_cast< QPlatformScreenBuffer*(*)>(_a[1]))); break;
        case 1: _t->bufferReleased((*reinterpret_cast< QPlatformScreenBuffer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformScreenPageFlipper::*_t)(QPlatformScreenBuffer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformScreenPageFlipper::bufferDisplayed)) {
                *result = 0;
            }
        }
        {
            typedef void (QPlatformScreenPageFlipper::*_t)(QPlatformScreenBuffer * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformScreenPageFlipper::bufferReleased)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QPlatformScreenPageFlipper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformScreenPageFlipper.data,
      qt_meta_data_QPlatformScreenPageFlipper,  qt_static_metacall, 0, 0}
};


const QMetaObject *QPlatformScreenPageFlipper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformScreenPageFlipper::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformScreenPageFlipper.stringdata))
        return static_cast<void*>(const_cast< QPlatformScreenPageFlipper*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformScreenPageFlipper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformScreenPageFlipper::bufferDisplayed(QPlatformScreenBuffer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformScreenPageFlipper::bufferReleased(QPlatformScreenBuffer * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
