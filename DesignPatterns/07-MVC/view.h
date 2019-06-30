#ifndef VIEW_H
#define VIEW_H

#include <QMainWindow>
#include <QtDebug>
#include "playerobserver.h"
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
    explicit View(ModelInterface *model, QWidget *parent = nullptr);
void Update();
    ~View();

private slots:
    void on_BtnStart_clicked();

private:
    Ui::View *ui;
};

#endif // VIEW_H
