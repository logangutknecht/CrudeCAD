#include "Controller.h"
#include <QMessageBox>

Controller::Controller(QObject *parent) : QObject(parent) {
    view = new View();
    connect(view, &View::fileSelected, this, &Controller::handleFileSelected);
}

void Controller::showMainWindow() {
    view->show();
}

void Controller::handleFileSelected(const QString& filePath) {
    QMessageBox::information(view, "File Selected", "Selected file: " + filePath);
    // Add logic for loading and visualizing the STEP file here
}
