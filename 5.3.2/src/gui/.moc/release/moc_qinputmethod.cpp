/****************************************************************************
** Meta object code from reading C++ file 'qinputmethod.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qinputmethod.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputmethod.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QInputMethod_t {
    QByteArrayData data[29];
    char stringdata[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInputMethod_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInputMethod_t qt_meta_stringdata_QInputMethod = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 22),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 24),
QT_MOC_LITERAL(4, 62, 14),
QT_MOC_LITERAL(5, 77, 16),
QT_MOC_LITERAL(6, 94, 13),
QT_MOC_LITERAL(7, 108, 21),
QT_MOC_LITERAL(8, 130, 19),
QT_MOC_LITERAL(9, 150, 12),
QT_MOC_LITERAL(10, 163, 4),
QT_MOC_LITERAL(11, 168, 4),
QT_MOC_LITERAL(12, 173, 6),
QT_MOC_LITERAL(13, 180, 22),
QT_MOC_LITERAL(14, 203, 7),
QT_MOC_LITERAL(15, 211, 5),
QT_MOC_LITERAL(16, 217, 6),
QT_MOC_LITERAL(17, 224, 12),
QT_MOC_LITERAL(18, 237, 6),
QT_MOC_LITERAL(19, 244, 1),
QT_MOC_LITERAL(20, 246, 14),
QT_MOC_LITERAL(21, 261, 15),
QT_MOC_LITERAL(22, 277, 17),
QT_MOC_LITERAL(23, 295, 7),
QT_MOC_LITERAL(24, 303, 9),
QT_MOC_LITERAL(25, 313, 6),
QT_MOC_LITERAL(26, 320, 14),
QT_MOC_LITERAL(27, 335, 5),
QT_MOC_LITERAL(28, 341, 11)
    },
    "QInputMethod\0cursorRectangleChanged\0"
    "\0keyboardRectangleChanged\0visibleChanged\0"
    "animatingChanged\0localeChanged\0"
    "inputDirectionChanged\0Qt::LayoutDirection\0"
    "newDirection\0show\0hide\0update\0"
    "Qt::InputMethodQueries\0queries\0reset\0"
    "commit\0invokeAction\0Action\0a\0"
    "cursorPosition\0cursorRectangle\0"
    "keyboardRectangle\0visible\0animating\0"
    "locale\0inputDirection\0Click\0ContextMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInputMethod[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       6,   94, // properties
       1,  118, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    0,   76,    2, 0x06 /* Public */,
       5,    0,   77,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   82,    2, 0x0a /* Public */,
      11,    0,   83,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      15,    0,   87,    2, 0x0a /* Public */,
      16,    0,   88,    2, 0x0a /* Public */,
      17,    2,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18, QMetaType::Int,   19,   20,

 // properties: name, type, flags
      21, QMetaType::QRectF, 0x00495001,
      22, QMetaType::QRectF, 0x00495001,
      23, QMetaType::Bool, 0x00495001,
      24, QMetaType::Bool, 0x00495001,
      25, QMetaType::QLocale, 0x00495001,
      26, 0x80000000 | 8, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,

 // enums: name, flags, count, data
      18, 0x0,    2,  122,

 // enum data: key, value
      27, uint(QInputMethod::Click),
      28, uint(QInputMethod::ContextMenu),

       0        // eod
};

void QInputMethod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInputMethod *_t = static_cast<QInputMethod *>(_o);
        switch (_id) {
        case 0: _t->cursorRectangleChanged(); break;
        case 1: _t->keyboardRectangleChanged(); break;
        case 2: _t->visibleChanged(); break;
        case 3: _t->animatingChanged(); break;
        case 4: _t->localeChanged(); break;
        case 5: _t->inputDirectionChanged((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1]))); break;
        case 6: _t->show(); break;
        case 7: _t->hide(); break;
        case 8: _t->update((*reinterpret_cast< Qt::InputMethodQueries(*)>(_a[1]))); break;
        case 9: _t->reset(); break;
        case 10: _t->commit(); break;
        case 11: _t->invokeAction((*reinterpret_cast< Action(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QInputMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputMethod::cursorRectangleChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QInputMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputMethod::keyboardRectangleChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QInputMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputMethod::visibleChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (QInputMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputMethod::animatingChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (QInputMethod::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputMethod::localeChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (QInputMethod::*_t)(Qt::LayoutDirection );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputMethod::inputDirectionChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject QInputMethod::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QInputMethod.data,
      qt_meta_data_QInputMethod,  qt_static_metacall, 0, 0}
};


const QMetaObject *QInputMethod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputMethod::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QInputMethod.stringdata))
        return static_cast<void*>(const_cast< QInputMethod*>(this));
    return QObject::qt_metacast(_clname);
}

int QInputMethod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        case 0: *reinterpret_cast< QRectF*>(_v) = cursorRectangle(); break;
        case 1: *reinterpret_cast< QRectF*>(_v) = keyboardRectangle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isVisible(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isAnimating(); break;
        case 4: *reinterpret_cast< QLocale*>(_v) = locale(); break;
        case 5: *reinterpret_cast< Qt::LayoutDirection*>(_v) = inputDirection(); break;
        default: break;
        }
        _id -= 6;
    } else if (_c == QMetaObject::WriteProperty) {
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

// SIGNAL 0
void QInputMethod::cursorRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QInputMethod::keyboardRectangleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QInputMethod::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QInputMethod::animatingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QInputMethod::localeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void QInputMethod::inputDirectionChanged(Qt::LayoutDirection _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
