#include "view.h"
#include <QApplication>

#include "model.h"
#include "controllerinterface.h"
#include "controller.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ModelInterface *model=new Model();
    ControllerInterface *controller=new  Controller(model);
    //View w;

    //w.show();

    return a.exec();
}
