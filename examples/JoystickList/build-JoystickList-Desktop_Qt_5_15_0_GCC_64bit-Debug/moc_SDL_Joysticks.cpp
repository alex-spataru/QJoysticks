/****************************************************************************
** Meta object code from reading C++ file 'SDL_Joysticks.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../src/QJoysticks/SDL_Joysticks.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SDL_Joysticks.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SDL_Joysticks_t {
    QByteArrayData data[16];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SDL_Joysticks_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SDL_Joysticks_t qt_meta_stringdata_SDL_Joysticks = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SDL_Joysticks"
QT_MOC_LITERAL(1, 14, 12), // "countChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "POVEvent"
QT_MOC_LITERAL(4, 37, 17), // "QJoystickPOVEvent"
QT_MOC_LITERAL(5, 55, 5), // "event"
QT_MOC_LITERAL(6, 61, 9), // "axisEvent"
QT_MOC_LITERAL(7, 71, 18), // "QJoystickAxisEvent"
QT_MOC_LITERAL(8, 90, 11), // "buttonEvent"
QT_MOC_LITERAL(9, 102, 20), // "QJoystickButtonEvent"
QT_MOC_LITERAL(10, 123, 6), // "rumble"
QT_MOC_LITERAL(11, 130, 15), // "QJoystickRumble"
QT_MOC_LITERAL(12, 146, 7), // "request"
QT_MOC_LITERAL(13, 154, 6), // "update"
QT_MOC_LITERAL(14, 161, 17), // "configureJoystick"
QT_MOC_LITERAL(15, 179, 16) // "const SDL_Event*"

    },
    "SDL_Joysticks\0countChanged\0\0POVEvent\0"
    "QJoystickPOVEvent\0event\0axisEvent\0"
    "QJoystickAxisEvent\0buttonEvent\0"
    "QJoystickButtonEvent\0rumble\0QJoystickRumble\0"
    "request\0update\0configureJoystick\0"
    "const SDL_Event*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SDL_Joysticks[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       6,    1,   53,    2, 0x06 /* Public */,
       8,    1,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   59,    2, 0x0a /* Public */,
      13,    0,   62,    2, 0x08 /* Private */,
      14,    1,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    5,
    QMetaType::Void, 0x80000000 | 9,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,    5,

       0        // eod
};

void SDL_Joysticks::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SDL_Joysticks *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->POVEvent((*reinterpret_cast< const QJoystickPOVEvent(*)>(_a[1]))); break;
        case 2: _t->axisEvent((*reinterpret_cast< const QJoystickAxisEvent(*)>(_a[1]))); break;
        case 3: _t->buttonEvent((*reinterpret_cast< const QJoystickButtonEvent(*)>(_a[1]))); break;
        case 4: _t->rumble((*reinterpret_cast< const QJoystickRumble(*)>(_a[1]))); break;
        case 5: _t->update(); break;
        case 6: _t->configureJoystick((*reinterpret_cast< const SDL_Event*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SDL_Joysticks::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SDL_Joysticks::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SDL_Joysticks::*)(const QJoystickPOVEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SDL_Joysticks::POVEvent)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SDL_Joysticks::*)(const QJoystickAxisEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SDL_Joysticks::axisEvent)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SDL_Joysticks::*)(const QJoystickButtonEvent & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SDL_Joysticks::buttonEvent)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SDL_Joysticks::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SDL_Joysticks.data,
    qt_meta_data_SDL_Joysticks,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SDL_Joysticks::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SDL_Joysticks::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SDL_Joysticks.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SDL_Joysticks::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SDL_Joysticks::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SDL_Joysticks::POVEvent(const QJoystickPOVEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SDL_Joysticks::axisEvent(const QJoystickAxisEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SDL_Joysticks::buttonEvent(const QJoystickButtonEvent & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
