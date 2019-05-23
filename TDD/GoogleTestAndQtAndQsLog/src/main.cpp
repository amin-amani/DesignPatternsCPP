#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include "QsLog.h"
#include "QsLog.h"
#include "QsLogDest.h"
#include "QsLogMessage.h"
#include "config.h"
#include "Calc.h"

using namespace QsLogging;

void logFunction(const QsLogging::LogMessage &message)
{
    qDebug()<< "From log function: " << qPrintable(message.formatted)
            << " " << static_cast<int>(message.level) ;
}
//===================================================================================================


void LogInit(QCoreApplication&a)
{

    // 1. init the logging mechanism
    Logger& logger = Logger::instance();
    logger.setLoggingLevel(QsLogging::TraceLevel);
    const QString sLogPath(QDir(a.applicationDirPath()).filePath("log.txt"));
    // 2. add two destinations
    DestinationPtrU fileDestination(DestinationFactory::MakeFileDestination(
                                        sLogPath, LogRotationOption::EnableLogRotation, MaxSizeBytes(512), MaxOldLogCount(2)));
    DestinationPtrU debugDestination(DestinationFactory::MakeDebugOutputDestination());
    DestinationPtrU functorDestination(DestinationFactory::MakeFunctorDestination(&logFunction));
    //logger.addDestination(std::move(debugDestination));
    logger.addDestination(std::move(fileDestination));
    logger.addDestination(std::move(functorDestination));
    // 3. start logging
    QLOG_INFO() << "Program started";
    QLOG_INFO() << "Built with Qt" << QT_VERSION_STR << "running on" << qVersion()<<"git Brance: "<<CurrentBranch<<" commit:"<<CurrentCommit;;

}

//===================================================================================================

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    LogInit(a);
    qDebug()<<"hooooo";
    qDebug()<<Calc::Mul2(4);
    return a.exec();
}
