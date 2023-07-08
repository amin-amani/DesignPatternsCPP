#ifndef SINGLETONLOGGER_H
#define SINGLETONLOGGER_H

#include <QString>
#include <QDebug>
class SingleTonLogger
{
    static SingleTonLogger* _singleTonLoger;
    int _messageCounter=0;
    SingleTonLogger();
public:
    static SingleTonLogger* GetInstance();
    void Log(QString data);
};

#endif // SINGLETONELOGGER_H
