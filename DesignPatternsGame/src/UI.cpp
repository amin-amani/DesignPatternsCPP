#include "UI.h"


// =========================================================================

void UI::qmltToCpp(int id)
{
    FromCppToQml("iterator");
   qDebug()<<"cpp"<<id;
}

UI::UI(QObject *parent) : QObject(parent)
{

}
void UI::FromCppToQml(QString id)
{
    QMetaObject::invokeMethod((QObject*)RootObject, "qmlfunc",
                              Q_ARG(QVariant,id)
                              );
}
// =========================================================================
void UI::Init()
{

    View->showFullScreen();
   FromCppToQml("mediator");

}
