#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include "View.h"

class Controller : public QObject {
    Q_OBJECT

public:
    explicit Controller(QObject *parent = nullptr);

public slots:
    void showMainWindow();

private slots:
    void handleFileSelected(const QString& filePath);
// Expand this function to implement the logic for loading and visualizing STEP files

private:
    View *view;
};

#endif // CONTROLLER_H
