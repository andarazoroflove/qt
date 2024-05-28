/****************************************************************************
** Meta object code from reading C++ file 'qapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QApplication_t {
    QByteArrayData data[22];
    char stringdata[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QApplication_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QApplication_t qt_meta_stringdata_QApplication = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 12),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 8),
QT_MOC_LITERAL(4, 36, 3),
QT_MOC_LITERAL(5, 40, 3),
QT_MOC_LITERAL(6, 44, 13),
QT_MOC_LITERAL(7, 58, 5),
QT_MOC_LITERAL(8, 64, 17),
QT_MOC_LITERAL(9, 82, 7),
QT_MOC_LITERAL(10, 90, 14),
QT_MOC_LITERAL(11, 105, 15),
QT_MOC_LITERAL(12, 121, 7),
QT_MOC_LITERAL(13, 129, 10),
QT_MOC_LITERAL(14, 140, 15),
QT_MOC_LITERAL(15, 156, 19),
QT_MOC_LITERAL(16, 176, 21),
QT_MOC_LITERAL(17, 198, 16),
QT_MOC_LITERAL(18, 215, 11),
QT_MOC_LITERAL(19, 227, 13),
QT_MOC_LITERAL(20, 241, 17),
QT_MOC_LITERAL(21, 259, 10)
    },
    "QApplication\0focusChanged\0\0QWidget*\0"
    "old\0now\0setStyleSheet\0sheet\0"
    "setAutoSipEnabled\0enabled\0autoSipEnabled\0"
    "closeAllWindows\0aboutQt\0windowIcon\0"
    "cursorFlashTime\0doubleClickInterval\0"
    "keyboardInputInterval\0wheelScrollLines\0"
    "globalStrut\0startDragTime\0startDragDistance\0"
    "styleSheet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      10,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,
      11,    0,   56,    2, 0x0a /* Public */,
      12,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::QIcon, 0x00095103,
      14, QMetaType::Int, 0x00095103,
      15, QMetaType::Int, 0x00095103,
      16, QMetaType::Int, 0x00095103,
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::QSize, 0x00095103,
      19, QMetaType::Int, 0x00095103,
      20, QMetaType::Int, 0x00095103,
      21, QMetaType::QString, 0x00095103,
      10, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QApplication *_t = static_cast<QApplication *>(_o);
        switch (_id) {
        case 0: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 1: _t->setStyleSheet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->setAutoSipEnabled((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 3: { bool _r = _t->autoSipEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->closeAllWindows(); break;
        case 5: _t->aboutQt(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QApplication::*_t)(QWidget * , QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QApplication::focusChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QApplication::staticMetaObject = {
    { &QGuiApplication::staticMetaObject, qt_meta_stringdata_QApplication.data,
      qt_meta_data_QApplication,  qt_static_metacall, 0, 0}
};


const QMetaObject *QApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QApplication.stringdata))
        return static_cast<void*>(const_cast< QApplication*>(this));
    return QGuiApplication::qt_metacast(_clname);
}

int QApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGuiApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = windowIcon(); break;
        case 1: *reinterpret_cast< int*>(_v) = cursorFlashTime(); break;
        case 2: *reinterpret_cast< int*>(_v) = doubleClickInterval(); break;
        case 3: *reinterpret_cast< int*>(_v) = keyboardInputInterval(); break;
        case 4: *reinterpret_cast< int*>(_v) = wheelScrollLines(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = globalStrut(); break;
        case 6: *reinterpret_cast< int*>(_v) = startDragTime(); break;
        case 7: *reinterpret_cast< int*>(_v) = startDragDistance(); break;
        case 8: *reinterpret_cast< QString*>(_v) = styleSheet(); break;
        case 9: *reinterpret_cast< bool*>(_v) = autoSipEnabled(); break;
        default: break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: setCursorFlashTime(*reinterpret_cast< int*>(_v)); break;
        case 2: setDoubleClickInterval(*reinterpret_cast< int*>(_v)); break;
        case 3: setKeyboardInputInterval(*reinterpret_cast< int*>(_v)); break;
        case 4: setWheelScrollLines(*reinterpret_cast< int*>(_v)); break;
        case 5: setGlobalStrut(*reinterpret_cast< QSize*>(_v)); break;
        case 6: setStartDragTime(*reinterpret_cast< int*>(_v)); break;
        case 7: setStartDragDistance(*reinterpret_cast< int*>(_v)); break;
        case 8: setStyleSheet(*reinterpret_cast< QString*>(_v)); break;
        case 9: setAutoSipEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 10;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QApplication::focusChanged(QWidget * _t1, QWidget * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
