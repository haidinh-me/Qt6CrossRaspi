#ifndef HVACHANDLER_H
#define HVACHANDLER_H

#include <QObject>


class HVACHandler : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int targetTemperature READ targetTemperature WRITE setTargetTemperature NOTIFY targetTemperatureChanged FINAL)
    Q_PROPERTY(bool autoSignal READ autoSignal WRITE setAutoSignal NOTIFY autoSignalChanged FINAL)
    Q_PROPERTY(int8_t tempInside READ tempInside WRITE setTempInside NOTIFY tempInsideChanged FINAL)
public:
    explicit HVACHandler(QObject *parent = nullptr);

    int targetTemperature() const;

    Q_INVOKABLE void changedTemperature(const int &val);

    bool autoSignal() const;
    int8_t tempInside() const;

signals:
    void targetTemperatureChanged();
    void autoSignalChanged();

    void tempInsideChanged();

public slots:
    void setTargetTemperature(int newTargetTemperature);
    void setAutoSignal(bool newAutoSignal);
    void setTempInside(int8_t newTempInside);

private:
    int m_targetTemperature;
    bool m_autoSignal;
    int8_t m_tempInside;
};

#endif // HVACHANDLER_H
