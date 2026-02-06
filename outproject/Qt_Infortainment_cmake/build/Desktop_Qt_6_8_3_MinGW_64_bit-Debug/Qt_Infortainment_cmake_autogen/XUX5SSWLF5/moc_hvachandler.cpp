/****************************************************************************
** Meta object code from reading C++ file 'hvachandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Controllers/hvachandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hvachandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11HVACHandlerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11HVACHandlerE = QtMocHelpers::stringData(
    "HVACHandler",
    "targetTemperatureChanged",
    "",
    "autoSignalChanged",
    "tempInsideChanged",
    "setTargetTemperature",
    "newTargetTemperature",
    "setAutoSignal",
    "newAutoSignal",
    "setTempInside",
    "int8_t",
    "newTempInside",
    "changedTemperature",
    "val",
    "targetTemperature",
    "autoSignal",
    "tempInside"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11HVACHandlerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   71, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    4 /* Public */,
       3,    0,   57,    2, 0x06,    5 /* Public */,
       4,    0,   58,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x0a,    7 /* Public */,
       7,    1,   62,    2, 0x0a,    9 /* Public */,
       9,    1,   65,    2, 0x0a,   11 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   68,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,   13,

 // properties: name, type, flags, notifyId, revision
      14, QMetaType::Int, 0x00015903, uint(0), 0,
      15, QMetaType::Bool, 0x00015903, uint(1), 0,
      16, 0x80000000 | 10, 0x0001590b, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject HVACHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11HVACHandlerE.offsetsAndSizes,
    qt_meta_data_ZN11HVACHandlerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11HVACHandlerE_t,
        // property 'targetTemperature'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'autoSignal'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'tempInside'
        QtPrivate::TypeAndForceComplete<int8_t, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HVACHandler, std::true_type>,
        // method 'targetTemperatureChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoSignalChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tempInsideChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTargetTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setAutoSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setTempInside'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int8_t, std::false_type>,
        // method 'changedTemperature'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>
    >,
    nullptr
} };

void HVACHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<HVACHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->targetTemperatureChanged(); break;
        case 1: _t->autoSignalChanged(); break;
        case 2: _t->tempInsideChanged(); break;
        case 3: _t->setTargetTemperature((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setAutoSignal((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setTempInside((*reinterpret_cast< std::add_pointer_t<int8_t>>(_a[1]))); break;
        case 6: _t->changedTemperature((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (HVACHandler::*)();
            if (_q_method_type _q_method = &HVACHandler::targetTemperatureChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (HVACHandler::*)();
            if (_q_method_type _q_method = &HVACHandler::autoSignalChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (HVACHandler::*)();
            if (_q_method_type _q_method = &HVACHandler::tempInsideChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->targetTemperature(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->autoSignal(); break;
        case 2: *reinterpret_cast< int8_t*>(_v) = _t->tempInside(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTargetTemperature(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setAutoSignal(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setTempInside(*reinterpret_cast< int8_t*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *HVACHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HVACHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11HVACHandlerE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int HVACHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HVACHandler::targetTemperatureChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void HVACHandler::autoSignalChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void HVACHandler::tempInsideChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
