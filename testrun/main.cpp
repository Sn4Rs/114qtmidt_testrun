#include "testrun.h"
#include <QApplication>
#include <QScreen>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testrun w, w2;
    
    // Get the available screen geometry
    QScreen *screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->availableGeometry();
    
    // Calculate window dimensions
    int windowWidth = w.width();
    int windowHeight = w.height();
    int spacing = 20; // Space between windows
    
    // Calculate positions to center windows horizontally with spacing
    int totalWidth = windowWidth * 2 + spacing;
    int startX = (screenGeometry.width() - totalWidth) / 2;
    int startY = (screenGeometry.height() - windowHeight) / 2;
    
    // Position first window
    w.move(startX, startY);
    w.show();
    
    // Position second window to the right of the first with spacing
    w2.move(startX + windowWidth + spacing, startY);
    w2.show();
    
    return a.exec();
}
