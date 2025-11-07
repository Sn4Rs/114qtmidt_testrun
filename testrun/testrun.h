#ifndef TESTRUN_H
#define TESTRUN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class testrun;
}
QT_END_NAMESPACE

class testrun : public QWidget
{
    Q_OBJECT

public:
    testrun(QWidget *parent = nullptr);
    ~testrun();

private:
    Ui::testrun *ui;
};
#endif // TESTRUN_H
