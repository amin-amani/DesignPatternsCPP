#ifndef PLAYEROBSERVER_H
#define PLAYEROBSERVER_H



class PlayerObserver
{
public:
   //Observer();
   virtual void Update()=0;
    virtual void PlaybackFinished()=0;
   virtual ~PlayerObserver() = default;

};
#endif // PLAYEROBSERVER_H
