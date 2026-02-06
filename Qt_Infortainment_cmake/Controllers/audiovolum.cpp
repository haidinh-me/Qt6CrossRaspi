#include "audiovolum.h"
#include <QDebug>

AudioVolum::AudioVolum(QObject *parent)
    : QObject{parent}
    , m_volumLevel(50)
{}

int AudioVolum::volumLevel() const
{
    return m_volumLevel;
}

void AudioVolum::changedVolumLevel(const int &val)
{
    int newVolumLevel = m_volumLevel + val;

    if(newVolumLevel <= 0)
        newVolumLevel = 0;
    else if(newVolumLevel >= 100)
        newVolumLevel = 100;

    setVolumLevel(newVolumLevel);
    //qDebug() << volumLevel();
}

void AudioVolum::setVolumLevel(int newVolumLevel)
{
    if (m_volumLevel == newVolumLevel)
        return;
    m_volumLevel = newVolumLevel;
    emit volumLevelChanged();
}
