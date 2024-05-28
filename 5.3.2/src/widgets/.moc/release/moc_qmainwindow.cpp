/****************************************************************************
** Meta object code from reading C++ file 'qmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMainWindow_t {
    QByteArrayData data[24];
    char stringdata[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMainWindow_t qt_meta_stringdata_QMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 15),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 8),
QT_MOC_LITERAL(4, 38, 22),
QT_MOC_LITERAL(5, 61, 19),
QT_MOC_LITERAL(6, 81, 15),
QT_MOC_LITERAL(7, 97, 11),
QT_MOC_LITERAL(8, 109, 7),
QT_MOC_LITERAL(9, 117, 21),
QT_MOC_LITERAL(10, 139, 8),
QT_MOC_LITERAL(11, 148, 12),
QT_MOC_LITERAL(12, 161, 8),
QT_MOC_LITERAL(13, 170, 20),
QT_MOC_LITERAL(14, 191, 18),
QT_MOC_LITERAL(15, 210, 11),
QT_MOC_LITERAL(16, 222, 11),
QT_MOC_LITERAL(17, 234, 27),
QT_MOC_LITERAL(18, 262, 10),
QT_MOC_LITERAL(19, 273, 13),
QT_MOC_LITERAL(20, 287, 16),
QT_MOC_LITERAL(21, 304, 16),
QT_MOC_LITERAL(22, 321, 16),
QT_MOC_LITERAL(23, 338, 12)
    },
    "QMainWindow\0iconSizeChanged\0\0iconSize\0"
    "toolButtonStyleChanged\0Qt::ToolButtonStyle\0"
    "toolButtonStyle\0setAnimated\0enabled\0"
    "setDockNestingEnabled\0animated\0"
    "documentMode\0tabShape\0QTabWidget::TabShape\0"
    "dockNestingEnabled\0dockOptions\0"
    "DockOptions\0unifiedTitleAndToolBarOnMac\0"
    "DockOption\0AnimatedDocks\0AllowNestedDocks\0"
    "AllowTabbedDocks\0ForceTabbedDocks\0"
    "VerticalTabs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       8,   46, // properties
       2,   70, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   40,    2, 0x0a /* Public */,
       9,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,

 // properties: name, type, flags
       3, QMetaType::QSize, 0x00095103,
       6, 0x80000000 | 5, 0x0009510b,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::Bool, 0x00095103,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      18, 0x0,    5,   78,
      16, 0x1,    5,   88,

 // enum data: key, value
      19, uint(QMainWindow::AnimatedDocks),
      20, uint(QMainWindow::AllowNestedDocks),
      21, uint(QMainWindow::AllowTabbedDocks),
      22, uint(QMainWindow::ForceTabbedDocks),
      23, uint(QMainWindow::VerticalTabs),
      19, uint(QMainWindow::AnimatedDocks),
      20, uint(QMainWindow::AllowNestedDocks),
      21, uint(QMainWindow::AllowTabbedDocks),
      22, uint(QMainWindow::ForceTabbedDocks),
      23, uint(QMainWindow::VerticalTabs),

       0        // eod
};

void QMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMainWindow *_t = static_cast<QMainWindow *>(_o);
        switch (_id) {
        case 0: _t->iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->toolButtonStyleChanged((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 2: _t->setAnimated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDockNestingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMainWindow::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMainWindow::iconSizeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QMainWindow::*_t)(Qt::ToolButtonStyle );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMainWindow::toolButtonStyleChanged)) {
                *result = 1;
            }
        }
    }
}

static const QMetaObject * const qt_meta_extradata_QMainWindow[] = {
        &QTabWidget::staticMetaObject,
    0
};

const QMetaObject QMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMainWindow.data,
      qt_meta_data_QMainWindow,  qt_static_metacall, qt_meta_extradata_QMainWindow, 0}
};


const QMetaObject *QMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMainWindow.stringdata))
        return static_cast<void*>(const_cast< QMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = iconSize(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = isAnimated(); break;
        case 3: *reinterpret_cast< bool*>(_v) = documentMode(); break;
        case 4: *reinterpret_cast< QTabWidget::TabShape*>(_v) = tabShape(); break;
        case 5: *reinterpret_cast< bool*>(_v) = isDockNestingEnabled(); break;
        case 6: *reinterpret_cast<int*>(_v) = QFlag(dockOptions()); break;
        case 7: *reinterpret_cast< bool*>(_v) = unifiedTitleAndToolBarOnMac(); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 1: setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 3: setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: setTabShape(*reinterpret_cast< QTabWidget::TabShape*>(_v)); break;
        case 5: setDockNestingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: setDockOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 7: setUnifiedTitleAndToolBarOnMac(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 8;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMainWindow::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
