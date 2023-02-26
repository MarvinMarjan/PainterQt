/****************************************************************************
** Meta object code from reading C++ file 'selectColorWindowPredef.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Painter/predef_elements/selectColorWindow/selectColorWindowPredef.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectColorWindowPredef.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_pdef__SelectColorWindow_t {
    uint offsetsAndSizes[10];
    char stringdata0[24];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_pdef__SelectColorWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_pdef__SelectColorWindow_t qt_meta_stringdata_pdef__SelectColorWindow = {
    {
        QT_MOC_LITERAL(0, 23),  // "pdef::SelectColorWindow"
        QT_MOC_LITERAL(24, 12),  // "windowClosed"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 13),  // "colorSelected"
        QT_MOC_LITERAL(52, 5)   // "color"
    },
    "pdef::SelectColorWindow",
    "windowClosed",
    "",
    "colorSelected",
    "color"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_pdef__SelectColorWindow[] = {

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
       1,    0,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   27,    2, 0x08,    2 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject pdef::SelectColorWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<DynamicWindow::staticMetaObject>(),
    qt_meta_stringdata_pdef__SelectColorWindow.offsetsAndSizes,
    qt_meta_data_pdef__SelectColorWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_pdef__SelectColorWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SelectColorWindow, std::true_type>,
        // method 'windowClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'colorSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>
    >,
    nullptr
} };

void pdef::SelectColorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SelectColorWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->windowClosed(); break;
        case 1: _t->colorSelected((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SelectColorWindow::*)();
            if (_t _q_method = &SelectColorWindow::windowClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *pdef::SelectColorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *pdef::SelectColorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_pdef__SelectColorWindow.stringdata0))
        return static_cast<void*>(this);
    return DynamicWindow::qt_metacast(_clname);
}

int pdef::SelectColorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DynamicWindow::qt_metacall(_c, _id, _a);
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
void pdef::SelectColorWindow::windowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
