/****************************************************************************
** Meta object code from reading C++ file 'qsizepolicy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qsizepolicy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsizepolicy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSizePolicy_t {
    QByteArrayData data[9];
    char stringdata[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSizePolicy_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSizePolicy_t qt_meta_stringdata_QSizePolicy = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 6),
QT_MOC_LITERAL(2, 19, 5),
QT_MOC_LITERAL(3, 25, 7),
QT_MOC_LITERAL(4, 33, 7),
QT_MOC_LITERAL(5, 41, 9),
QT_MOC_LITERAL(6, 51, 16),
QT_MOC_LITERAL(7, 68, 9),
QT_MOC_LITERAL(8, 78, 7)
    },
    "QSizePolicy\0Policy\0Fixed\0Minimum\0"
    "Maximum\0Preferred\0MinimumExpanding\0"
    "Expanding\0Ignored"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSizePolicy[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    7,   18,

 // enum data: key, value
       2, uint(QSizePolicy::Fixed),
       3, uint(QSizePolicy::Minimum),
       4, uint(QSizePolicy::Maximum),
       5, uint(QSizePolicy::Preferred),
       6, uint(QSizePolicy::MinimumExpanding),
       7, uint(QSizePolicy::Expanding),
       8, uint(QSizePolicy::Ignored),

       0        // eod
};

const QMetaObject QSizePolicy::staticMetaObject = {
    { 0, qt_meta_stringdata_QSizePolicy.data,
      qt_meta_data_QSizePolicy,  0, 0, 0}
};

QT_END_MOC_NAMESPACE
