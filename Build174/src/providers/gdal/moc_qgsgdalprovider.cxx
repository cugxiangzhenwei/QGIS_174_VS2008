/****************************************************************************
** Meta object code from reading C++ file 'qgsgdalprovider.h'
**
** Created: Fri May 18 12:55:48 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qgis-1.7.4/src/providers/gdal/qgsgdalprovider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgsgdalprovider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QgsGdalProvider[] = {

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
      17,   16,   16,   16, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QgsGdalProvider[] = {
    "QgsGdalProvider\0\0statusChanged(QString)\0"
};

void QgsGdalProvider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QgsGdalProvider *_t = static_cast<QgsGdalProvider *>(_o);
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QgsGdalProvider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QgsGdalProvider::staticMetaObject = {
    { &QgsRasterDataProvider::staticMetaObject, qt_meta_stringdata_QgsGdalProvider,
      qt_meta_data_QgsGdalProvider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QgsGdalProvider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QgsGdalProvider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QgsGdalProvider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QgsGdalProvider))
        return static_cast<void*>(const_cast< QgsGdalProvider*>(this));
    return QgsRasterDataProvider::qt_metacast(_clname);
}

int QgsGdalProvider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QgsRasterDataProvider::qt_metacall(_c, _id, _a);
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
void QgsGdalProvider::statusChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
