#include "system.h"

#include <QDateTime>

System::System(QObject *parent)
    : QObject{parent}
    , m_carLocked( true )
    , m_outdoorTemp( 26 )
    , m_userName( "H.DinhLV" )
    , m_carIconSettingStatus( true )
    , m_fuellevel( 95 )
    , m_coolant ( 80 )
    , m_carspeed(0)
    , m_rpmEngine(0)
{
    m_currentTimeTimer = new QTimer(this);
    m_currentTimeTimer->setInterval(500);
    m_currentTimeTimer->setSingleShot(true);
    connect(m_currentTimeTimer, &QTimer::timeout, this, &System::currentTimeTimerTimeout);

    currentTimeTimerTimeout();
}

bool System::carLocked() const
{
    return m_carLocked;
}

void System::setCarLocked(bool newCarLocked)
{
    if (m_carLocked == newCarLocked)
        return;
    m_carLocked = newCarLocked;
    emit carLockedChanged();
}

int32_t System::outdoorTemp() const
{
    return m_outdoorTemp;
}

void System::setOutdoorTemp(int32_t newOutdoorTemp)
{
    if (m_outdoorTemp == newOutdoorTemp)
        return;
    m_outdoorTemp = newOutdoorTemp;
    emit outdoorTempChanged();
}

QString System::userName() const
{
    return m_userName;
}

void System::setUserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}

QString System::currentTime() const
{
    return m_currentTime;
}

void System::setCurrentTime(const QString &newCurrentTime)
{
    if (m_currentTime == newCurrentTime)
        return;
    m_currentTime = newCurrentTime;
    emit currentTimeChanged();
}

void System::currentTimeTimerTimeout()
{
    QDateTime dateTime;
    QString currentTime = dateTime.currentDateTime().toString("hh:mm ap");

    setCurrentTime(currentTime);

    m_currentTimeTimer->start();
}

bool System::carIconSettingStatus() const
{
    return m_carIconSettingStatus;
}

void System::setCarIconSettingStatus(bool newCarIconSettingStatus)
{
    if (m_carIconSettingStatus == newCarIconSettingStatus)
        return;
    m_carIconSettingStatus = newCarIconSettingStatus;
    emit carIconSettingStatusChanged();
}

int32_t System::fuellevel() const
{
    return m_fuellevel;
}

void System::setFuellevel(const int32_t &newFuellevel)
{
    if (m_fuellevel == newFuellevel)
        return;
    m_fuellevel = newFuellevel;
    emit fuellevelChanged();
}

int32_t System::coolant() const
{
    return m_coolant;
}

void System::setCoolant(int32_t newCoolant)
{
    if (m_coolant == newCoolant)
        return;
    m_coolant = newCoolant;
    emit coolantChanged();
}

uint32_t System::carspeed() const
{
    return m_carspeed;
}

void System::setCarspeed(uint32_t newCarspeed)
{
    qDebug() << "System::setCarspeed called. Old:" << m_carspeed << " New:" << newCarspeed;
    if (m_carspeed == newCarspeed){
        qDebug() << "Value not changed -> IGNORED";
        return;
    }
    m_carspeed = newCarspeed;
    emit carspeedChanged();
    qDebug() << "Signal carspeedChanged EMITTED!";
}

uint32_t System::rpmEngine() const
{
    return m_rpmEngine;
}

void System::setRpmEngine(uint32_t newRpmEngine)
{
    if (m_rpmEngine == newRpmEngine)
        return;
    m_rpmEngine = newRpmEngine;
    emit rpmEngineChanged();
}
