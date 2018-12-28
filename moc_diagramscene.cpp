/****************************************************************************
** Meta object code from reading C++ file 'diagramscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "diagramscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diagramscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DiagramScene_t {
    QByteArrayData data[27];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DiagramScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DiagramScene_t qt_meta_stringdata_DiagramScene = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DiagramScene"
QT_MOC_LITERAL(1, 13, 18), // "requestEditingItem"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 45, 4), // "item"
QT_MOC_LITERAL(5, 50, 17), // "prepareToAddState"
QT_MOC_LITERAL(6, 68, 22), // "prepareToAddTransition"
QT_MOC_LITERAL(7, 91, 16), // "stateNameEntered"
QT_MOC_LITERAL(8, 108, 4), // "text"
QT_MOC_LITERAL(9, 113, 12), // "cancelAdding"
QT_MOC_LITERAL(10, 126, 19), // "modelAboutToBeReset"
QT_MOC_LITERAL(11, 146, 10), // "modelReset"
QT_MOC_LITERAL(12, 157, 12), // "rowsInserted"
QT_MOC_LITERAL(13, 170, 6), // "parent"
QT_MOC_LITERAL(14, 177, 5), // "first"
QT_MOC_LITERAL(15, 183, 4), // "last"
QT_MOC_LITERAL(16, 188, 11), // "dataChanged"
QT_MOC_LITERAL(17, 200, 7), // "topLeft"
QT_MOC_LITERAL(18, 208, 11), // "bottomRight"
QT_MOC_LITERAL(19, 220, 12), // "QVector<int>"
QT_MOC_LITERAL(20, 233, 5), // "roles"
QT_MOC_LITERAL(21, 239, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(22, 260, 16), // "selectionChanged"
QT_MOC_LITERAL(23, 277, 14), // "QItemSelection"
QT_MOC_LITERAL(24, 292, 8), // "selected"
QT_MOC_LITERAL(25, 301, 10), // "deselected"
QT_MOC_LITERAL(26, 312, 23) // "diagramSelectionChanged"

    },
    "DiagramScene\0requestEditingItem\0\0"
    "QModelIndex\0item\0prepareToAddState\0"
    "prepareToAddTransition\0stateNameEntered\0"
    "text\0cancelAdding\0modelAboutToBeReset\0"
    "modelReset\0rowsInserted\0parent\0first\0"
    "last\0dataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0rowsAboutToBeRemoved\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0diagramSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DiagramScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   77,    2, 0x0a /* Public */,
       6,    0,   78,    2, 0x0a /* Public */,
       7,    1,   79,    2, 0x0a /* Public */,
       9,    0,   82,    2, 0x0a /* Public */,
      10,    0,   83,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    3,   85,    2, 0x0a /* Public */,
      16,    3,   92,    2, 0x0a /* Public */,
      21,    3,   99,    2, 0x0a /* Public */,
      22,    2,  106,    2, 0x0a /* Public */,
      26,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, 0x80000000 | 19,   17,   18,   20,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, 0x80000000 | 23, 0x80000000 | 23,   24,   25,
    QMetaType::Void,

       0        // eod
};

void DiagramScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DiagramScene *_t = static_cast<DiagramScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestEditingItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->prepareToAddState(); break;
        case 2: _t->prepareToAddTransition(); break;
        case 3: _t->stateNameEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->cancelAdding(); break;
        case 5: _t->modelAboutToBeReset(); break;
        case 6: _t->modelReset(); break;
        case 7: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 9: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 10: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 11: _t->diagramSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiagramScene::*)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DiagramScene::requestEditingItem)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DiagramScene::staticMetaObject = {
    { &QGraphicsScene::staticMetaObject, qt_meta_stringdata_DiagramScene.data,
      qt_meta_data_DiagramScene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *DiagramScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DiagramScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DiagramScene.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DiagramSceneFSM::Delegate"))
        return static_cast< DiagramSceneFSM::Delegate*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int DiagramScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void DiagramScene::requestEditingItem(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
