/****************************************************************************
** Meta object code from reading C++ file 'qmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMenu_t {
    QByteArrayData data[19];
    char stringdata[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMenu_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMenu_t qt_meta_stringdata_QMenu = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 11),
QT_MOC_LITERAL(2, 18, 0),
QT_MOC_LITERAL(3, 19, 11),
QT_MOC_LITERAL(4, 31, 9),
QT_MOC_LITERAL(5, 41, 8),
QT_MOC_LITERAL(6, 50, 6),
QT_MOC_LITERAL(7, 57, 7),
QT_MOC_LITERAL(8, 65, 23),
QT_MOC_LITERAL(9, 89, 20),
QT_MOC_LITERAL(10, 110, 18),
QT_MOC_LITERAL(11, 129, 16),
QT_MOC_LITERAL(12, 146, 30),
QT_MOC_LITERAL(13, 177, 26),
QT_MOC_LITERAL(14, 204, 14),
QT_MOC_LITERAL(15, 219, 5),
QT_MOC_LITERAL(16, 225, 4),
QT_MOC_LITERAL(17, 230, 21),
QT_MOC_LITERAL(18, 252, 15)
    },
    "QMenu\0aboutToShow\0\0aboutToHide\0triggered\0"
    "QAction*\0action\0hovered\0internalSetSloppyAction\0"
    "internalDelayedPopup\0_q_actionTriggered\0"
    "_q_actionHovered\0_q_overrideMenuActionDestroyed\0"
    "_q_platformMenuAboutToShow\0tearOffEnabled\0"
    "title\0icon\0separatorsCollapsible\0"
    "toolTipsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   72,    2, 0x08 /* Private */,
       9,    0,   73,    2, 0x08 /* Private */,
      10,    0,   74,    2, 0x08 /* Private */,
      11,    0,   75,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00095103,
      15, QMetaType::QString, 0x00095103,
      16, QMetaType::QIcon, 0x00095103,
      17, QMetaType::Bool, 0x00095103,
      18, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMenu *_t = static_cast<QMenu *>(_o);
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        case 2: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->internalSetSloppyAction(); break;
        case 5: _t->internalDelayedPopup(); break;
        case 6: _t->d_func()->_q_actionTriggered(); break;
        case 7: _t->d_func()->_q_actionHovered(); break;
        case 8: _t->d_func()->_q_overrideMenuActionDestroyed(); break;
        case 9: _t->d_func()->_q_platformMenuAboutToShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::aboutToShow)) {
                *result = 0;
            }
        }
        {
            typedef void (QMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::aboutToHide)) {
                *result = 1;
            }
        }
        {
            typedef void (QMenu::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::triggered)) {
                *result = 2;
            }
        }
        {
            typedef void (QMenu::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::hovered)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMenu.data,
      qt_meta_data_QMenu,  qt_static_metacall, 0, 0}
};


const QMetaObject *QMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMenu.stringdata))
        return static_cast<void*>(const_cast< QMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = isTearOffEnabled(); break;
        case 1: *reinterpret_cast< QString*>(_v) = title(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = separatorsCollapsible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = toolTipsVisible(); break;
        default: break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setTearOffEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: setSeparatorsCollapsible(*reinterpret_cast< bool*>(_v)); break;
        case 4: setToolTipsVisible(*reinterpret_cast< bool*>(_v)); break;
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
void QMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QMenu::triggered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMenu::hovered(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
