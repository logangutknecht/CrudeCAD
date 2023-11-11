#include <QApplication>
#include "Controller.h"

int main(int argx, char *argv[]) {
    QApplication a(argc, argv);

    Controller controller;
    controller.showMainWindow();

    return a.exec();
}