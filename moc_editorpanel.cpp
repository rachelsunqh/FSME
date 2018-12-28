/****************************************************************************
** Meta object code from reading C++ file 'editorpanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editorpanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editorpanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EditorPanel_t {
    QByteArrayData data[32];
    char stringdata0[389];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EditorPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EditorPanel_t qt_meta_stringdata_EditorPanel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "EditorPanel"
QT_MOC_LITERAL(1, 12, 15), // "setStateMachine"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 28), // "QSharedPointer<StateMachine>"
QT_MOC_LITERAL(4, 58, 3), // "fsm"
QT_MOC_LITERAL(5, 62, 19), // "modelAboutToBeReset"
QT_MOC_LITERAL(6, 82, 10), // "modelReset"
QT_MOC_LITERAL(7, 93, 12), // "rowsInserted"
QT_MOC_LITERAL(8, 106, 11), // "QModelIndex"
QT_MOC_LITERAL(9, 118, 6), // "parent"
QT_MOC_LITERAL(10, 125, 5), // "first"
QT_MOC_LITERAL(11, 131, 4), // "last"
QT_MOC_LITERAL(12, 136, 11), // "dataChanged"
QT_MOC_LITERAL(13, 148, 7), // "topLeft"
QT_MOC_LITERAL(14, 156, 11), // "bottomRight"
QT_MOC_LITERAL(15, 168, 12), // "QVector<int>"
QT_MOC_LITERAL(16, 181, 5), // "roles"
QT_MOC_LITERAL(17, 187, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(18, 208, 13), // "layoutChanged"
QT_MOC_LITERAL(19, 222, 28), // "QList<QPersistentModelIndex>"
QT_MOC_LITERAL(20, 251, 7), // "parents"
QT_MOC_LITERAL(21, 259, 36), // "QAbstractItemModel::LayoutCha..."
QT_MOC_LITERAL(22, 296, 4), // "hint"
QT_MOC_LITERAL(23, 301, 9), // "rowsMoved"
QT_MOC_LITERAL(24, 311, 5), // "start"
QT_MOC_LITERAL(25, 317, 3), // "end"
QT_MOC_LITERAL(26, 321, 11), // "destination"
QT_MOC_LITERAL(27, 333, 3), // "row"
QT_MOC_LITERAL(28, 337, 16), // "selectionChanged"
QT_MOC_LITERAL(29, 354, 14), // "QItemSelection"
QT_MOC_LITERAL(30, 369, 8), // "selected"
QT_MOC_LITERAL(31, 378, 10) // "deselected"

    },
    "EditorPanel\0setStateMachine\0\0"
    "QSharedPointer<StateMachine>\0fsm\0"
    "modelAboutToBeReset\0modelReset\0"
    "rowsInserted\0QModelIndex\0parent\0first\0"
    "last\0dataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0rowsAboutToBeRemoved\0"
    "layoutChanged\0QList<QPersistentModelIndex>\0"
    "parents\0QAbstractItemModel::LayoutChangeHint\0"
    "hint\0rowsMoved\0start\0end\0destination\0"
    "row\0selectionChanged\0QItemSelection\0"
    "selected\0deselected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EditorPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    3,   74,    2, 0x0a /* Public */,
      12,    3,   81,    2, 0x0a /* Public */,
      17,    3,   88,    2, 0x0a /* Public */,
      18,    2,   95,    2, 0x0a /* Public */,
      18,    1,  100,    2, 0x2a /* Public | MethodCloned */,
      18,    0,  103,    2, 0x2a /* Public | MethodCloned */,
      23,    5,  104,    2, 0x0a /* Public */,
      28,    2,  115,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8, 0x80000000 | 15,   13,   14,   16,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 21,   20,   22,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int, 0x80000000 | 8, QMetaType::Int,    9,   24,   25,   26,   27,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 29,   30,   31,

       0        // eod
};

void EditorPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        EditorPanel *_t = static_cast<EditorPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setStateMachine((*reinterpret_cast< QSharedPointer<StateMachine>(*)>(_a[1]))); break;
        case 1: _t->modelAboutToBeReset(); break;
        case 2: _t->modelReset(); break;
        case 3: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 5: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 6: _t->layoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 7: _t->layoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1]))); break;
        case 8: _t->layoutChanged(); break;
        case 9: _t->rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 10: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<StateMachine> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EditorPanel::staticMetaObject = {
    { &QStackedWidget::staticMetaObject, qt_meta_stringdata_EditorPanel.data,
      qt_meta_data_EditorPanel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *EditorPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EditorPanel.stringdata0))
        return static_cast<void*>(this);
    return QStackedWidget::qt_metacast(_clname);
}

int EditorPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStackedWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
