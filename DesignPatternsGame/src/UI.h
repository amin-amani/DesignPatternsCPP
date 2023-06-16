#ifndef UI_H
#define UI_H

#include <QObject>
#include <QDebug>
#include <QMetaObject>
#include <QtQuick/QQuickView>
#include <QDateTime>
#include <QApplication>
#include <QtQml/qqmlcontext.h>
#include <QTranslator>
#include <stdlib.h>
#include <stdio.h>
#include <QtQml/QQmlApplicationEngine>
#include <QTimer>
#include <QElapsedTimer>
#include <QtNetwork/QNetworkInterface>


class UI : public QObject
{
    Q_OBJECT

    QQmlContext *ctx;




public:

    QQuickItem *RootObject=nullptr;
    QQuickView  *View=nullptr;
    QTranslator m_translator;

    Q_INVOKABLE void qmltToCpp(int id);
    explicit UI(QObject *parent = nullptr);

    void Init();


   public slots:
    void FromCppToQml(QString id);
};


#endif // UI_H
