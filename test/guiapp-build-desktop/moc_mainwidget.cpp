/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created: Wed Jun 29 22:55:14 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../guiapp/mainwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWidget[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      35,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   68,   11,   11, 0x08,
     104,   97,   11,   11, 0x08,
     142,   11,   11,   11, 0x08,
     171,  166,   11,   11, 0x08,
     210,  206,   11,   11, 0x08,
     231,  206,   11,   11, 0x08,
     252,  206,   11,   11, 0x08,
     279,  274,   11,   11, 0x08,
     309,   11,   11,   11, 0x08,
     334,   11,   11,   11, 0x08,
     359,   11,   11,   11, 0x08,
     381,   11,   11,   11, 0x08,
     401,   11,   11,   11, 0x08,
     425,   11,   11,   11, 0x08,
     446,   11,   11,   11, 0x08,
     472,  467,   11,   11, 0x08,
     503,  495,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWidget[] = {
    "MainWidget\0\0applied,notAppliedList\0"
    "optionsApplied(bool,QStringList)\0l\0"
    "procEnumerate(QStringList)\0msg,dt\0"
    "procSerialMessages(QString,QDateTime)\0"
    "procSerialDataReceive()\0data\0"
    "procSerialDataTransfer(QByteArray)\0"
    "val\0procCtsChanged(bool)\0procDsrChanged(bool)\0"
    "procRingChanged(bool)\0list\0"
    "procApplyOptions(QStringList)\0"
    "procControlButtonClick()\0"
    "procOptionsButtonClick()\0procInfoButtonClick()\0"
    "procIOButtonClick()\0procPelcoPButtonClick()\0"
    "procRtsButtonClick()\0procDtrButtonClick()\0"
    "item\0procBoxChange(QString)\0checked\0"
    "on_pelcoPButton_clicked(bool)\0"
};

const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget,
      qt_meta_data_MainWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget))
        return static_cast<void*>(const_cast< MainWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: optionsApplied((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: procEnumerate((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 2: procSerialMessages((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QDateTime(*)>(_a[2]))); break;
        case 3: procSerialDataReceive(); break;
        case 4: procSerialDataTransfer((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: procCtsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: procDsrChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: procRingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: procApplyOptions((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 9: procControlButtonClick(); break;
        case 10: procOptionsButtonClick(); break;
        case 11: procInfoButtonClick(); break;
        case 12: procIOButtonClick(); break;
        case 13: procPelcoPButtonClick(); break;
        case 14: procRtsButtonClick(); break;
        case 15: procDtrButtonClick(); break;
        case 16: procBoxChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;

        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void MainWidget::optionsApplied(bool _t1, const QStringList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
