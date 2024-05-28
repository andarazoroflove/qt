/****************************************************************************
** Meta object code from reading C++ file 'qguiapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qguiapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qguiapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGuiApplication_t {
    QByteArrayData data[27];
    char stringdata[405];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGuiApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGuiApplication_t qt_meta_stringdata_QGuiApplication = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 19),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 11),
QT_MOC_LITERAL(4, 49, 8),
QT_MOC_LITERAL(5, 58, 6),
QT_MOC_LITERAL(6, 65, 16),
QT_MOC_LITERAL(7, 82, 18),
QT_MOC_LITERAL(8, 101, 11),
QT_MOC_LITERAL(9, 113, 18),
QT_MOC_LITERAL(10, 132, 8),
QT_MOC_LITERAL(11, 141, 11),
QT_MOC_LITERAL(12, 153, 23),
QT_MOC_LITERAL(13, 177, 20),
QT_MOC_LITERAL(14, 198, 5),
QT_MOC_LITERAL(15, 204, 17),
QT_MOC_LITERAL(16, 222, 16),
QT_MOC_LITERAL(17, 239, 14),
QT_MOC_LITERAL(18, 254, 16),
QT_MOC_LITERAL(19, 271, 20),
QT_MOC_LITERAL(20, 292, 6),
QT_MOC_LITERAL(21, 299, 10),
QT_MOC_LITERAL(22, 310, 22),
QT_MOC_LITERAL(23, 333, 15),
QT_MOC_LITERAL(24, 349, 19),
QT_MOC_LITERAL(25, 369, 12),
QT_MOC_LITERAL(26, 382, 22)
    },
    "QGuiApplication\0fontDatabaseChanged\0"
    "\0screenAdded\0QScreen*\0screen\0"
    "lastWindowClosed\0focusObjectChanged\0"
    "focusObject\0focusWindowChanged\0QWindow*\0"
    "focusWindow\0applicationStateChanged\0"
    "Qt::ApplicationState\0state\0commitDataRequest\0"
    "QSessionManager&\0sessionManager\0"
    "saveStateRequest\0_q_updateFocusObject\0"
    "object\0windowIcon\0applicationDisplayName\0"
    "layoutDirection\0Qt::LayoutDirection\0"
    "platformName\0quitOnLastWindowClosed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGuiApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,
       9,    1,   67,    2, 0x06 /* Public */,
      12,    1,   70,    2, 0x06 /* Public */,
      15,    1,   73,    2, 0x06 /* Public */,
      18,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    1,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   20,

 // properties: name, type, flags
      21, QMetaType::QIcon, 0x00095103,
      22, QMetaType::QString, 0x00095103,
      23, 0x80000000 | 24, 0x0009510b,
      25, QMetaType::QString, 0x00085001,
      26, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QGuiApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        switch (_id) {
        case 0: _t->fontDatabaseChanged(); break;
        case 1: _t->screenAdded((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 2: _t->lastWindowClosed(); break;
        case 3: _t->focusObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->focusWindowChanged((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 5: _t->applicationStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 6: _t->commitDataRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 7: _t->saveStateRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_updateFocusObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGuiApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::fontDatabaseChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::screenAdded)) {
                *result = 1;
            }
        }
        {
            typedef void (QGuiApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::lastWindowClosed)) {
                *result = 2;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::focusObjectChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QWindow * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::focusWindowChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(Qt::ApplicationState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::applicationStateChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QSessionManager & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::commitDataRequest)) {
                *result = 6;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QSessionManager & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::saveStateRequest)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject QGuiApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_QGuiApplication.data,
      qt_meta_data_QGuiApplication,  qt_static_metacall, 0, 0}
};


const QMetaObject *QGuiApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGuiApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QGuiApplication.stringdata))
        return static_cast<void*>(const_cast< QGuiApplication*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int QGuiApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = windowIcon(); break;
        case 1: *reinterpret_cast< QString*>(_v) = applicationDisplayName(); break;
        case 2: *reinterpret_cast< Qt::LayoutDirection*>(_v) = layoutDirection(); break;
        case 3: *reinterpret_cast< QString*>(_v) = platformName(); break;
        case 4: *reinterpret_cast< bool*>(_v) = quitOnLastWindowClosed(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: setApplicationDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 2: setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 4: setQuitOnLastWindowClosed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGuiApplication::fontDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QGuiApplication::screenAdded(QScreen * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGuiApplication::lastWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QGuiApplication::focusObjectChanged(QObject * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGuiApplication::focusWindowChanged(QWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QGuiApplication::applicationStateChanged(Qt::ApplicationState _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGuiApplication::commitDataRequest(QSessionManager & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGuiApplication::saveStateRequest(QSessionManager & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
