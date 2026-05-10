
#include <QApplication>
#include "MainWindow.hpp"
#include "ColorSelector.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    // put widgets here
    MainWindow mainWindow;
    mainWindow.show();
    ColorSelector cs;
    cs.show();
    //
    return app.exec();
}