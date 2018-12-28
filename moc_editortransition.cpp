/****************************************************************************
** Meta object code from reading C++ file 'editortransition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editortransition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editortransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorTransition_t {
    QByteArrayData data[11];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorTransition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorTransition_t qt_meta_stringdata_EditorTransition = {
    {
QT_MOC_LITERAL(0, 0, 16), // "EditorTransition"
QT_MOC_LITERAL(1, 17, 21), // "availSelectionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 22), // "actionSelectionChanged"
QT_MOC_LITERAL(4, 63, 12), // "moveActionUp"
QT_MOC_LITERAL(5, 76, 14), // "moveActionDown"
QT_MOC_LITERAL(6, 91, 9), // "addAction"
QT_MOC_LITERAL(7, 101, 12), // "removeAction"
QT_MOC_LITERAL(8, 114, 16), // "moveTransitionUp"
QT_MOC_LITERAL(9, 131, 18), // "moveTransitionDown"
QT_MOC_LITERAL(10, 150, 14) // "setDestination"

    },
    "EditorTransition\0availSelectionChanged\0"
    "\0actionSelectionChanged\0moveActionUp\0"
    "moveActionDown\0addAction\0removeAction\0"
    "moveTransitionUp\0moveTransitionDown\0"
    "setDestination"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorTransition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void EditorTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditorTransition *_t = static_cast<EditorTransition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->availSelectionChanged(); break;
        case 1: _t->actionSelectionChanged(); break;
        case 2: _t->moveActionUp(); break;
        case 3: _t->moveActionDown(); break;
        case 4: _t->addAction(); break;
        case 5: _t->removeAction(); break;
        case 6: _t->moveTransitionUp(); break;
        case 7: _t->moveTransitionDown(); break;
        case 8: _t->setDestination((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditorTransition::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EditorTransition.data,
      qt_meta_data_EditorTransition,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditorTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorTransition.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "EditorBase"))
        return static_cast< EditorBase*>(this);
    return QWidget::qt_metacast(_clname);
}

int EditorTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
