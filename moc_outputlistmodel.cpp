/****************************************************************************
** Meta object code from reading C++ file 'outputlistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "outputlistmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'outputlistmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutputListModel_t {
    QByteArrayData data[15];
    char stringdata0[183];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutputListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutputListModel_t qt_meta_stringdata_OutputListModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "OutputListModel"
QT_MOC_LITERAL(1, 16, 23), // "olm_modelAboutToBeReset"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 14), // "olm_modelReset"
QT_MOC_LITERAL(4, 56, 16), // "olm_rowsInserted"
QT_MOC_LITERAL(5, 73, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 85, 6), // "parent"
QT_MOC_LITERAL(7, 92, 5), // "first"
QT_MOC_LITERAL(8, 98, 4), // "last"
QT_MOC_LITERAL(9, 103, 15), // "olm_dataChanged"
QT_MOC_LITERAL(10, 119, 7), // "topLeft"
QT_MOC_LITERAL(11, 127, 11), // "bottomRight"
QT_MOC_LITERAL(12, 139, 12), // "QVector<int>"
QT_MOC_LITERAL(13, 152, 5), // "roles"
QT_MOC_LITERAL(14, 158, 24) // "olm_rowsAboutToBeRemoved"

    },
    "OutputListModel\0olm_modelAboutToBeReset\0"
    "\0olm_modelReset\0olm_rowsInserted\0"
    "QModelIndex\0parent\0first\0last\0"
    "olm_dataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0olm_rowsAboutToBeRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x09 /* Protected */,
       3,    0,   40,    2, 0x09 /* Protected */,
       4,    3,   41,    2, 0x09 /* Protected */,
       9,    3,   48,    2, 0x09 /* Protected */,
      14,    3,   55,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 12,   10,   11,   13,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Int, QMetaType::Int,    6,    7,    8,

       0        // eod
};

void OutputListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OutputListModel *_t = static_cast<OutputListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->olm_modelAboutToBeReset(); break;
        case 1: _t->olm_modelReset(); break;
        case 2: _t->olm_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->olm_dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 4: _t->olm_rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OutputListModel::staticMetaObject = {
    { &QAbstractListModel::staticMetaObject, qt_meta_stringdata_OutputListModel.data,
      qt_meta_data_OutputListModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OutputListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutputListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OutputListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
