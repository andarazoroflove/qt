/****************************************************************************
** Meta object code from reading C++ file 'qhelpsearchengine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qhelpsearchengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhelpsearchengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHelpSearchEngine_t {
    QByteArrayData data[14];
    char stringdata[204];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHelpSearchEngine_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHelpSearchEngine_t qt_meta_stringdata_QHelpSearchEngine = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 15),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 16),
QT_MOC_LITERAL(4, 52, 16),
QT_MOC_LITERAL(5, 69, 17),
QT_MOC_LITERAL(6, 87, 4),
QT_MOC_LITERAL(7, 92, 20),
QT_MOC_LITERAL(8, 113, 14),
QT_MOC_LITERAL(9, 128, 6),
QT_MOC_LITERAL(10, 135, 23),
QT_MOC_LITERAL(11, 159, 9),
QT_MOC_LITERAL(12, 169, 15),
QT_MOC_LITERAL(13, 185, 18)
    },
    "QHelpSearchEngine\0indexingStarted\0\0"
    "indexingFinished\0searchingStarted\0"
    "searchingFinished\0hits\0reindexDocumentation\0"
    "cancelIndexing\0search\0QList<QHelpSearchQuery>\0"
    "queryList\0cancelSearching\0indexDocumentation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHelpSearchEngine[] = {

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
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   65,    2, 0x0a /* Public */,
       8,    0,   66,    2, 0x0a /* Public */,
       9,    1,   67,    2, 0x0a /* Public */,
      12,    0,   70,    2, 0x0a /* Public */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QHelpSearchEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHelpSearchEngine *_t = static_cast<QHelpSearchEngine *>(_o);
        switch (_id) {
        case 0: _t->indexingStarted(); break;
        case 1: _t->indexingFinished(); break;
        case 2: _t->searchingStarted(); break;
        case 3: _t->searchingFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->reindexDocumentation(); break;
        case 5: _t->cancelIndexing(); break;
        case 6: _t->search((*reinterpret_cast< const QList<QHelpSearchQuery>(*)>(_a[1]))); break;
        case 7: _t->cancelSearching(); break;
        case 8: _t->indexDocumentation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHelpSearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHelpSearchEngine::indexingStarted)) {
                *result = 0;
            }
        }
        {
            typedef void (QHelpSearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHelpSearchEngine::indexingFinished)) {
                *result = 1;
            }
        }
        {
            typedef void (QHelpSearchEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHelpSearchEngine::searchingStarted)) {
                *result = 2;
            }
        }
        {
            typedef void (QHelpSearchEngine::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHelpSearchEngine::searchingFinished)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QHelpSearchEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHelpSearchEngine.data,
      qt_meta_data_QHelpSearchEngine,  qt_static_metacall, 0, 0}
};


const QMetaObject *QHelpSearchEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHelpSearchEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHelpSearchEngine.stringdata))
        return static_cast<void*>(const_cast< QHelpSearchEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QHelpSearchEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QHelpSearchEngine::indexingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QHelpSearchEngine::indexingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QHelpSearchEngine::searchingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QHelpSearchEngine::searchingFinished(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
