#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "OrderRecord.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Star1->setCheckable(true);
    ui->Star2->setCheckable(true);
    ui->Star3->setCheckable(true);
    ui->Star4->setCheckable(true);
    ui->Star5->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    exit (1);
}
