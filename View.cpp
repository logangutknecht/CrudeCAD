#include "View.h"
#include <QFileDialog>

View::View(QWidget *parent) : QWidget(parent) {
    fileLineEdit = new QLineEdit(this);
    QPushButton *browseButton = new QPushButton("Browse", this);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(fileLineEdit);
    layout->addWidget(browseButton);

    connect(browseButton, &QPushButton::clicked, this, &View::browseButtonClicked);
}

void View::browseButtonClicked() {
    QString filePath = QFileDialog::getOpenFileName(this, "Open STEP File", "", "STEP Files (*.stp *.step)");
    if (!filePath.isEmpty()) {
        fileLineEdit->setText(filePath);
        emit fileSelected(filePath);
    }
}
