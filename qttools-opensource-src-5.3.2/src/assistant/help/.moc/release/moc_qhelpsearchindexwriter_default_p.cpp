/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchindexwriter_default_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhelpsearchindexwriter_default_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchindexwriter_default_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_fulltextsearch__std__QHelpSearchIndexWriter_t {
    QByteArrayData data[4];
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fulltextsearch__std__QHelpSearchIndexWriter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fulltextsearch__std__QHelpSearchIndexWriter_t qt_meta_stringdata_fulltextsearch__std__QHelpSearchIndexWriter = {
    {
QT_MOC_LITERAL(0, 0, 43),
QT_MOC_LITERAL(1, 44, 15),
QT_MOC_LITERAL(2, 60, 0),
QT_MOC_LITERAL(3, 61, 16)
    },
    "fulltextsearch::std::QHelpSearchIndexWriter\0"
    "indexingStarted\0\0indexingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fulltextsearch__std__QHelpSearchIndexWriter[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void fulltextsearch::std::QHelpSearchIndexWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpSearchIndexWriter *_t = static_cast<QHelpSearchIndexWriter *>(_o);
        switch (_id) {
        case 0: _t->indexingStarted(); break;
        case 1: _t->indexingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHelpSearchIndexWriter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHelpSearchIndexWriter::indexingStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (QHelpSearchIndexWriter::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHelpSearchIndexWriter::indexingFinished)) {
                *result = 1;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject fulltextsearch::std::QHelpSearchIndexWriter::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_fulltextsearch__std__QHelpSearchIndexWriter.data,
      qt_meta_data_fulltextsearch__std__QHelpSearchIndexWriter,  qt_static_metacall, 0, 0}
};


const QMetaObject *fulltextsearch::std::QHelpSearchIndexWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fulltextsearch::std::QHelpSearchIndexWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_fulltextsearch__std__QHelpSearchIndexWriter.stringdata))
        return static_cast<void*>(const_cast< QHelpSearchIndexWriter*>(this));
    return QThread::qt_metacast(_clname);
}

int fulltextsearch::std::QHelpSearchIndexWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void fulltextsearch::std::QHelpSearchIndexWriter::indexingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void fulltextsearch::std::QHelpSearchIndexWriter::indexingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE