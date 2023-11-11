#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class View : public QWidget {
    Q_OBJECT

public:
    explicit View(QWidget *parent = nullptr);

signals:
    void fileSelected(const QString& filePath);

private slots:
    void browseButtonClicked();

private:
    QLineEdit *fileLineEdit;
};

#endif // VIEW_H
