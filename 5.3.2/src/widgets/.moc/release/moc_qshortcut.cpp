/****************************************************************************
** Meta object code from reading C++ file 'qshortcut.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qshortcut.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qshortcut.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QShortcut_t {
    QByteArrayData data[10];
    char stringdata[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QShortcut_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QShortcut_t qt_meta_stringdata_QShortcut = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 9),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 20),
QT_MOC_LITERAL(4, 42, 3),
QT_MOC_LITERAL(5, 46, 9),
QT_MOC_LITERAL(6, 56, 7),
QT_MOC_LITERAL(7, 64, 10),
QT_MOC_LITERAL(8, 75, 7),
QT_MOC_LITERAL(9, 83, 19)
    },
    "QShortcut\0activated\0\0activatedAmbiguously\0"
    "key\0whatsThis\0enabled\0autoRepeat\0"
    "context\0Qt::ShortcutContext"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QShortcut[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::QKeySequence, 0x00095103,
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, 0x80000000 | 9, 0x0009510b,

       0        // eod
};

void QShortcut::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QShortcut *_t = static_cast<QShortcut *>(_o);
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->activatedAmbiguously(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QShortcut::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QShortcut::activated)) {
                *result = 0;
            }
        }
        {
            typedef void (QShortcut::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QShortcut::activatedAmbiguously)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QShortcut::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QShortcut.data,
      qt_meta_data_QShortcut,  qt_static_metacall, 0, 0}
};


const QMetaObject *QShortcut::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QShortcut::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QShortcut.stringdata))
        return static_cast<void*>(const_cast< QShortcut*>(this));
    return QObject::qt_metacast(_clname);
}

int QShortcut::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QKeySequence*>(_v) = key(); break;
        case 1: *reinterpret_cast< QString*>(_v) = whatsThis(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = autoRepeat(); break;
        case 4: *reinterpret_cast< Qt::ShortcutContext*>(_v) = context(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setKey(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 1: setWhatsThis(*reinterpret_cast< QString*>(_v)); break;
        case 2: setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: setAutoRepeat(*reinterpret_cast< bool*>(_v)); break;
        case 4: setContext(*reinterpret_cast< Qt::ShortcutContext*>(_v)); break;
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
void QShortcut::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QShortcut::activatedAmbiguously()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
