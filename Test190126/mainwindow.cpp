#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>

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

void MainWindow::on_pushButton_clicked()
{
    //QString filename = QFileDialog::getOpenFileName(            // filename변수는 file의 path임.
    //            this,
    //            tr("Open File"),            // 열리는 탐색기 상단의 이름.
    //            "C:\\Avatar\\",                 // C디스크가 열림.
    //            "All files (*.*);;Text File (*.txt);;Music file(*.mp3)"           // * star means any file you want to open.  // (*.txt)means all txt files. // 오른쪽 하단에 세가지 고르는 상자나옴.
    //            );

    //QDesktopServices::openUrl(QUrl("file:///"+filename, QUrl::TolerantMode));            // TolerantMode-windows file system.
    //QMessageBox::information(this,tr("File Name"), filename);

    system("start C:\\Avatar\\Server.exe");
}

void MainWindow::on_pushButton_2_clicked()
{
    system("start C:\\Avatar\\realTimeClassificationToMaya\\application\\realTimeClassificationToMaya.exe");
}
