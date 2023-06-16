#include <QCoreApplication>
#include <QDebug>
#include <QtQuick/qquickview.h>
#include <QGuiApplication>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlContext>
#include "UI.h"
#include <QTranslator>
#include <QtQml/QQmlContext>
#include <QtQml/QQmlApplicationEngine>





UI ui;



void QtRegisterCustomTypes()
{
    qRegisterMetaType<std::vector<std::string>>("std::vector<std::string>");
    qRegisterMetaType<std::vector<uint64_t>>("uint64_t");


}
//==================================================================================================================================
void UIInit()
{

}
//==================================================================================================================================


//===============================================================================================================
void CreateAndStartUI()
{
    QQuickView *view=new QQuickView();
    view->engine()->rootContext()->setContextProperty("ui", &ui);
    view->setSource(QUrl(QLatin1String("qrc:/main.qml")));
    ui.RootObject=view->rootObject();
    ui.View=view;
    ui.Init();
}

//===============================================================================================================
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // to show charts use this one

    QtRegisterCustomTypes();

    CreateAndStartUI();

    return a.exec();
}
//===============================================================================================================
