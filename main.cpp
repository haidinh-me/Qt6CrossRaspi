#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <Controllers/system.h>
#include <Controllers/hvachandler.h>
#include <Controllers/audiovolum.h>
#include <Controllers/inforbarclass.h>
#include <Communication/cancontroller.h>


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    System m_systemHandler;
    HVACHandler m_driverHandler;
    HVACHandler m_passengerHandler;
    AudioVolum  m_audioVolumHandler;
    InforBarClass m_inforBarHandler;
    cancontroller m_cancontroller(&m_systemHandler,
                                  &m_driverHandler,
                                  &m_passengerHandler,
                                  &m_audioVolumHandler,
                                  &m_inforBarHandler);


    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);

    QQmlContext * context = engine.rootContext();
    context->setContextProperty("systemHandler", &m_systemHandler);
    context->setContextProperty("driverHVACHandler", &m_driverHandler);
    context->setContextProperty("passengerHVACHandler", &m_passengerHandler);
    context->setContextProperty("volumLevelHandler", &m_audioVolumHandler);
    context->setContextProperty("inforBarHandler", &m_inforBarHandler);
    context->setContextProperty("canControllerHandler", &m_cancontroller);

    engine.load(url);

    return app.exec();
}
