#include "view.h"
#include "ui_view.h"

View::View(ModelInterface *model,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);
    _model=model;
}

void View::Update()
{
qDebug()<<"update UI";
}

View::~View()
{
    delete ui;
}

void View::on_BtnStart_clicked()
{
_controller->Start();
}
