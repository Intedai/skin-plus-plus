
#include <QApplication>
#include "ColorSelector.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    // put widgets here
    ColorSelector cs;
    cs.show();
    //
    return app.exec();
}