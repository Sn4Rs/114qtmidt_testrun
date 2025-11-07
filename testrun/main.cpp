#include "testrun.h"
#include <QWindow>
#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testrun w,w2;
    //align w,w2
    w.move(100,100);
    w.show();
    w2.move(1000,100);
    w2.show();
    return a.exec();
}
