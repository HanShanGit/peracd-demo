#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

#include <QTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString getTime(){
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss ");
    return current_date;
}

void MainWindow::on_pushTry_clicked()
{
    ui->textInfo->append(getTime()+"pushTry");
}

void MainWindow::on_pushRetry_clicked()
{
    ui->textInfo->append(getTime()+"pushRetry");
}

void MainWindow::on_actionAuto_triggered()
{
    ui->textInfo->append(getTime()+"actionAuto");
}

void MainWindow::on_actionEnd_triggered()
{
    ui->textInfo->append(getTime()+"actionAuto");
}

void MainWindow::on_actionStep_triggered()
{
    ui->textInfo->append(getTime()+"actionStep");
}
