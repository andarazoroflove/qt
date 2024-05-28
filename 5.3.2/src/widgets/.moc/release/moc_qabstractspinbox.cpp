/****************************************************************************
** Meta object code from reading C++ file 'qabstractspinbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qabstractspinbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractspinbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractSpinBox_t {
    QByteArrayData data[29];
    char stringdata[388];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractSpinBox_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractSpinBox_t qt_meta_stringdata_QAbstractSpinBox = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 6),
QT_MOC_LITERAL(4, 41, 8),
QT_MOC_LITERAL(5, 50, 9),
QT_MOC_LITERAL(6, 60, 5),
QT_MOC_LITERAL(7, 66, 20),
QT_MOC_LITERAL(8, 87, 30),
QT_MOC_LITERAL(9, 118, 8),
QT_MOC_LITERAL(10, 127, 5),
QT_MOC_LITERAL(11, 133, 9),
QT_MOC_LITERAL(12, 143, 13),
QT_MOC_LITERAL(13, 157, 8),
QT_MOC_LITERAL(14, 166, 13),
QT_MOC_LITERAL(15, 180, 13),
QT_MOC_LITERAL(16, 194, 16),
QT_MOC_LITERAL(17, 211, 4),
QT_MOC_LITERAL(18, 216, 11),
QT_MOC_LITERAL(19, 228, 14),
QT_MOC_LITERAL(20, 243, 14),
QT_MOC_LITERAL(21, 258, 15),
QT_MOC_LITERAL(22, 274, 16),
QT_MOC_LITERAL(23, 291, 18),
QT_MOC_LITERAL(24, 310, 12),
QT_MOC_LITERAL(25, 323, 9),
QT_MOC_LITERAL(26, 333, 9),
QT_MOC_LITERAL(27, 343, 22),
QT_MOC_LITERAL(28, 366, 21)
    },
    "QAbstractSpinBox\0editingFinished\0\0"
    "stepUp\0stepDown\0selectAll\0clear\0"
    "_q_editorTextChanged\0"
    "_q_editorCursorPositionChanged\0wrapping\0"
    "frame\0alignment\0Qt::Alignment\0readOnly\0"
    "buttonSymbols\0ButtonSymbols\0"
    "specialValueText\0text\0accelerated\0"
    "correctionMode\0CorrectionMode\0"
    "acceptableInput\0keyboardTracking\0"
    "showGroupSeparator\0UpDownArrows\0"
    "PlusMinus\0NoButtons\0CorrectToPreviousValue\0"
    "CorrectToNearestValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractSpinBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      12,   62, // properties
       2,   98, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x0a /* Public */,
       4,    0,   51,    2, 0x0a /* Public */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    1,   54,    2, 0x08 /* Private */,
       8,    2,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, 0x80000000 | 12, 0x0009510b,
      13, QMetaType::Bool, 0x00095103,
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::QString, 0x00095103,
      17, QMetaType::QString, 0x00095001,
      18, QMetaType::Bool, 0x00095103,
      19, 0x80000000 | 20, 0x0009510b,
      21, QMetaType::Bool, 0x00095001,
      22, QMetaType::Bool, 0x00095103,
      23, QMetaType::Bool, 0x00095003,

 // enums: name, flags, count, data
      15, 0x0,    3,  106,
      20, 0x0,    2,  112,

 // enum data: key, value
      24, uint(QAbstractSpinBox::UpDownArrows),
      25, uint(QAbstractSpinBox::PlusMinus),
      26, uint(QAbstractSpinBox::NoButtons),
      27, uint(QAbstractSpinBox::CorrectToPreviousValue),
      28, uint(QAbstractSpinBox::CorrectToNearestValue),

       0        // eod
};

void QAbstractSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractSpinBox *_t = static_cast<QAbstractSpinBox *>(_o);
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->stepUp(); break;
        case 2: _t->stepDown(); break;
        case 3: _t->selectAll(); break;
        case 4: _t->clear(); break;
        case 5: _t->d_func()->_q_editorTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_editorCursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractSpinBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSpinBox::editingFinished)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QAbstractSpinBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAbstractSpinBox.data,
      qt_meta_data_QAbstractSpinBox,  qt_static_metacall, 0, 0}
};


const QMetaObject *QAbstractSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractSpinBox.stringdata))
        return static_cast<void*>(const_cast< QAbstractSpinBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int QAbstractSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = wrapping(); break;
        case 1: *reinterpret_cast< bool*>(_v) = hasFrame(); break;
        case 2: *reinterpret_cast< Qt::Alignment*>(_v) = alignment(); break;
        case 3: *reinterpret_cast< bool*>(_v) = isReadOnly(); break;
        case 4: *reinterpret_cast< ButtonSymbols*>(_v) = buttonSymbols(); break;
        case 5: *reinterpret_cast< QString*>(_v) = specialValueText(); break;
        case 6: *reinterpret_cast< QString*>(_v) = text(); break;
        case 7: *reinterpret_cast< bool*>(_v) = isAccelerated(); break;
        case 8: *reinterpret_cast< CorrectionMode*>(_v) = correctionMode(); break;
        case 9: *reinterpret_cast< bool*>(_v) = hasAcceptableInput(); break;
        case 10: *reinterpret_cast< bool*>(_v) = keyboardTracking(); break;
        case 11: *reinterpret_cast< bool*>(_v) = isGroupSeparatorShown(); break;
        default: break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 1: setFrame(*reinterpret_cast< bool*>(_v)); break;
        case 2: setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 3: setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 4: setButtonSymbols(*reinterpret_cast< ButtonSymbols*>(_v)); break;
        case 5: setSpecialValueText(*reinterpret_cast< QString*>(_v)); break;
        case 7: setAccelerated(*reinterpret_cast< bool*>(_v)); break;
        case 8: setCorrectionMode(*reinterpret_cast< CorrectionMode*>(_v)); break;
        case 10: setKeyboardTracking(*reinterpret_cast< bool*>(_v)); break;
        case 11: setGroupSeparatorShown(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
        _id -= 12;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 12;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 12;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractSpinBox::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
