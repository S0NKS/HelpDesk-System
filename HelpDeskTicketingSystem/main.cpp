#include <QApplication>
#include "loginwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    loginwindow loginWindow;
    loginWindow.show();
    return app.exec();
}
