#include <QtTest>
class TemplateTest : public QObject
{
    Q_OBJECT

public:
    TemplateTest();
    ~TemplateTest();

private slots:
    void DoTest();

};

TemplateTest::TemplateTest()
{

}

TemplateTest::~TemplateTest()
{

}

void TemplateTest::DoTest()
{
        QVERIFY2(1==1,"test library is not ready");
}


QTEST_APPLESS_MAIN(TemplateTest)

#include "tst_Template.moc"
