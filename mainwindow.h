#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushTry_clicked();

    void on_pushRetry_clicked();

    void on_actionAuto_triggered();

    void on_actionEnd_triggered();

    void on_actionStep_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
