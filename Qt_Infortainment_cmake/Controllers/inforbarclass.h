#ifndef INFORBARCLASS_H
#define INFORBARCLASS_H

#include <QObject>

class InforBarClass : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool leftSignal READ leftSignal WRITE setLeftSignal NOTIFY leftSignalChanged FINAL)
    Q_PROPERTY(bool rightSignal READ rightSignal WRITE setRightSignal NOTIFY rightSignalChanged FINAL)
    Q_PROPERTY(bool lightPhare READ lightPhare WRITE setLightPhare NOTIFY lightPhareChanged FINAL)
    Q_PROPERTY(bool lightCos READ lightCos WRITE setLightCos NOTIFY lightCosChanged FINAL)
    Q_PROPERTY(bool hazard READ hazard WRITE setHazard NOTIFY hazardChanged FINAL)
    Q_PROPERTY(bool temperature READ temperature WRITE setTemperature NOTIFY temperatureChanged FINAL)
    Q_PROPERTY(bool lightSm READ lightSm WRITE setLightSm NOTIFY lightSmChanged FINAL)
    Q_PROPERTY(bool indicator READ indicator WRITE setIndicator NOTIFY indicatorChanged FINAL)
    Q_PROPERTY(bool paking READ paking WRITE setPaking NOTIFY pakingChanged FINAL)
    Q_PROPERTY(bool gearR READ gearR WRITE setGearR NOTIFY gearRChanged FINAL)
    Q_PROPERTY(bool gearN READ gearN WRITE setGearN NOTIFY gearNChanged FINAL)
    Q_PROPERTY(bool gearD READ gearD WRITE setGearD NOTIFY gearDChanged FINAL)
public:
    explicit InforBarClass(QObject *parent = nullptr);

    bool leftSignal() const;
    bool rightSignal() const;
    bool lightPhare() const;
    bool lightCos() const;
    bool hazard() const;
    bool temperature() const;
    bool lightSm() const;
    bool indicator() const;
    bool paking() const;
    bool gearR() const;
    bool gearN() const;
    bool gearD() const;

signals:
    void leftSignalChanged();
    void rightSignalChanged();
    void lightPhareChanged();
    void lightCosChanged();
    void hazardChanged();
    void temperatureChanged();
    void lightSmChanged();
    void indicatorChanged();
    void pakingChanged();
    void gearRChanged();
    void gearNChanged();
    void gearDChanged();

public slots:
    void setLeftSignal(bool newLeftSignal);
    void setRightSignal(bool newRightSignal);
    void setLightPhare(bool newLightPhare);
    void setLightCos(bool newLightCos);
    void setHazard(bool newHazard);
    void setTemperature(bool newTemperature);
    void setLightSm(bool newLightSm);
    void setIndicator(bool newIndicator);
    void setPaking(bool newPaking);
    void setGearR(bool newGearR);
    void setGearN(bool newGearN);
    void setGearD(bool newGearD);

private:
    bool m_leftSignal;
    bool m_rightSignal;
    bool m_lightPhare;
    bool m_lightCos;
    bool m_hazard;
    bool m_temperature;
    bool m_lightSm;
    bool m_indicator;
    bool m_paking;
    bool m_gearR;
    bool m_gearN;
    bool m_gearD;
};

#endif // INFORBARCLASS_H
