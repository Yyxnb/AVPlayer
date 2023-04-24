#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QMediaPlayer>     //播放器
#include <QMediaPlaylist>   //播放队列
#include <QVideoWidget>     //视频显示窗口
#include <QPaintEvent>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //设置标题
    setWindowTitle("AV Player");

    pPlayer = new QMediaPlayer;
    pPlayerList = new QMediaPlaylist;
    pVideoWidget = new QVideoWidget(ui->label);

    pPlayer->setPlaylist(pPlayerList);
    pPlayer->setVideoOutput(pVideoWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//单击打开按钮打开音频或者视频
void MainWindow::on_openBtn_clicked()
{
    //qDebug() << "openBtn has been pushed";
    //打开一个文件查找框
    QStringList filenames = QFileDialog::getOpenFileNames(this, "Let me look what vedios in you pc~", "D:/Users/Desktop",
                                                          "allfiles(*.*);;"
                                                          "WMV(*.wmv);;"
                                                          "WAV(*.wav);;"
                                                          );

    pPlayerList->clear();

    foreach (QString const &str, filenames)
    {
       //qDebug() << str << " ";
       QUrl url(str);
       pPlayerList->addMedia(url);
    }
}
// 播放
void MainWindow::on_playBtn_clicked()
{
    pPlayer->play();
    pVideoWidget->resize(ui->label->size());
}
// 暂停
void MainWindow::on_pauseBtn_clicked()
{
    pPlayer->pause();
}
// 停止
void MainWindow::on_stopBtn_clicked()
{
    pPlayer->stop();
}

void MainWindow::paintEvent(QPaintEvent *e)
{
    pVideoWidget->resize(ui->label->size());
}
