/****************************************************************************
** Meta object code from reading C++ file 'myWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/myWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_myWindow_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myWindow_t qt_meta_stringdata_myWindow = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myWindow"
QT_MOC_LITERAL(1, 9, 15), // "actionCheckBox1"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 15), // "actionCheckBox2"
QT_MOC_LITERAL(4, 42, 13), // "actionButton1"
QT_MOC_LITERAL(5, 56, 13), // "actionButton2"
QT_MOC_LITERAL(6, 70, 13), // "actionButton3"
QT_MOC_LITERAL(7, 84, 13), // "actionButton4"
QT_MOC_LITERAL(8, 98, 13), // "actionButton5"
QT_MOC_LITERAL(9, 112, 14) // "actionTextEdit"

    },
    "myWindow\0actionCheckBox1\0\0actionCheckBox2\0"
    "actionButton1\0actionButton2\0actionButton3\0"
    "actionButton4\0actionButton5\0actionTextEdit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void myWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myWindow *_t = static_cast<myWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionCheckBox1(); break;
        case 1: _t->actionCheckBox2(); break;
        case 2: _t->actionButton1(); break;
        case 3: _t->actionButton2(); break;
        case 4: _t->actionButton3(); break;
        case 5: _t->actionButton4(); break;
        case 6: _t->actionButton5(); break;
        case 7: _t->actionTextEdit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject myWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_myWindow.data,
      qt_meta_data_myWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *myWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_myWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int myWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
