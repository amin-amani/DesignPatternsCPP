#include "singletonlogger.h"
SingleTonLogger* SingleTonLogger::_singleTonLoger = nullptr;

SingleTonLogger::SingleTonLogger()
{
    _messageCounter=0;
}

SingleTonLogger *SingleTonLogger::GetInstance()
{
    if(!_singleTonLoger)
        _singleTonLoger=new SingleTonLogger();
    return _singleTonLoger;
}

void SingleTonLogger::Log(QString data)
{
    qDebug()<<_messageCounter++<<":"<<data;
}

