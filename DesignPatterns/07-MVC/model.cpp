#include "model.h"

Model::Model()
{

}

void Model::Init()
{

}

void Model::On()
{
    qDebug()<<"started in model";
NotifyObservers();
}

void Model::Off()
{

}

void Model::SetVolume(int volume)
{

}

int Model::GetVolume()
{
    _observerList[0]->PlaybackFinished();
    return  100;

}
void Model::NotifyObservers()
{
    for (int i=0;i<_observerList.count();i++) {
        _observerList[i]->Update();
    }

}
void Model::RegisterObserver(PlayerObserver *observer)
{
_observerList.append(observer);
}

void Model::RemoveObserver(PlayerObserver *observer)
{
    int index=_observerList.indexOf(observer);
    _observerList.removeAt(index);
}
