/****************************************************************************
** Meta object code from reading C++ file 'colorwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Painter/predef_elements/selectColorWindow/colorwidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
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
struct qt_meta_stringdata_pdef__ColorWidget_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[16];
    char stringdata5[13];
    char stringdata6[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_pdef__ColorWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_pdef__ColorWidget_t qt_meta_stringdata_pdef__ColorWidget = {
    {
        QT_MOC_LITERAL(0, 17),  // "pdef::ColorWidget"
        QT_MOC_LITERAL(18, 8),  // "selected"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 5),  // "color"
        QT_MOC_LITERAL(34, 15),  // "mousePressEvent"
        QT_MOC_LITERAL(50, 12),  // "QMouseEvent*"
        QT_MOC_LITERAL(63, 1)   // "e"
    },
    "pdef::ColorWidget",
    "selected",
    "",
    "color",
    "mousePressEvent",
    "QMouseEvent*",
    "e"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_pdef__ColorWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   29,    2, 0x09,    3 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject pdef::ColorWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<StaticWidget::staticMetaObject>(),
    qt_meta_stringdata_pdef__ColorWidget.offsetsAndSizes,
    qt_meta_data_pdef__ColorWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_pdef__ColorWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ColorWidget, std::true_type>,
        // method 'selected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'mousePressEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>
    >,
    nullptr
} };

void pdef::ColorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selected((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 1: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorWidget::*)(QColor );
            if (_t _q_method = &ColorWidget::selected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *pdef::ColorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pdef::ColorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pdef__ColorWidget.stringdata0))
        return static_cast<void*>(this);
    return StaticWidget::qt_metacast(_clname);
}

int pdef::ColorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = StaticWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void pdef::ColorWidget::selected(QColor _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
