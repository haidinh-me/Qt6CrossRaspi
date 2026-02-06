#ifndef CANCONTROLLER_H
#define CANCONTROLLER_H

#include <QObject>
#include <QCanBus>
#include <QCanBusDevice>
#include <QCanBusFrame>
#include <QUdpSocket>
#include <QDataStream>
#include <QNetworkDatagram>
#include <QDebug>

#include "CAN_Message.h"
#include "Controllers/system.h"
#include "Controllers/hvachandler.h"
#include "Controllers/audiovolum.h"
#include "Controllers/inforbarclass.h"
#include "Communication/cancontroller.h"
#include <Controllers/system.h>
#include <Controllers/hvachandler.h>
#include <Controllers/audiovolum.h>
#include <Controllers/inforbarclass.h>
#include <Communication/cancontroller.h>

#include <cstring>

class cancontroller : public QObject
{
    Q_OBJECT
public:
    explicit cancontroller(System *system_,
                           HVACHandler *driver_,
                           HVACHandler *passenger_,
                           AudioVolum *audio_,
                           InforBarClass *inforbar_,
                           QObject *parent = nullptr);

    ~cancontroller();

    void UDP_Protocol();
    void onFrameReceived();

    void print_signal(uint8_t *buff, CAN_Message *msg);

    quint8 getID() const {return canId;}

    void setID(quint8 &ID) {canId = ID;}

    void setDATA(quint8 &index, quint8 &value) {buff[index] = value;}

    quint8* getDATA() {return buff;}

    void DataHandle(quint32 &canId, uint8_t *buff);

    Q_INVOKABLE bool sentTempDriver(int val);

    Q_INVOKABLE bool sentTempPassenger(int val);

    Q_INVOKABLE bool sentAudio(int val);


signals:

private slots:

private:
    CanSignal*  temp_inside;
    CanSignal*  auto_signal;
    CanSignal*  volume_level;
    CanSignal*  havc_passenger;
    CanSignal*  havc_driver;
    CanSignal*  checksum_havc;
    CAN_Message *havcMsg;

    CanSignal* temp_enviroment;
    CanSignal* check_engine;
    CanSignal* rpm_engine;
    CanSignal* car_speed;
    CanSignal* lock;
    CanSignal* temp_engine;
    CanSignal* fuel_level;
    CanSignal* checksum_sysinfor;
    CAN_Message *sysInforMsg;


    CanSignal* gear_d;
    CanSignal* gear_n;
    CanSignal* gear_r;
    CanSignal* gear_p;
    CanSignal* checksum_gearbox;
    CAN_Message *gearboxMsg;


    CanSignal* fog_light;
    CanSignal* hazard;
    CanSignal* low_beam;
    CanSignal* hight_beam;
    CanSignal* turn_right;
    CanSignal* turn_left;
    CanSignal* checksum_indicator;
    CAN_Message *indicatorMsg;

    quint32 canId{};
    quint8 buff[8]{};

    System *sysInfor_{};
    HVACHandler * hvacDriver_{};
    HVACHandler * hvacPassenger_{};
    AudioVolum  * audioVolum_{};
    InforBarClass * inforBar_{};

    QCanBusDevice * m_device;
    QUdpSocket *udpSocket;

};

#endif // CANCONTROLLER_H
