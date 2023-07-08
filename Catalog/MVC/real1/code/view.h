#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QtDebug>
#include "modelinterface.h"
#include "controllerinterface.h"

namespace Ui {
class View;
}

class View : public QMainWindow,PlayerObserver
{
    Q_OBJECT
ModelInterface *_model;
ControllerInterface *_controller;
public:
    explicit View(ModelInterface *model,ControllerInterface *controller, QWidget *parent = nullptr);
void Update();
void PlaybackFinished();
    ~View();

private slots:
    void on_BtnStart_clicked();

private:
    Ui::View *ui;
};

#endif // VIEW_H
