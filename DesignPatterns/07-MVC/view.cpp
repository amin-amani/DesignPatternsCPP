#include "view.h"
#include "ui_view.h"

View::View(ModelInterface *model,ControllerInterface *controller,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
    _model=model;
    _controller=controller;
    model->RegisterObserver((PlayerObserver*)this);

}

void View::Update()
{
//qDebug()<<"update UI";
    ui->LabTime->setText(QString::number( _controller->GetVolume()));
}

void View::PlaybackFinished()
{
    ui->statusBar->showMessage("playback finished");
}

View::~View()
{
    delete ui;
}

void View::on_BtnStart_clicked()
{
_controller->Start();

}
