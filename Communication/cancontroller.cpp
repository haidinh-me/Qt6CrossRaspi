#include "cancontroller.h"

cancontroller::cancontroller(System *system_,
                             HVACHandler *driver_,
                             HVACHandler *passenger_,
                             AudioVolum *audio_,
                             InforBarClass *inforbar_,
                             QObject *parent)
    : QObject{parent}
    , sysInfor_(system_)
    , hvacDriver_(driver_)
    , hvacPassenger_(passenger_)
    , audioVolum_(audio_)
    , inforBar_(inforbar_)
{
    temp_inside = new CanSignal("TMEP_INSIDE",              17, 10, Endianness::Motorola, true, 0.1, -5.0, -5.0, 52.1);
    auto_signal = new CanSignal("AUTO_SIGNAL",              0, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    volume_level = new CanSignal("VOLUME_LEVEL",            7, 7, Endianness::Motorola, false, 1.0, 0.0, 0.0, 100.0);
    havc_passenger = new CanSignal("HAVC_PASSENGER",        8, 6, Endianness::Motorola, false, 1.0, 0.0, 0.0, 50.0);
    havc_driver = new CanSignal("HAVC_DRIVER",              15, 6, Endianness::Motorola, false, 1.0, 0.0, 0.0, 50.0);
    checksum_havc = new CanSignal("CHECKSUM",               34, 3, Endianness::Motorola, false, 1.0, 0.0, 0.0, 3.0);
    const std::vector<CanSignal*> havcSignals = {
        temp_inside,
        auto_signal,
        volume_level,
        havc_passenger,
        havc_driver,
        checksum_havc
    };
    havcMsg = new CAN_Message(1110, 5, havcSignals);

    temp_enviroment = new CanSignal("TEMP_ENVIROMENT",       54, 11, Endianness::Motorola, true, 0.1, -40.0, -40.0, 102.3);
    check_engine = new CanSignal("CHECK_ENGINE",             16, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    rpm_engine = new CanSignal("RPM_ENGINE",                 32, 16, Endianness::Intel, false, 1.0, 0.0, 0.0, 65535.0);
    car_speed = new CanSignal("CAR_SPEED",                   24, 8, Endianness::Intel, false, 1.0, 0.0, 0.0, 255.0);
    lock = new CanSignal("LOCK",                             18, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    temp_engine = new CanSignal("TEMP_ENGINE",               15, 13, Endianness::Motorola, true, 0.1, -10.0, -10.0, 409.5);
    fuel_level = new CanSignal("FUEL_LEVEL",                 7, 7, Endianness::Motorola, false, 1.0, 0.0, 0.0, 100.0);
    checksum_sysinfor = new CanSignal("CHECKSUM",            58, 3, Endianness::Motorola, false, 1.0, 0.0, 0.0, 3.0);
    const std::vector<CanSignal*> sysinforSignals = {
        temp_enviroment,
        check_engine,
        rpm_engine,
        car_speed,
        lock,
        temp_engine,
        fuel_level,
        checksum_sysinfor
    };
    sysInforMsg = new CAN_Message(1109, 8, sysinforSignals);

    gear_d = new CanSignal("GEAR_D",                         15, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    gear_n = new CanSignal("GEAR_N",                         2, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    gear_r = new CanSignal("GEAR_R",                         21, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    gear_p = new CanSignal("GEAR_P",                         27, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    checksum_gearbox = new CanSignal("CHECKSUM",             34, 5, Endianness::Motorola, false, 1.0, 0.0, 0.0, 15.0);
    const std::vector<CanSignal*> gearboxSignals = {
        gear_d,
        gear_n,
        gear_r,
        gear_p,
        checksum_gearbox
    };
    gearboxMsg = new CAN_Message(1108, 6, gearboxSignals);

    fog_light = new CanSignal("FOG_LIGHT",                   19, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    hazard = new CanSignal("HAZARD",                         13, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    low_beam = new CanSignal("LOW_BEAM",                     25, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    hight_beam = new CanSignal("HIGHT_BEAM",                 4, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    turn_right = new CanSignal("TURN_RIGHT",                 0, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    turn_left = new CanSignal("TURN_LEFT",                   7, 1, Endianness::Motorola, false, 1.0, 0.0, 0.0, 1.0);
    checksum_indicator = new CanSignal("CHECKSUM",           34, 3, Endianness::Motorola, false, 1.0, 0.0, 0.0, 3.0);
    const std::vector<CanSignal*> indicatorSignals = {
        fog_light,
        hazard,
        low_beam,
        hight_beam,
        turn_right,
        turn_left,
        checksum_indicator
    };
    indicatorMsg = new CAN_Message(1092, 5, indicatorSignals);

    onFrameReceived();
    //UDP_Protocol();
}

cancontroller:: ~cancontroller()
{
    delete temp_inside;
    delete auto_signal;
    delete volume_level;
    delete havc_passenger;
    delete havc_driver;
    delete checksum_havc;
    delete havcMsg;

    delete temp_enviroment;
    delete check_engine;
    delete rpm_engine;
    delete car_speed;
    delete lock;
    delete temp_engine;
    delete fuel_level;
    delete checksum_sysinfor;
    delete sysInforMsg;

    delete gear_d;
    delete gear_n;
    delete gear_r;
    delete gear_p;
    delete checksum_gearbox;
    delete gearboxMsg;

    delete fog_light;
    delete hazard;
    delete low_beam;
    delete hight_beam;
    delete turn_right;
    delete turn_left;
    delete checksum_indicator;
    delete indicatorMsg;

    qDebug() << "Released all CAN memory!";
}

void cancontroller::onFrameReceived()
{
    if (!QCanBus::instance()->plugins().contains(QStringLiteral("socketcan"))) {
        qDebug() << "Failed: plugin socketcan not found!";
        return;
    }

    QString errorString;
    m_device = QCanBus::instance()->createDevice(
        QStringLiteral("socketcan"), QStringLiteral("can0"), &errorString);

    if (!m_device) {
        qDebug() << "Initialize device failed :" << errorString;
        return;
    }

    QObject::connect(m_device, &QCanBusDevice::framesReceived, this, [this]() {
        while (m_device->framesAvailable()) {
            const QCanBusFrame frame = m_device->readFrame();

            quint32 canID;
            uint8_t buffer[8];

            canID = frame.frameId();

            QByteArray payload = frame.payload();
            int len = qMin(payload.size(), 8);
            memcpy(buffer, payload.constData(), len);

            DataHandle(canID, buffer);
        }
    });

    if (m_device->connectDevice()) {
        qDebug() << "Connect succesfully to can0!";
    } else {
        qDebug() << "Connect failed: " << m_device->errorString();
    }
}
void cancontroller::UDP_Protocol()
{
    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress::LocalHost, 35550);


    connect(udpSocket, &QUdpSocket::readyRead, this, [this]() {
        while (udpSocket->hasPendingDatagrams()) {
            QNetworkDatagram datagram = udpSocket->receiveDatagram();
            QByteArray data = datagram.data();

            if (data.size() < 4) return;

            QDataStream stream(data);
            stream.setByteOrder(QDataStream::BigEndian);

            canId = 0;
            stream >> canId; // Đọc 4 byte làm ID

            qDebug() << "CAN FRAME RECEIVE | ID:" << canId << "  DLC:" << data.size() - 4 << "  DATA:" << data.mid(4).toHex(' ').toUpper();

            for(int i = 0 ;i < data.size() - 4; i ++)
                buff[i] = static_cast<quint8>(data[i + 4]);

            DataHandle(canId, buff);
        }
    });
}

void cancontroller::DataHandle(quint32 &canId, uint8_t *buff)
{
    if(canId == 1110)
    {//hvac
    }
    else if(canId == 1109)
    {
        print_signal(buff, sysInforMsg);

        sysInfor_->setOutdoorTemp(static_cast<int32_t>(temp_enviroment->physValue));
        inforBar_->setIndicator(static_cast<bool>(check_engine->physValue));
        sysInfor_->setRpmEngine(static_cast<uint32_t>(rpm_engine->physValue));
        sysInfor_->setCarspeed(static_cast<uint32_t>(car_speed->physValue));
        if(sysInfor_->carspeed() > 60) sysInfor_->setCarLocked(true);
        else sysInfor_->setCarLocked(static_cast<bool>(lock->physValue));

        sysInfor_->setCoolant(static_cast<int32_t>(temp_engine->physValue));
        if(sysInfor_->coolant() >= 75) inforBar_->setTemperature( true );
        else inforBar_->setTemperature(false);

        sysInfor_->setFuellevel(static_cast<uint32_t>(fuel_level->physValue));
    }
    else if(canId == 1108)
    {
        print_signal(buff, gearboxMsg);

        inforBar_->setPaking(static_cast<bool>(gear_p->physValue));
        inforBar_->setGearR(static_cast<bool>(gear_r->physValue));
        inforBar_->setGearN(static_cast<bool>(gear_n->physValue));
        inforBar_->setGearD(static_cast<bool>(gear_d->physValue));
    }
    else if(canId == 1092)
    {
        print_signal(buff, indicatorMsg);

        inforBar_->setLightSm(static_cast<bool>(fog_light->physValue));
        inforBar_->setHazard(static_cast<bool>(hazard->physValue));
        inforBar_->setLightPhare(static_cast<bool>(low_beam->physValue));
        inforBar_->setLightCos(static_cast<bool>(hight_beam->physValue));
        inforBar_->setRightSignal(static_cast<bool>(turn_right->physValue));
        inforBar_->setLeftSignal(static_cast<bool>(turn_left->physValue));
    }
}

void cancontroller::print_signal(uint8_t *buff, CAN_Message *msg)
{
    msg->unpack_msg(buff);
    qDebug()<< "-----------Unpacked CAN Message Signals-----------";
    for(auto *count : msg->getSIGNAL())
    {
        qDebug()<< count->name << ": "<< count->physValue;
    }
}

bool cancontroller::sentTempDriver(int val)
{
    uint8_t buff[5]{};
    havcMsg->setSignal(buff, *havc_driver, val);
    havcMsg->setSignal(buff, *checksum_havc, 1.0);

    qDebug() << "Sent TempDriver!";
    print_signal(buff, havcMsg);

    return true;
}

bool cancontroller::sentTempPassenger(int val)
{
    uint8_t buff[5]{};
    havcMsg->setSignal(buff, *havc_passenger, val);
    havcMsg->setSignal(buff, *checksum_havc, 2.0);

    qDebug() << "Sent TempPassenger!";
    print_signal(buff, havcMsg);

    return true;
}

bool cancontroller::sentAudio(int val)
{
    uint8_t buff[5]{};
    havcMsg->setSignal(buff, *volume_level, val);
    havcMsg->setSignal(buff, *checksum_havc, 3.0);

    qDebug() << "Sent Audio!";
    print_signal(buff, havcMsg);

    return true;
}
