/****************************************************************************
** Meta object code from reading C++ file 'stateaddplaceholder.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "stateaddplaceholder.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stateaddplaceholder.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StateAddPlaceholder_t {
    QByteArrayData data[5];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StateAddPlaceholder_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StateAddPlaceholder_t qt_meta_stringdata_StateAddPlaceholder = {
    {
QT_MOC_LITERAL(0, 0, 19), // "StateAddPlaceholder"
QT_MOC_LITERAL(1, 20, 12), // "editFinished"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "text"
QT_MOC_LITERAL(4, 39, 12) // "editCanceled"

    },
    "StateAddPlaceholder\0editFinished\0\0"
    "text\0editCanceled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StateAddPlaceholder[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

       0        // eod
};

void StateAddPlaceholder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        StateAddPlaceholder *_t = static_cast<StateAddPlaceholder *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->editCanceled(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StateAddPlaceholder::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StateAddPlaceholder::editFinished)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StateAddPlaceholder::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StateAddPlaceholder::editCanceled)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StateAddPlaceholder::staticMetaObject = {
    { &QGraphicsTextItem::staticMetaObject, qt_meta_stringdata_StateAddPlaceholder.data,
      qt_meta_data_StateAddPlaceholder,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *StateAddPlaceholder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StateAddPlaceholder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StateAddPlaceholder.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsTextItem::qt_metacast(_clname);
}

int StateAddPlaceholder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsTextItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void StateAddPlaceholder::editFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void StateAddPlaceholder::editCanceled()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
