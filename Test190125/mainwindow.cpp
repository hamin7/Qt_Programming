#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "secdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)),ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label->setText("<html><b><u>T</u>wo</b><br>lines</html>");
}

void MainWindow::on_pushButton_2_clicked()
{
    //QMessageBox::critical(this,tr("THE TITLE"),tr("This is a message"));
    QMessageBox::warning(this,tr("THE TITLE"),tr("This is a message"));
    //QMessageBox::question(this,tr("THE TITLE"),tr("This is a message"));
}

void MainWindow::on_pushButton_3_clicked()
{
    //secDialog secdialog;            // modulus approach
    //secdialog.setModal(true);
    //secdialog.exec();
    secdialog = new secDialog(this);
    secdialog->show();
}
