/****************************************************************************
** Meta object code from reading C++ file 'QJoysticks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/QJoysticks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QJoysticks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QJoysticks_t {
    QByteArrayData data[53];
    char stringdata0[638];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QJoysticks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QJoysticks_t qt_meta_stringdata_QJoysticks = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QJoysticks"
QT_MOC_LITERAL(1, 11, 12), // "countChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "enabledChanged"
QT_MOC_LITERAL(4, 40, 7), // "enabled"
QT_MOC_LITERAL(5, 48, 8), // "POVEvent"
QT_MOC_LITERAL(6, 57, 17), // "QJoystickPOVEvent"
QT_MOC_LITERAL(7, 75, 5), // "event"
QT_MOC_LITERAL(8, 81, 9), // "axisEvent"
QT_MOC_LITERAL(9, 91, 18), // "QJoystickAxisEvent"
QT_MOC_LITERAL(10, 110, 11), // "buttonEvent"
QT_MOC_LITERAL(11, 122, 20), // "QJoystickButtonEvent"
QT_MOC_LITERAL(12, 143, 10), // "povChanged"
QT_MOC_LITERAL(13, 154, 2), // "js"
QT_MOC_LITERAL(14, 157, 3), // "pov"
QT_MOC_LITERAL(15, 161, 5), // "angle"
QT_MOC_LITERAL(16, 167, 11), // "axisChanged"
QT_MOC_LITERAL(17, 179, 4), // "axis"
QT_MOC_LITERAL(18, 184, 5), // "value"
QT_MOC_LITERAL(19, 190, 13), // "buttonChanged"
QT_MOC_LITERAL(20, 204, 6), // "button"
QT_MOC_LITERAL(21, 211, 7), // "pressed"
QT_MOC_LITERAL(22, 219, 16), // "updateInterfaces"
QT_MOC_LITERAL(23, 236, 23), // "setVirtualJoystickRange"
QT_MOC_LITERAL(24, 260, 5), // "range"
QT_MOC_LITERAL(25, 266, 25), // "setVirtualJoystickEnabled"
QT_MOC_LITERAL(26, 292, 33), // "setVirtualJoystickAxisSensibi..."
QT_MOC_LITERAL(27, 326, 11), // "sensibility"
QT_MOC_LITERAL(28, 338, 32), // "setSortJoysticksByBlacklistState"
QT_MOC_LITERAL(29, 371, 4), // "sort"
QT_MOC_LITERAL(30, 376, 14), // "setBlacklisted"
QT_MOC_LITERAL(31, 391, 5), // "index"
QT_MOC_LITERAL(32, 397, 11), // "blacklisted"
QT_MOC_LITERAL(33, 409, 14), // "resetJoysticks"
QT_MOC_LITERAL(34, 424, 14), // "addInputDevice"
QT_MOC_LITERAL(35, 439, 16), // "QJoystickDevice*"
QT_MOC_LITERAL(36, 456, 6), // "device"
QT_MOC_LITERAL(37, 463, 10), // "onPOVEvent"
QT_MOC_LITERAL(38, 474, 1), // "e"
QT_MOC_LITERAL(39, 476, 11), // "onAxisEvent"
QT_MOC_LITERAL(40, 488, 13), // "onButtonEvent"
QT_MOC_LITERAL(41, 502, 6), // "getPOV"
QT_MOC_LITERAL(42, 509, 7), // "getAxis"
QT_MOC_LITERAL(43, 517, 9), // "getButton"
QT_MOC_LITERAL(44, 527, 10), // "getNumAxes"
QT_MOC_LITERAL(45, 538, 10), // "getNumPOVs"
QT_MOC_LITERAL(46, 549, 13), // "getNumButtons"
QT_MOC_LITERAL(47, 563, 13), // "isBlacklisted"
QT_MOC_LITERAL(48, 577, 14), // "joystickExists"
QT_MOC_LITERAL(49, 592, 7), // "getName"
QT_MOC_LITERAL(50, 600, 5), // "count"
QT_MOC_LITERAL(51, 606, 19), // "nonBlacklistedCount"
QT_MOC_LITERAL(52, 626, 11) // "deviceNames"

    },
    "QJoysticks\0countChanged\0\0enabledChanged\0"
    "enabled\0POVEvent\0QJoystickPOVEvent\0"
    "event\0axisEvent\0QJoystickAxisEvent\0"
    "buttonEvent\0QJoystickButtonEvent\0"
    "povChanged\0js\0pov\0angle\0axisChanged\0"
    "axis\0value\0buttonChanged\0button\0pressed\0"
    "updateInterfaces\0setVirtualJoystickRange\0"
    "range\0setVirtualJoystickEnabled\0"
    "setVirtualJoystickAxisSensibility\0"
    "sensibility\0setSortJoysticksByBlacklistState\0"
    "sort\0setBlacklisted\0index\0blacklisted\0"
    "resetJoysticks\0addInputDevice\0"
    "QJoystickDevice*\0device\0onPOVEvent\0e\0"
    "onAxisEvent\0onButtonEvent\0getPOV\0"
    "getAxis\0getButton\0getNumAxes\0getNumPOVs\0"
    "getNumButtons\0isBlacklisted\0joystickExists\0"
    "getName\0count\0nonBlacklistedCount\0"
    "deviceNames"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QJoysticks[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       3,  252, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  154,    2, 0x06 /* Public */,
       3,    1,  155,    2, 0x06 /* Public */,
       5,    1,  158,    2, 0x06 /* Public */,
       8,    1,  161,    2, 0x06 /* Public */,
      10,    1,  164,    2, 0x06 /* Public */,
      12,    3,  167,    2, 0x06 /* Public */,
      16,    3,  174,    2, 0x06 /* Public */,
      19,    3,  181,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      22,    0,  188,    2, 0x0a /* Public */,
      23,    1,  189,    2, 0x0a /* Public */,
      25,    1,  192,    2, 0x0a /* Public */,
      26,    1,  195,    2, 0x0a /* Public */,
      28,    1,  198,    2, 0x0a /* Public */,
      30,    2,  201,    2, 0x0a /* Public */,
      33,    0,  206,    2, 0x08 /* Private */,
      34,    1,  207,    2, 0x08 /* Private */,
      37,    1,  210,    2, 0x08 /* Private */,
      39,    1,  213,    2, 0x08 /* Private */,
      40,    1,  216,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      41,    2,  219,    2, 0x02 /* Public */,
      42,    2,  224,    2, 0x02 /* Public */,
      43,    2,  229,    2, 0x02 /* Public */,
      44,    1,  234,    2, 0x02 /* Public */,
      45,    1,  237,    2, 0x02 /* Public */,
      46,    1,  240,    2, 0x02 /* Public */,
      47,    1,  243,    2, 0x02 /* Public */,
      48,    1,  246,    2, 0x02 /* Public */,
      49,    1,  249,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,    7,
    QMetaType::Void, 0x80000000 | 11,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,   13,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QReal,   13,   17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   13,   20,   21,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QReal,   24,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QReal,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,   31,   32,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 35,   36,
    QMetaType::Void, 0x80000000 | 6,   38,
    QMetaType::Void, 0x80000000 | 9,   38,
    QMetaType::Void, 0x80000000 | 11,   38,

 // methods: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   14,
    QMetaType::Double, QMetaType::Int, QMetaType::Int,   31,   17,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   31,   20,
    QMetaType::Int, QMetaType::Int,   31,
    QMetaType::Int, QMetaType::Int,   31,
    QMetaType::Int, QMetaType::Int,   31,
    QMetaType::Bool, QMetaType::Int,   31,
    QMetaType::Bool, QMetaType::Int,   31,
    QMetaType::QString, QMetaType::Int,   31,

 // properties: name, type, flags
      50, QMetaType::Int, 0x00495001,
      51, QMetaType::Int, 0x00495001,
      52, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,

       0        // eod
};

void QJoysticks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QJoysticks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->enabledChanged((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 2: _t->POVEvent((*reinterpret_cast< const QJoystickPOVEvent(*)>(_a[1]))); break;
        case 3: _t->axisEvent((*reinterpret_cast< const QJoystickAxisEvent(*)>(_a[1]))); break;
        case 4: _t->buttonEvent((*reinterpret_cast< const QJoystickButtonEvent(*)>(_a[1]))); break;
        case 5: _t->povChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 6: _t->axisChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const qreal(*)>(_a[3]))); break;
        case 7: _t->buttonChanged((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const bool(*)>(_a[3]))); break;
        case 8: _t->updateInterfaces(); break;
        case 9: _t->setVirtualJoystickRange((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 10: _t->setVirtualJoystickEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->setVirtualJoystickAxisSensibility((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 12: _t->setSortJoysticksByBlacklistState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->setBlacklisted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 14: _t->resetJoysticks(); break;
        case 15: _t->addInputDevice((*reinterpret_cast< QJoystickDevice*(*)>(_a[1]))); break;
        case 16: _t->onPOVEvent((*reinterpret_cast< const QJoystickPOVEvent(*)>(_a[1]))); break;
        case 17: _t->onAxisEvent((*reinterpret_cast< const QJoystickAxisEvent(*)>(_a[1]))); break;
        case 18: _t->onButtonEvent((*reinterpret_cast< const QJoystickButtonEvent(*)>(_a[1]))); break;
        case 19: { int _r = _t->getPOV((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 20: { double _r = _t->getAxis((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 21: { bool _r = _t->getButton((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: { int _r = _t->getNumAxes((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 23: { int _r = _t->getNumPOVs((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 24: { int _r = _t->getNumButtons((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 25: { bool _r = _t->isBlacklisted((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 26: { bool _r = _t->joystickExists((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->getName((*reinterpret_cast< const int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QJoysticks::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::enabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const QJoystickPOVEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::POVEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const QJoystickAxisEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::axisEvent)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const QJoystickButtonEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::buttonEvent)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const int , const int , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::povChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const int , const int , const qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::axisChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QJoysticks::*)(const int , const int , const bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QJoysticks::buttonChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QJoysticks *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->nonBlacklistedCount(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->deviceNames(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QJoysticks::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QJoysticks.data,
    qt_meta_data_QJoysticks,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QJoysticks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QJoysticks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QJoysticks.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QJoysticks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 28;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QJoysticks::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QJoysticks::enabledChanged(const bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QJoysticks::POVEvent(const QJoystickPOVEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QJoysticks::axisEvent(const QJoystickAxisEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QJoysticks::buttonEvent(const QJoystickButtonEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QJoysticks::povChanged(const int _t1, const int _t2, const int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QJoysticks::axisChanged(const int _t1, const int _t2, const qreal _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QJoysticks::buttonChanged(const int _t1, const int _t2, const bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
