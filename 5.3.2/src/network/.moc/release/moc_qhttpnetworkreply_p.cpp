/****************************************************************************
** Meta object code from reading C++ file 'qhttpnetworkreply_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qhttpnetworkreply_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpnetworkreply_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHttpNetworkReply_t {
    QByteArrayData data[26];
    char stringdata[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpNetworkReply_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpNetworkReply_t qt_meta_stringdata_QHttpNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 9),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 9),
QT_MOC_LITERAL(4, 39, 16),
QT_MOC_LITERAL(5, 56, 6),
QT_MOC_LITERAL(6, 63, 9),
QT_MOC_LITERAL(7, 73, 8),
QT_MOC_LITERAL(8, 82, 17),
QT_MOC_LITERAL(9, 100, 27),
QT_MOC_LITERAL(10, 128, 9),
QT_MOC_LITERAL(11, 138, 6),
QT_MOC_LITERAL(12, 145, 13),
QT_MOC_LITERAL(13, 159, 16),
QT_MOC_LITERAL(14, 176, 4),
QT_MOC_LITERAL(15, 181, 5),
QT_MOC_LITERAL(16, 187, 16),
QT_MOC_LITERAL(17, 204, 16),
QT_MOC_LITERAL(18, 221, 19),
QT_MOC_LITERAL(19, 241, 7),
QT_MOC_LITERAL(20, 249, 15),
QT_MOC_LITERAL(21, 265, 13),
QT_MOC_LITERAL(22, 279, 27),
QT_MOC_LITERAL(23, 307, 13),
QT_MOC_LITERAL(24, 321, 5),
QT_MOC_LITERAL(25, 327, 22)
    },
    "QHttpNetworkReply\0encrypted\0\0sslErrors\0"
    "QList<QSslError>\0errors\0readyRead\0"
    "finished\0finishedWithError\0"
    "QNetworkReply::NetworkError\0errorCode\0"
    "detail\0headerChanged\0dataReadProgress\0"
    "done\0total\0dataSendProgress\0"
    "cacheCredentials\0QHttpNetworkRequest\0"
    "request\0QAuthenticator*\0authenticator\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0authenticationRequired"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       6,    0,   78,    2, 0x06 /* Public */,
       7,    0,   79,    2, 0x06 /* Public */,
       8,    2,   80,    2, 0x06 /* Public */,
       8,    1,   85,    2, 0x26 /* Public | MethodCloned */,
      12,    0,   88,    2, 0x06 /* Public */,
      13,    2,   89,    2, 0x06 /* Public */,
      16,    2,   94,    2, 0x06 /* Public */,
      17,    2,   99,    2, 0x06 /* Public */,
      22,    2,  104,    2, 0x06 /* Public */,
      25,    2,  109,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,   10,   11,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   14,   15,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   14,   15,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 20,   24,   21,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 20,   19,   21,

       0        // eod
};

void QHttpNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpNetworkReply *_t = static_cast<QHttpNetworkReply *>(_o);
        switch (_id) {
        case 0: _t->encrypted(); break;
        case 1: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->finished(); break;
        case 4: _t->finishedWithError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->finishedWithError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 6: _t->headerChanged(); break;
        case 7: _t->dataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 8: _t->dataSendProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->cacheCredentials((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 10: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 11: _t->authenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QSslError> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::encrypted)) {
                *result = 0;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QList<QSslError> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::sslErrors)) {
                *result = 1;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::readyRead)) {
                *result = 2;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::finished)) {
                *result = 3;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(QNetworkReply::NetworkError , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::finishedWithError)) {
                *result = 4;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::headerChanged)) {
                *result = 6;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::dataReadProgress)) {
                *result = 7;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::dataSendProgress)) {
                *result = 8;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::cacheCredentials)) {
                *result = 9;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::proxyAuthenticationRequired)) {
                *result = 10;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::authenticationRequired)) {
                *result = 11;
            }
        }
    }
}

const QMetaObject QHttpNetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttpNetworkReply.data,
      qt_meta_data_QHttpNetworkReply,  qt_static_metacall, 0, 0}
};


const QMetaObject *QHttpNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpNetworkReply.stringdata))
        return static_cast<void*>(const_cast< QHttpNetworkReply*>(this));
    if (!strcmp(_clname, "QHttpNetworkHeader"))
        return static_cast< QHttpNetworkHeader*>(const_cast< QHttpNetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttpNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QHttpNetworkReply::encrypted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QHttpNetworkReply::sslErrors(const QList<QSslError> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttpNetworkReply::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void QHttpNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void QHttpNetworkReply::finishedWithError(QNetworkReply::NetworkError _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 6
void QHttpNetworkReply::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, 0);
}

// SIGNAL 7
void QHttpNetworkReply::dataReadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHttpNetworkReply::dataSendProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHttpNetworkReply::cacheCredentials(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QHttpNetworkReply::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QHttpNetworkReply::authenticationRequired(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
