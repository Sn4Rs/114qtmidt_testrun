#include "testrun.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testrun w;
    w.show();
    return a.exec();
}
