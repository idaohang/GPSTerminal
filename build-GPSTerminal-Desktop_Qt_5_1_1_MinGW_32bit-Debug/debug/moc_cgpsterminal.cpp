/****************************************************************************
** Meta object code from reading C++ file 'cgpsterminal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GPSTerminal/cgpsterminal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cgpsterminal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CGPSTerminal_t {
    QByteArrayData data[10];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CGPSTerminal_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CGPSTerminal_t qt_meta_stringdata_CGPSTerminal = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 9),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 19),
QT_MOC_LITERAL(4, 44, 12),
QT_MOC_LITERAL(5, 57, 12),
QT_MOC_LITERAL(6, 70, 15),
QT_MOC_LITERAL(7, 86, 15),
QT_MOC_LITERAL(8, 102, 18),
QT_MOC_LITERAL(9, 121, 4)
    },
    "CGPSTerminal\0readyData\0\0slotUpdateListPorts\0"
    "slotOpenPort\0slotReadData\0slotClickButton\0"
    "slotReadScripts\0slotProcessingData\0"
    "data\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CGPSTerminal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       3,    0,   52,    2, 0x0a,
       4,    0,   53,    2, 0x0a,
       5,    0,   54,    2, 0x0a,
       6,    0,   55,    2, 0x0a,
       7,    0,   56,    2, 0x0a,
       8,    1,   57,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,

       0        // eod
};

void CGPSTerminal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CGPSTerminal *_t = static_cast<CGPSTerminal *>(_o);
        switch (_id) {
        case 0: _t->readyData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->slotUpdateListPorts(); break;
        case 2: _t->slotOpenPort(); break;
        case 3: _t->slotReadData(); break;
        case 4: _t->slotClickButton(); break;
        case 5: _t->slotReadScripts(); break;
        case 6: _t->slotProcessingData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CGPSTerminal::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CGPSTerminal::readyData)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CGPSTerminal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CGPSTerminal.data,
      qt_meta_data_CGPSTerminal,  qt_static_metacall, 0, 0}
};


const QMetaObject *CGPSTerminal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CGPSTerminal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CGPSTerminal.stringdata))
        return static_cast<void*>(const_cast< CGPSTerminal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CGPSTerminal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CGPSTerminal::readyData(QByteArray _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
