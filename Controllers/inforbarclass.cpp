#include "inforbarclass.h"

InforBarClass::InforBarClass(QObject *parent)
    : QObject{parent}
    , m_leftSignal( false )
    , m_rightSignal( false )
    , m_lightCos( false )
    , m_lightPhare( false )
    , m_hazard( false )
    , m_paking( false )
    , m_lightSm( false )
    , m_indicator( true )
    , m_temperature( false )
    , m_gearR(false)
    , m_gearN(false)
    , m_gearD(false)
{}

bool InforBarClass::leftSignal() const
{
    return m_leftSignal;
}

void InforBarClass::setLeftSignal(bool newLeftSignal)
{
    if (m_leftSignal == newLeftSignal)
        return;
    m_leftSignal = newLeftSignal;
    emit leftSignalChanged();
}

bool InforBarClass::rightSignal() const
{
    return m_rightSignal;
}

void InforBarClass::setRightSignal(bool newRightSignal)
{
    if (m_rightSignal == newRightSignal)
        return;
    m_rightSignal = newRightSignal;
    emit rightSignalChanged();
}

bool InforBarClass::lightPhare() const
{
    return m_lightPhare;
}

void InforBarClass::setLightPhare(bool newLightPhare)
{
    if (m_lightPhare == newLightPhare)
        return;
    m_lightPhare = newLightPhare;
    emit lightPhareChanged();
}

bool InforBarClass::lightCos() const
{
    return m_lightCos;
}

void InforBarClass::setLightCos(bool newLightCos)
{
    if (m_lightCos == newLightCos)
        return;
    m_lightCos = newLightCos;
    emit lightCosChanged();
}

bool InforBarClass::hazard() const
{
    return m_hazard;
}

void InforBarClass::setHazard(bool newHazard)
{
    if (m_hazard == newHazard)
        return;
    m_hazard = newHazard;
    emit hazardChanged();
}

bool InforBarClass::temperature() const
{
    return m_temperature;
}

void InforBarClass::setTemperature(bool newTemperature)
{
    if (m_temperature == newTemperature)
        return;
    m_temperature = newTemperature;
    emit temperatureChanged();
}

bool InforBarClass::lightSm() const
{
    return m_lightSm;
}

void InforBarClass::setLightSm(bool newLightSm)
{
    if (m_lightSm == newLightSm)
        return;
    m_lightSm = newLightSm;
    emit lightSmChanged();
}

bool InforBarClass::indicator() const
{
    return m_indicator;
}

void InforBarClass::setIndicator(bool newIndicator)
{
    if (m_indicator == newIndicator)
        return;
    m_indicator = newIndicator;
    emit indicatorChanged();
}

bool InforBarClass::paking() const
{
    return m_paking;
}

void InforBarClass::setPaking(bool newPaking)
{
    if (m_paking == newPaking)
        return;
    m_paking = newPaking;
    emit pakingChanged();
}

bool InforBarClass::gearR() const
{
    return m_gearR;
}

void InforBarClass::setGearR(bool newGearR)
{
    if (m_gearR == newGearR)
        return;
    m_gearR = newGearR;
    emit gearRChanged();
}

bool InforBarClass::gearN() const
{
    return m_gearN;
}

void InforBarClass::setGearN(bool newGearN)
{
    if (m_gearN == newGearN)
        return;
    m_gearN = newGearN;
    emit gearNChanged();
}

bool InforBarClass::gearD() const
{
    return m_gearD;
}

void InforBarClass::setGearD(bool newGearD)
{
    if (m_gearD == newGearD)
        return;
    m_gearD = newGearD;
    emit gearDChanged();
}
