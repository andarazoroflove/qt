/****************************************************************************
** Meta object code from reading C++ file 'rpptreeevaluator.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rpptreeevaluator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpptreeevaluator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Rpp__RppTreeEvaluator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      62,   23,   22,   22, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Rpp__RppTreeEvaluator[] = {
    "Rpp::RppTreeEvaluator\0\0"
    "includee,includer,filename,includeType\0"
    "includeCallback(Rpp::Source*&,const Rpp::Source*,QString,Rpp::RppTreeE"
    "valuator::IncludeType)\0"
};

void Rpp::RppTreeEvaluator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RppTreeEvaluator *_t = static_cast<RppTreeEvaluator *>(_o);
        switch (_id) {
        case 0: _t->includeCallback((*reinterpret_cast< Rpp::Source*(*)>(_a[1])),(*reinterpret_cast< const Rpp::Source*(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< Rpp::RppTreeEvaluator::IncludeType(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Rpp::RppTreeEvaluator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Rpp::RppTreeEvaluator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Rpp__RppTreeEvaluator,
      qt_meta_data_Rpp__RppTreeEvaluator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Rpp::RppTreeEvaluator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Rpp::RppTreeEvaluator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Rpp::RppTreeEvaluator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Rpp__RppTreeEvaluator))
        return static_cast<void*>(const_cast< RppTreeEvaluator*>(this));
    if (!strcmp(_clname, "RppTreeWalker"))
        return static_cast< RppTreeWalker*>(const_cast< RppTreeEvaluator*>(this));
    return QObject::qt_metacast(_clname);
}

int Rpp::RppTreeEvaluator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void Rpp::RppTreeEvaluator::includeCallback(Rpp::Source * & _t1, const Rpp::Source * _t2, const QString & _t3, Rpp::RppTreeEvaluator::IncludeType _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
