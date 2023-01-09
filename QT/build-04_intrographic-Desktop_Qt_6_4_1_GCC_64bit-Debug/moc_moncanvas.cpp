/****************************************************************************
** Meta object code from reading C++ file 'moncanvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../04_intrographic/moncanvas.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'moncanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MonCanvas_t {
    uint offsetsAndSizes[24];
    char stringdata0[10];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[2];
    char stringdata4[8];
    char stringdata5[2];
    char stringdata6[12];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[10];
    char stringdata10[14];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MonCanvas_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MonCanvas_t qt_meta_stringdata_MonCanvas = {
    {
        QT_MOC_LITERAL(0, 9),  // "MonCanvas"
        QT_MOC_LITERAL(10, 7),  // "changeX"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 1),  // "x"
        QT_MOC_LITERAL(21, 7),  // "changeY"
        QT_MOC_LITERAL(29, 1),  // "y"
        QT_MOC_LITERAL(31, 11),  // "changeRayon"
        QT_MOC_LITERAL(43, 5),  // "rayon"
        QT_MOC_LITERAL(49, 15),  // "changeEpaisseur"
        QT_MOC_LITERAL(65, 9),  // "epaisseur"
        QT_MOC_LITERAL(75, 13),  // "changeCouleur"
        QT_MOC_LITERAL(89, 7)   // "couleur"
    },
    "MonCanvas",
    "changeX",
    "",
    "x",
    "changeY",
    "y",
    "changeRayon",
    "rayon",
    "changeEpaisseur",
    "epaisseur",
    "changeCouleur",
    "couleur"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MonCanvas[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   50,    2, 0x0a,    5 /* Public */,
       8,    1,   53,    2, 0x0a,    7 /* Public */,
      10,    1,   56,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject MonCanvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MonCanvas.offsetsAndSizes,
    qt_meta_data_MonCanvas,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MonCanvas_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MonCanvas, std::true_type>,
        // method 'changeX'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeRayon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeEpaisseur'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'changeCouleur'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MonCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MonCanvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeX((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->changeY((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->changeRayon((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->changeEpaisseur((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->changeCouleur((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MonCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MonCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MonCanvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MonCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
