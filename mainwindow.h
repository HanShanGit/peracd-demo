#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QTime>
#include <QSpinBox>
#include <QFontComboBox>
#include <QLabel>
#include <QColorDialog>
#include <QFileDialog>
#include <QTextStream>
#include <QFile>

#include "mythread.h"

namespace Ui {
class MainWindow;
}
class ImageWidget;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void recvShowPicSignal(QImage image);//接收并显示图片的函数
    ~MainWindow();

private slots:
    void on_pushTry_clicked();

    void on_pushRetry_clicked();

    void on_actionAuto_triggered();

    void on_actionEnd_triggered();

    void on_actionStep_triggered();

    void on_textLogBtn_clicked();

    void on_picBtn_clicked();

    void on_picAutoBtn_clicked();

    void updateTime();

    void on_threadStart_triggered();

private:
    Ui::MainWindow *ui;
    ImageWidget *m_Image;
    QImage *image;
    void writeLog(QString content);
    QTimer* m_timer;
};

#endif // MAINWINDOW_H
