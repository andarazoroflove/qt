/****************************************************************************
** Meta object code from reading C++ file 'qfileinfogatherer_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qfileinfogatherer_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfileinfogatherer_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFileInfoGatherer_t {
    QByteArrayData data[22];
    char stringdata[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFileInfoGatherer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFileInfoGatherer_t qt_meta_stringdata_QFileInfoGatherer = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 7),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 9),
QT_MOC_LITERAL(4, 37, 32),
QT_MOC_LITERAL(5, 70, 14),
QT_MOC_LITERAL(6, 85, 11),
QT_MOC_LITERAL(7, 97, 12),
QT_MOC_LITERAL(8, 110, 8),
QT_MOC_LITERAL(9, 119, 12),
QT_MOC_LITERAL(10, 132, 15),
QT_MOC_LITERAL(11, 148, 4),
QT_MOC_LITERAL(12, 153, 4),
QT_MOC_LITERAL(13, 158, 13),
QT_MOC_LITERAL(14, 172, 24),
QT_MOC_LITERAL(15, 197, 5),
QT_MOC_LITERAL(16, 203, 10),
QT_MOC_LITERAL(17, 214, 18),
QT_MOC_LITERAL(18, 233, 6),
QT_MOC_LITERAL(19, 240, 15),
QT_MOC_LITERAL(20, 256, 18),
QT_MOC_LITERAL(21, 275, 8)
    },
    "QFileInfoGatherer\0updates\0\0directory\0"
    "QList<QPair<QString,QFileInfo> >\0"
    "newListOfFiles\0listOfFiles\0nameResolved\0"
    "fileName\0resolvedName\0directoryLoaded\0"
    "path\0list\0directoryPath\0"
    "fetchExtendedInformation\0files\0"
    "updateFile\0setResolveSymlinks\0enable\0"
    "setIconProvider\0QFileIconProvider*\0"
    "provider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFileInfoGatherer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    2,   64,    2, 0x06 /* Public */,
       7,    2,   69,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   77,    2, 0x0a /* Public */,
      14,    2,   80,    2, 0x0a /* Public */,
      16,    1,   85,    2, 0x0a /* Public */,
      17,    1,   88,    2, 0x0a /* Public */,
      19,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    1,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,    3,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   11,   15,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void QFileInfoGatherer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFileInfoGatherer *_t = static_cast<QFileInfoGatherer *>(_o);
        switch (_id) {
        case 0: _t->updates((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QList<QPair<QString,QFileInfo> >(*)>(_a[2]))); break;
        case 1: _t->newListOfFiles((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 2: _t->nameResolved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->directoryLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->list((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->fetchExtendedInformation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 6: _t->updateFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setResolveSymlinks((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setIconProvider((*reinterpret_cast< QFileIconProvider*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFileInfoGatherer::*_t)(const QString & , const QList<QPair<QString,QFileInfo> > & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileInfoGatherer::updates)) {
                *result = 0;
            }
        }
        {
            typedef void (QFileInfoGatherer::*_t)(const QString & , const QStringList & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileInfoGatherer::newListOfFiles)) {
                *result = 1;
            }
        }
        {
            typedef void (QFileInfoGatherer::*_t)(const QString & , const QString & ) const;
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileInfoGatherer::nameResolved)) {
                *result = 2;
            }
        }
        {
            typedef void (QFileInfoGatherer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileInfoGatherer::directoryLoaded)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QFileInfoGatherer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QFileInfoGatherer.data,
      qt_meta_data_QFileInfoGatherer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QFileInfoGatherer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileInfoGatherer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFileInfoGatherer.stringdata))
        return static_cast<void*>(const_cast< QFileInfoGatherer*>(this));
    return QThread::qt_metacast(_clname);
}

int QFileInfoGatherer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QFileInfoGatherer::updates(const QString & _t1, const QList<QPair<QString,QFileInfo> > & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileInfoGatherer::newListOfFiles(const QString & _t1, const QStringList & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< QFileInfoGatherer *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFileInfoGatherer::nameResolved(const QString & _t1, const QString & _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< QFileInfoGatherer *>(this), &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QFileInfoGatherer::directoryLoaded(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE