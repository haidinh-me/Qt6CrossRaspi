/****************************************************************************
** Meta object code from reading C++ file 'system.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Controllers/system.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'system.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.1. It"
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

template <> constexpr inline auto System::qt_create_metaobjectdata<qt_meta_tag_ZN6SystemE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'carLockedChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'outdoorTempChanged'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'userNameChanged'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'currentTimeChanged'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'carIconSettingStatusChanged'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'fuellevelChanged'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'coolantChanged'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'carspeedChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rpmEngineChanged'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCarLocked'
        QtMocHelpers::SlotData<void(bool)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 12 },
        }}),
        // Slot 'setOutdoorTemp'
        QtMocHelpers::SlotData<void(int32_t)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'setUserName'
        QtMocHelpers::SlotData<void(const QString &)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 17 },
        }}),
        // Slot 'setCurrentTime'
        QtMocHelpers::SlotData<void(const QString &)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 19 },
        }}),
        // Slot 'currentTimeTimerTimeout'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCarIconSettingStatus'
        QtMocHelpers::SlotData<void(bool)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 22 },
        }}),
        // Slot 'setFuellevel'
        QtMocHelpers::SlotData<void(const int32_t &)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 24 },
        }}),
        // Slot 'setCoolant'
        QtMocHelpers::SlotData<void(int32_t)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 26 },
        }}),
        // Slot 'setCarspeed'
        QtMocHelpers::SlotData<void(uint32_t)>(27, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 29 },
        }}),
        // Slot 'setRpmEngine'
        QtMocHelpers::SlotData<void(uint32_t)>(30, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 28, 31 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'carLocked'
        QtMocHelpers::PropertyData<bool>(32, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 0),
        // property 'outdoorTemp'
        QtMocHelpers::PropertyData<int32_t>(33, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 1),
        // property 'userName'
        QtMocHelpers::PropertyData<QString>(34, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 2),
        // property 'currentTime'
        QtMocHelpers::PropertyData<QString>(35, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 3),
        // property 'carIconSettingStatus'
        QtMocHelpers::PropertyData<bool>(36, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet | QMC::Final, 4),
        // property 'fuellevel'
        QtMocHelpers::PropertyData<int32_t>(37, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 5),
        // property 'coolant'
        QtMocHelpers::PropertyData<int32_t>(38, 0x80000000 | 14, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 6),
        // property 'carspeed'
        QtMocHelpers::PropertyData<uint32_t>(39, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 7),
        // property 'rpmEngine'
        QtMocHelpers::PropertyData<uint32_t>(40, 0x80000000 | 28, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet | QMC::Final, 8),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<System, qt_meta_tag_ZN6SystemE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject System::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6SystemE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6SystemE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6SystemE_t>.metaTypes,
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
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::carLockedChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::outdoorTempChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::userNameChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::currentTimeChanged, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::carIconSettingStatusChanged, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::fuellevelChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::coolantChanged, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::carspeedChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (System::*)()>(_a, &System::rpmEngineChanged, 8))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->carLocked(); break;
        case 1: *reinterpret_cast<int32_t*>(_v) = _t->outdoorTemp(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->userName(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->currentTime(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->carIconSettingStatus(); break;
        case 5: *reinterpret_cast<int32_t*>(_v) = _t->fuellevel(); break;
        case 6: *reinterpret_cast<int32_t*>(_v) = _t->coolant(); break;
        case 7: *reinterpret_cast<uint32_t*>(_v) = _t->carspeed(); break;
        case 8: *reinterpret_cast<uint32_t*>(_v) = _t->rpmEngine(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCarLocked(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setOutdoorTemp(*reinterpret_cast<int32_t*>(_v)); break;
        case 2: _t->setUserName(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setCurrentTime(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setCarIconSettingStatus(*reinterpret_cast<bool*>(_v)); break;
        case 5: _t->setFuellevel(*reinterpret_cast<int32_t*>(_v)); break;
        case 6: _t->setCoolant(*reinterpret_cast<int32_t*>(_v)); break;
        case 7: _t->setCarspeed(*reinterpret_cast<uint32_t*>(_v)); break;
        case 8: _t->setRpmEngine(*reinterpret_cast<uint32_t*>(_v)); break;
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
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6SystemE_t>.strings))
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
