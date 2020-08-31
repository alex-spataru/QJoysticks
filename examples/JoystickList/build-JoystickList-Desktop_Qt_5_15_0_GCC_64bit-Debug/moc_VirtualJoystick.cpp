/****************************************************************************
** Meta object code from reading C++ file 'VirtualJoystick.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/QJoysticks/VirtualJoystick.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VirtualJoystick.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VirtualJoystick_t {
    QByteArrayData data[26];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VirtualJoystick_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VirtualJoystick_t qt_meta_stringdata_VirtualJoystick = {
    {
QT_MOC_LITERAL(0, 0, 15), // "VirtualJoystick"
QT_MOC_LITERAL(1, 16, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 8), // "povEvent"
QT_MOC_LITERAL(4, 41, 17), // "QJoystickPOVEvent"
QT_MOC_LITERAL(5, 59, 5), // "event"
QT_MOC_LITERAL(6, 65, 9), // "axisEvent"
QT_MOC_LITERAL(7, 75, 18), // "QJoystickAxisEvent"
QT_MOC_LITERAL(8, 94, 11), // "buttonEvent"
QT_MOC_LITERAL(9, 106, 20), // "QJoystickButtonEvent"
QT_MOC_LITERAL(10, 127, 13), // "setJoystickID"
QT_MOC_LITERAL(11, 141, 2), // "id"
QT_MOC_LITERAL(12, 144, 12), // "setAxisRange"
QT_MOC_LITERAL(13, 157, 5), // "range"
QT_MOC_LITERAL(14, 163, 18), // "setJoystickEnabled"
QT_MOC_LITERAL(15, 182, 7), // "enabled"
QT_MOC_LITERAL(16, 190, 18), // "setAxisSensibility"
QT_MOC_LITERAL(17, 209, 11), // "sensibility"
QT_MOC_LITERAL(18, 221, 8), // "readAxes"
QT_MOC_LITERAL(19, 230, 3), // "key"
QT_MOC_LITERAL(20, 234, 7), // "pressed"
QT_MOC_LITERAL(21, 242, 10), // "updateAxis"
QT_MOC_LITERAL(22, 253, 8), // "readPOVs"
QT_MOC_LITERAL(23, 262, 11), // "readButtons"
QT_MOC_LITERAL(24, 274, 15), // "processKeyEvent"
QT_MOC_LITERAL(25, 290, 10) // "QKeyEvent*"

    },
    "VirtualJoystick\0enabledChanged\0\0"
    "povEvent\0QJoystickPOVEvent\0event\0"
    "axisEvent\0QJoystickAxisEvent\0buttonEvent\0"
    "QJoystickButtonEvent\0setJoystickID\0"
    "id\0setAxisRange\0range\0setJoystickEnabled\0"
    "enabled\0setAxisSensibility\0sensibility\0"
    "readAxes\0key\0pressed\0updateAxis\0"
    "readPOVs\0readButtons\0processKeyEvent\0"
    "QKeyEvent*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VirtualJoystick[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       8,    1,   86,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   89,    2, 0x0a /* Public */,
      12,    1,   92,    2, 0x0a /* Public */,
      14,    1,   95,    2, 0x0a /* Public */,
      16,    1,   98,    2, 0x0a /* Public */,
      18,    2,  101,    2, 0x08 /* Private */,
      21,    0,  106,    2, 0x08 /* Private */,
      22,    2,  107,    2, 0x08 /* Private */,
      23,    2,  112,    2, 0x08 /* Private */,
      24,    2,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 9,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QReal,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QReal,   17,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   19,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   19,   20,
    QMetaType::Void, 0x80000000 | 25, QMetaType::Bool,    5,   20,

       0        // eod
};

void VirtualJoystick::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VirtualJoystick *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged(); break;
        case 1: _t->povEvent((*reinterpret_cast< const QJoystickPOVEvent(*)>(_a[1]))); break;
        case 2: _t->axisEvent((*reinterpret_cast< const QJoystickAxisEvent(*)>(_a[1]))); break;
        case 3: _t->buttonEvent((*reinterpret_cast< const QJoystickButtonEvent(*)>(_a[1]))); break;
        case 4: _t->setJoystickID((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setAxisRange((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setJoystickEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setAxisSensibility((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->readAxes((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->updateAxis(); break;
        case 10: _t->readPOVs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->readButtons((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 12: _t->processKeyEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VirtualJoystick::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualJoystick::enabledChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VirtualJoystick::*)(const QJoystickPOVEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualJoystick::povEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VirtualJoystick::*)(const QJoystickAxisEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualJoystick::axisEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VirtualJoystick::*)(const QJoystickButtonEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VirtualJoystick::buttonEvent)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VirtualJoystick::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_VirtualJoystick.data,
    qt_meta_data_VirtualJoystick,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VirtualJoystick::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VirtualJoystick::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VirtualJoystick.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int VirtualJoystick::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void VirtualJoystick::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void VirtualJoystick::povEvent(const QJoystickPOVEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VirtualJoystick::axisEvent(const QJoystickAxisEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VirtualJoystick::buttonEvent(const QJoystickButtonEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
