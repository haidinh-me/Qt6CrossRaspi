#include "hvachandler.h"

HVACHandler::HVACHandler(QObject *parent)
    : QObject{parent}
    , m_targetTemperature(24)
{}

int HVACHandler::targetTemperature() const
{
    return m_targetTemperature;
}

void HVACHandler::changedTemperature(const int &val)
{
    int newTemperature = m_targetTemperature + val;
    setTargetTemperature(newTemperature);
}

void HVACHandler::setTargetTemperature(int newTargetTemperature)
{
    if (m_targetTemperature == newTargetTemperature)
        return;

    if(newTargetTemperature < 0)
        newTargetTemperature = 0;

    else if(newTargetTemperature > 50)
        newTargetTemperature = 50;

    m_targetTemperature = newTargetTemperature;
    emit targetTemperatureChanged();
}

bool HVACHandler::autoSignal() const
{
    return m_autoSignal;
}

void HVACHandler::setAutoSignal(bool newAutoSignal)
{
    if (m_autoSignal == newAutoSignal)
        return;
    m_autoSignal = newAutoSignal;
    emit autoSignalChanged();
}

int8_t HVACHandler::tempInside() const
{
    return m_tempInside;
}

void HVACHandler::setTempInside(int8_t newTempInside)
{
    if (m_tempInside == newTempInside)
        return;
    m_tempInside = newTempInside;
    emit tempInsideChanged();
}
