#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // 创建定时器
    m_timer = new QTimer(this);

    // 连接定时器的 timeout() 信号到自定义槽函数
    connect(m_timer, &QTimer::timeout, this, &MainWindow::updateTime);

    // 设置定时器的时间间隔为1秒（1000毫秒）
    m_timer->setInterval(1000);

    // 启动定时器
    m_timer->start();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    // 停止定时器
    m_timer->stop();
    delete m_timer;
}

QString getTime(){
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString current_date = current_date_time.toString("yyyy-MM-dd hh:mm:ss ");
    return current_date;
}

void MainWindow::writeLog(QString content){
    QString curPath = QDir::currentPath();
    QString fileName = ("DemoLog.log");
    if(fileName.isEmpty())
        return;
    ui->textInfo->append(curPath+fileName + " is not Empty");
    QFile file(fileName);
    if(file.open(QIODevice::WriteOnly|QIODevice::Append|QIODevice::Text)){
        QByteArray strBytes = content.toUtf8();
        file.write(strBytes,strBytes.length());
        ui->textInfo->append(content+  " is right");
    }
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

void MainWindow::on_textLogBtn_clicked()
{
    QString content = getTime() + ui->textEdit->toPlainText();
    ui->textInfo->append(content);
    writeLog(content);
}

void MainWindow::on_picBtn_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(// 正常加载
                    this, "open image file",
                    ".",
                    "Image files (*.bmp *.jpg *.pbm *.pgm *.png *.ppm *.xbm *.xpm);;All files (*.*)");
    image = new QImage();

    if(fileName != "")
    {

        if(image->load(fileName))
        {
            ui->textInfo->append(fileName);
            QGraphicsScene *scene = new QGraphicsScene;
            scene->addPixmap(QPixmap::fromImage(*image));
            ui->graphicsView->setScene(scene);
            ui->graphicsView->resize(image->width() + 10, image->height() + 10); // 大小不对
            ui->graphicsView->show();
        }
    }

}

void  MainWindow::recvShowPicSignal(QImage image) // 用到的imagewidget.h与.cpp
{
    QPixmap ConvertPixmap=QPixmap::fromImage(image);//The QPixmap class is an off-screen image representation that can be used as a paint device
    QGraphicsScene  *qgraphicsScene = new QGraphicsScene;//要用QGraphicsView就必须要有QGraphicsScene搭配着用
//    m_Image = new ImageWidget(ConvertPixmap);//实例化类ImageWidget的对象m_Image，该类继承自QGraphicsItem，是自己写的类【为何要用指针呢】
    int nwith = ui->graphicsView->width();//获取界面控件Graphics View的宽度
    int nheight = ui->graphicsView->height();//获取界面控件Graphics View的高度
//    m_Image->setQGraphicsViewWH(nwith,nheight);//将界面控件Graphics View的width和height传进类m_Image中
//    qgraphicsScene->addItem(m_Image);//将QGraphicsItem类对象放进QGraphicsScene中
//    ui->graphicsView->setSceneRect(QRectF(-(nwith/2),-(nheight/2),nwith,nheight));//使视窗的大小固定在原始大小，不会随图片的放大而放大（默认状态下图片放大的时候视窗两边会自动出现滚动条，并且视窗内的视野会变大），防止图片放大后重新缩小的时候视窗太大而不方便观察图片
//    ui->graphicsView->setScene(qgraphicsScene);//Sets the current scene to scene. If scene is already being viewed, this function does nothing.
//    ui->graphicsView->setFocus();//将界面的焦点设置到当前Graphics View控件
}

void MainWindow::on_picAutoBtn_clicked()
{
    QImage pic; //("E:\_Files\screen_log.jpg")
    pic.load("E:/_Files/screen_log.jpg");
    ui->textInfo->append(QString::number(pic.width())+QString::number(pic.height()));
    recvShowPicSignal(pic);

}

void MainWindow::updateTime()
{
    // 获取当前时间
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QString currentTime = currentDateTime.toString("yyyy-MM-dd hh:mm:ss");

    // 设置状态栏消息
    statusBar()->showMessage(currentTime);
}
