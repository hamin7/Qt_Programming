#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>

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
    QString filename = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),            // 열리는 탐색기 상단의 이름.
                "C://",                 // C디스크가 열림.
                "All files (*.*);;Text File (*.txt);;Music file(*.mp3)"           // * star means any file you want to open.  // (*.txt)means all txt files. // 오른쪽 하단에 세가지 고르는 상자나옴.
                );
    QMessageBox::information(this,tr("File Name"), filename);
}
