#ifndef AUDIOVOLUM_H
#define AUDIOVOLUM_H

#include <QObject>

class AudioVolum : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int volumLevel READ volumLevel WRITE setVolumLevel NOTIFY volumLevelChanged FINAL)
public:
    explicit AudioVolum(QObject *parent = nullptr);

    int volumLevel() const;

    Q_INVOKABLE void changedVolumLevel(const int &val);


signals:
    void volumLevelChanged();

public slots:
    void setVolumLevel(int newVolumLevel);

private:
    int m_volumLevel;

};

#endif // AUDIOVOLUM_H
