#ifndef MODEL_H
#define MODEL_H
#include "modelinterface.h"
#include "QDebug"
#include <qlist.h>
class Model : public ModelInterface
{
    QList<PlayerObserver*> _observerList;
public:


    Model();
    void Init();
    void On();
    void Off();
    void SetVolume(int volume);
    int GetVolume();
    void RegisterObserver(PlayerObserver *observer);
    void RemoveObserver(PlayerObserver *observer);
    void NotifyObservers();
};

#endif // MODEL_H
