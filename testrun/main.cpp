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
    if (!screen) {
        // Fallback positioning if no screen is available
        w.show();
        w2.show();
        return a.exec();
    }
    
    QRect screenGeometry = screen->availableGeometry();
    
    // Get window dimensions from the widget's size hint
    QSize windowSize = w.sizeHint();
    int windowWidth = windowSize.width() > 0 ? windowSize.width() : 640;
    int windowHeight = windowSize.height() > 0 ? windowSize.height() : 480;
    int spacing = 20; // Space between windows
    
    // Calculate positions to center windows horizontally with spacing
    int totalWidth = windowWidth * 2 + spacing;
    int startX = (screenGeometry.width() - totalWidth) / 2;
    int startY = (screenGeometry.height() - windowHeight) / 2;
    
    // Ensure windows are not positioned off-screen
    if (startX < screenGeometry.x()) {
        startX = screenGeometry.x();
    }
    if (startY < screenGeometry.y()) {
        startY = screenGeometry.y();
    }
    
    // Position first window
    w.move(startX, startY);
    w.show();
    
    // Position second window to the right of the first with spacing
    w2.move(startX + windowWidth + spacing, startY);
    w2.show();
    
    return a.exec();
}
