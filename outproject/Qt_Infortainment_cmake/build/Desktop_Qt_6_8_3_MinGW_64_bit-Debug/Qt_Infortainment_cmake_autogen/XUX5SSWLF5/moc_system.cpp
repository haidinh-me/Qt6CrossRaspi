/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../Controllers/system.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6SystemE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN6SystemE = QtMocHelpers::stringData(
    "System",
    "carLockedChanged",
    "",
    "outdoorTempChanged",
    "userNameChanged",
    "currentTimeChanged",
    "carIconSettingStatusChanged",
    "fuellevelChanged",
    "coolantChanged",
    "carspeedChanged",
    "rpmEngineChanged",
    "setCarLocked",
    "newCarLocked",
    "setOutdoorTemp",
    "int32_t",
    "newOutdoorTemp",
    "setUserName",
    "newUserName",
    "setCurrentTime",
    "newCurrentTime",
    "currentTimeTimerTimeout",
    "setCarIconSettingStatus",
    "newCarIconSettingStatus",
    "setFuellevel",
    "newFuellevel",
    "setCoolant",
    "newCoolant",
    "setCarspeed",
    "uint32_t",
    "newCarspeed",
    "setRpmEngine",
    "newRpmEngine",
    "carLocked",
    "outdoorTemp",
    "userName",
    "currentTime",
    "carIconSettingStatus",
    "fuellevel",
    "coolant",
    "carspeed",
    "rpmEngine"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN6SystemE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       9,  165, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,   10 /* Public */,
       3,    0,  129,    2, 0x06,   11 /* Public */,
       4,    0,  130,    2, 0x06,   12 /* Public */,
       5,    0,  131,    2, 0x06,   13 /* Public */,
       6,    0,  132,    2, 0x06,   14 /* Public */,
       7,    0,  133,    2, 0x06,   15 /* Public */,
       8,    0,  134,    2, 0x06,   16 /* Public */,
       9,    0,  135,    2, 0x06,   17 /* Public */,
      10,    0,  136,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  137,    2, 0x0a,   19 /* Public */,
      13,    1,  140,    2, 0x0a,   21 /* Public */,
      16,    1,  143,    2, 0x0a,   23 /* Public */,
      18,    1,  146,    2, 0x0a,   25 /* Public */,
      20,    0,  149,    2, 0x0a,   27 /* Public */,
      21,    1,  150,    2, 0x0a,   28 /* Public */,
      23,    1,  153,    2, 0x0a,   30 /* Public */,
      25,    1,  156,    2, 0x0a,   32 /* Public */,
      27,    1,  159,    2, 0x0a,   34 /* Public */,
      30,    1,  162,    2, 0x0a,   36 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 14,   24,
    QMetaType::Void, 0x80000000 | 14,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   31,

 // properties: name, type, flags, notifyId, revision
      32, QMetaType::Bool, 0x00015903, uint(0), 0,
      33, 0x80000000 | 14, 0x0001590b, uint(1), 0,
      34, QMetaType::QString, 0x00015903, uint(2), 0,
      35, QMetaType::QString, 0x00015903, uint(3), 0,
      36, QMetaType::Bool, 0x00015903, uint(4), 0,
      37, 0x80000000 | 14, 0x0001590b, uint(5), 0,
      38, 0x80000000 | 14, 0x0001590b, uint(6), 0,
      39, 0x80000000 | 28, 0x0001590b, uint(7), 0,
      40, 0x80000000 | 28, 0x0001590b, uint(8), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN6SystemE.offsetsAndSizes,
    qt_meta_data_ZN6SystemE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN6SystemE_t,
        // property 'carLocked'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'outdoorTemp'
        QtPrivate::TypeAndForceComplete<int32_t, std::true_type>,
        // property 'userName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'currentTime'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'carIconSettingStatus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fuellevel'
        QtPrivate::TypeAndForceComplete<int32_t, std::true_type>,
        // property 'coolant'
        QtPrivate::TypeAndForceComplete<int32_t, std::true_type>,
        // property 'carspeed'
        QtPrivate::TypeAndForceComplete<uint32_t, std::true_type>,
        // property 'rpmEngine'
        QtPrivate::TypeAndForceComplete<uint32_t, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<System, std::true_type>,
        // method 'carLockedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outdoorTempChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'carIconSettingStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fuellevelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'coolantChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'carspeedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rpmEngineChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCarLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setOutdoorTemp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int32_t, std::false_type>,
        // method 'setUserName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'currentTimeTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCarIconSettingStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setFuellevel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int32_t &, std::false_type>,
        // method 'setCoolant'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int32_t, std::false_type>,
        // method 'setCarspeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>,
        // method 'setRpmEngine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint32_t, std::false_type>
    >,
    nullptr
} };

void System::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<System *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->carLockedChanged(); break;
        case 1: _t->outdoorTempChanged(); break;
        case 2: _t->userNameChanged(); break;
        case 3: _t->currentTimeChanged(); break;
        case 4: _t->carIconSettingStatusChanged(); break;
        case 5: _t->fuellevelChanged(); break;
        case 6: _t->coolantChanged(); break;
        case 7: _t->carspeedChanged(); break;
        case 8: _t->rpmEngineChanged(); break;
        case 9: _t->setCarLocked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setOutdoorTemp((*reinterpret_cast< std::add_pointer_t<int32_t>>(_a[1]))); break;
        case 11: _t->setUserName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->setCurrentTime((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->currentTimeTimerTimeout(); break;
        case 14: _t->setCarIconSettingStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 15: _t->setFuellevel((*reinterpret_cast< std::add_pointer_t<int32_t>>(_a[1]))); break;
        case 16: _t->setCoolant((*reinterpret_cast< std::add_pointer_t<int32_t>>(_a[1]))); break;
        case 17: _t->setCarspeed((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        case 18: _t->setRpmEngine((*reinterpret_cast< std::add_pointer_t<uint32_t>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::carLockedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::outdoorTempChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::userNameChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::currentTimeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::carIconSettingStatusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::fuellevelChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::coolantChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::carspeedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (System::*)();
            if (_q_method_type _q_method = &System::rpmEngineChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast< int32_t*>(_v) = _t->outdoorTemp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->currentTime(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->carIconSettingStatus(); break;
        case 5: *reinterpret_cast< int32_t*>(_v) = _t->fuellevel(); break;
        case 6: *reinterpret_cast< int32_t*>(_v) = _t->coolant(); break;
        case 7: *reinterpret_cast< uint32_t*>(_v) = _t->carspeed(); break;
        case 8: *reinterpret_cast< uint32_t*>(_v) = _t->rpmEngine(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setOutdoorTemp(*reinterpret_cast< int32_t*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setCarIconSettingStatus(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setFuellevel(*reinterpret_cast< int32_t*>(_v)); break;
        case 6: _t->setCoolant(*reinterpret_cast< int32_t*>(_v)); break;
        case 7: _t->setCarspeed(*reinterpret_cast< uint32_t*>(_v)); break;
        case 8: _t->setRpmEngine(*reinterpret_cast< uint32_t*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *System::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *System::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN6SystemE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int System::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void System::carLockedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void System::outdoorTempChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void System::userNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void System::currentTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void System::carIconSettingStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void System::fuellevelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void System::coolantChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void System::carspeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void System::rpmEngineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
