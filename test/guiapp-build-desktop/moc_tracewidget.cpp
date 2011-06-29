/****************************************************************************
** Meta object code from reading C++ file 'tracewidget.h'
**
** Created: Wed Jun 29 22:55:16 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../guiapp/tracewidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tracewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_TraceWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   45,   12,   12, 0x0a,
      90,   12,   12,   12, 0x08,
     112,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_TraceWidget[] = {
    "TraceWidget\0\0data\0sendSerialData(QByteArray)\0"
    "data,directionRx\0printTrace(QByteArray,bool)\0"
    "procSendButtonClick()\0procClearButtonClick()\0"
};

const QMetaObject TraceWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TraceWidget,
      qt_meta_data_TraceWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &TraceWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *TraceWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *TraceWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TraceWidget))
        return static_cast<void*>(const_cast< TraceWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int TraceWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendSerialData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: printTrace((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: procSendButtonClick(); break;
        case 3: procClearButtonClick(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void TraceWidget::sendSerialData(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
