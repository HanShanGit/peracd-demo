#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushTry_clicked()
{
    ui->textInfo->setText("are you ok? ");
}

void MainWindow::on_menuAuto_clicked()
{
    ui->textInfo->setText("Menu Auto clicked!");
}
