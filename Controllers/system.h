#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QTimer>


class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL)
    Q_PROPERTY(int32_t outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged FINAL)
    Q_PROPERTY(bool carIconSettingStatus READ carIconSettingStatus WRITE setCarIconSettingStatus NOTIFY carIconSettingStatusChanged FINAL)
    Q_PROPERTY(int32_t fuellevel READ fuellevel WRITE setFuellevel NOTIFY fuellevelChanged FINAL)
    Q_PROPERTY(int32_t coolant READ coolant WRITE setCoolant NOTIFY coolantChanged FINAL)
    Q_PROPERTY(uint32_t carspeed READ carspeed WRITE setCarspeed NOTIFY carspeedChanged FINAL)
    Q_PROPERTY(uint32_t rpmEngine READ rpmEngine WRITE setRpmEngine NOTIFY rpmEngineChanged FINAL)
public:
    explicit System(QObject *parent = nullptr);

    bool carLocked() const;
    int32_t outdoorTemp() const;
    QString userName() const;
    QString currentTime() const;
    bool carIconSettingStatus() const;
    int32_t fuellevel() const;
    int32_t coolant() const;
    uint32_t carspeed() const;
    uint32_t rpmEngine() const;


signals:
    void carLockedChanged();
    void outdoorTempChanged();
    void userNameChanged();
    void currentTimeChanged();
    void carIconSettingStatusChanged();
    void fuellevelChanged();
    void coolantChanged();
    void carspeedChanged();
    void rpmEngineChanged();

public slots:
    void setCarLocked(bool newCarLocked);
    void setOutdoorTemp(int32_t newOutdoorTemp);
    void setUserName(const QString &newUserName);
    void setCurrentTime(const QString &newCurrentTime);
    void currentTimeTimerTimeout();
    void setCarIconSettingStatus(bool newCarIconSettingStatus);
    void setFuellevel(const int32_t &newFuellevel);
    void setCoolant(int32_t newCoolant);
    void setCarspeed(uint32_t newCarspeed);
    void setRpmEngine(uint32_t newRpmEngine);

private:
    bool m_carLocked;
    int32_t m_outdoorTemp;
    QString m_userName;
    QString m_currentTime;
    QTimer *m_currentTimeTimer;
    bool m_carIconSettingStatus;
    int32_t m_fuellevel;
    int32_t m_coolant;
    uint32_t m_carspeed;
    uint32_t m_rpmEngine;
};

#endif // SYSTEM_H
