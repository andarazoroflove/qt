/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemwatcher_win_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qfilesystemwatcher_win_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemwatcher_win_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWindowsFileSystemWatcherEngine_t {
    QByteArrayData data[1];
    char stringdata[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsFileSystemWatcherEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsFileSystemWatcherEngine_t qt_meta_stringdata_QWindowsFileSystemWatcherEngine = {
    {
QT_MOC_LITERAL(0, 0, 31)
    },
    "QWindowsFileSystemWatcherEngine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsFileSystemWatcherEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QWindowsFileSystemWatcherEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QWindowsFileSystemWatcherEngine::staticMetaObject = {
    { &QFileSystemWatcherEngine::staticMetaObject, qt_meta_stringdata_QWindowsFileSystemWatcherEngine.data,
      qt_meta_data_QWindowsFileSystemWatcherEngine,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWindowsFileSystemWatcherEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsFileSystemWatcherEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsFileSystemWatcherEngine.stringdata))
        return static_cast<void*>(const_cast< QWindowsFileSystemWatcherEngine*>(this));
    return QFileSystemWatcherEngine::qt_metacast(_clname);
}

int QWindowsFileSystemWatcherEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemWatcherEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread_t {
    QByteArrayData data[6];
    char stringdata[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread_t qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread = {
    {
QT_MOC_LITERAL(0, 0, 37),
QT_MOC_LITERAL(1, 38, 11),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 4),
QT_MOC_LITERAL(4, 56, 7),
QT_MOC_LITERAL(5, 64, 16)
    },
    "QWindowsFileSystemWatcherEngineThread\0"
    "fileChanged\0\0path\0removed\0directoryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsFileSystemWatcherEngineThread[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    4,

       0        // eod
};

void QWindowsFileSystemWatcherEngineThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsFileSystemWatcherEngineThread *_t = static_cast<QWindowsFileSystemWatcherEngineThread *>(_o);
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWindowsFileSystemWatcherEngineThread::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindowsFileSystemWatcherEngineThread::fileChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QWindowsFileSystemWatcherEngineThread::*_t)(const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindowsFileSystemWatcherEngineThread::directoryChanged)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QWindowsFileSystemWatcherEngineThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread.data,
      qt_meta_data_QWindowsFileSystemWatcherEngineThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *QWindowsFileSystemWatcherEngineThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsFileSystemWatcherEngineThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsFileSystemWatcherEngineThread.stringdata))
        return static_cast<void*>(const_cast< QWindowsFileSystemWatcherEngineThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QWindowsFileSystemWatcherEngineThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QWindowsFileSystemWatcherEngineThread::fileChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWindowsFileSystemWatcherEngineThread::directoryChanged(const QString & _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE