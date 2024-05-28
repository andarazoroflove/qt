/****************************************************************************
** Meta object code from reading C++ file 'qwindowspipereader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qwindowspipereader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowspipereader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWindowsPipeReader_t {
    QByteArrayData data[10];
    char stringdata[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsPipeReader_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsPipeReader_t qt_meta_stringdata_QWindowsPipeReader = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 8),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 9),
QT_MOC_LITERAL(4, 39, 10),
QT_MOC_LITERAL(5, 50, 8),
QT_MOC_LITERAL(6, 59, 17),
QT_MOC_LITERAL(7, 77, 9),
QT_MOC_LITERAL(8, 87, 11),
QT_MOC_LITERAL(9, 99, 18)
    },
    "QWindowsPipeReader\0winError\0\0readyRead\0"
    "pipeClosed\0notified\0numberOfBytesRead\0"
    "errorCode\0OVERLAPPED*\0notifiedOverlapped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsPipeReader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       3,    0,   39,    2, 0x06 /* Public */,
       4,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    3,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::ULong, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 8,    6,    7,    9,

       0        // eod
};

void QWindowsPipeReader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsPipeReader *_t = static_cast<QWindowsPipeReader *>(_o);
        switch (_id) {
        case 0: _t->winError((*reinterpret_cast< ulong(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->readyRead(); break;
        case 2: _t->pipeClosed(); break;
        case 3: _t->notified((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< OVERLAPPED*(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWindowsPipeReader::*_t)(ulong , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindowsPipeReader::winError)) {
                *result = 0;
            }
        }
        {
            typedef void (QWindowsPipeReader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindowsPipeReader::readyRead)) {
                *result = 1;
            }
        }
        {
            typedef void (QWindowsPipeReader::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindowsPipeReader::pipeClosed)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QWindowsPipeReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWindowsPipeReader.data,
      qt_meta_data_QWindowsPipeReader,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWindowsPipeReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsPipeReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsPipeReader.stringdata))
        return static_cast<void*>(const_cast< QWindowsPipeReader*>(this));
    return QObject::qt_metacast(_clname);
}

int QWindowsPipeReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QWindowsPipeReader::winError(ulong _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWindowsPipeReader::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QWindowsPipeReader::pipeClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
