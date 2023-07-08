#ifndef MODEINTERFACE_H
#define MODEINTERFACE_H

#include "playerobserver.h"

class ModelInterface
{
public:

    virtual void Init()=0;
    virtual void On()=0;
    virtual void Off()=0;
    virtual void SetVolume(int volume)=0;
    virtual int GetVolume()=0;
    //virtual ~ModelInterface()=0;
    virtual void RegisterObserver(PlayerObserver *observer)=0;
    virtual void RemoveObserver(PlayerObserver *observer)=0;


};

#endif // MODEINTERFACE_H
