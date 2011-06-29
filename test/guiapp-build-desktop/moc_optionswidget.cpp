/****************************************************************************
** Meta object code from reading C++ file 'optionswidget.h'
**
** Created: Wed Jun 29 22:55:15 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../guiapp/optionswidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OptionsWidget[] = {

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
      20,   15,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      69,   46,   14,   14, 0x0a,
     106,   14,   14,   14, 0x08,
     123,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OptionsWidget[] = {
    "OptionsWidget\0\0list\0applyOptions(QStringList)\0"
    "applied,notAppliedList\0"
    "procAppliedOptions(bool,QStringList)\0"
    "procBoxChanged()\0procApplyButtonClick()\0"
};

const QMetaObject OptionsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OptionsWidget,
      qt_meta_data_OptionsWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OptionsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OptionsWidget))
        return static_cast<void*>(const_cast< OptionsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int OptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: applyOptions((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 1: procAppliedOptions((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 2: procBoxChanged(); break;
        case 3: procApplyButtonClick(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OptionsWidget::applyOptions(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
