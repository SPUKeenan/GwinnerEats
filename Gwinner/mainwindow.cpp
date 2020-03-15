#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

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
<<<<<<< HEAD
    if (ui->MonButton->isChecked() == true ){
    }
=======
>>>>>>> meal swipe/credit card selections

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    exit (1);
}

void MainWindow::isReadOnly(bool state)
<<<<<<< HEAD
{
    ui->CreditNumLine->setReadOnly(state);
    ui->CVCLine->setReadOnly(state);
    ui->ExpLine->setReadOnly(state);
    ui->CardNameLine->setReadOnly(state);
    ui->StreetLine->setReadOnly(state);
    ui->AptLine->setReadOnly(state);
    ui->CityLine->setReadOnly(state);
    ui->StateCombo->setEnabled(state);
    ui->ZipLine->setReadOnly(state);
    if ( state == false){
        ui->IDNumLine->setReadOnly(true);
        ui->StateCombo->setEnabled(true);
    }
    else {
        ui->IDNumLine->setReadOnly(false);
        ui->StateCombo->setEnabled(false);
    }
}

void MainWindow::on_MealRadio_clicked()
{
    isReadOnly(true);
}

void MainWindow::on_AmerRadio_clicked()
{
    isReadOnly(false);
}

void MainWindow::on_VisaRadio_clicked()
{
    isReadOnly(false);
}
=======
 {
     ui->CreditNumLine->setReadOnly(state);
     ui->CVCLine->setReadOnly(state);
     ui->ExpLine->setReadOnly(state);
     ui->CardNameLine->setReadOnly(state);
     ui->StreetLine->setReadOnly(state);
     ui->AptLine->setReadOnly(state);
     ui->CityLine->setReadOnly(state);
     ui->StateCombo->setEnabled(state);
     ui->ZipLine->setReadOnly(state);
     if ( state == false){
         ui->IDNumLine->setReadOnly(true);
         ui->StateCombo->setEnabled(true);
     }
     else {
         ui->IDNumLine->setReadOnly(false);
         ui->StateCombo->setEnabled(false);
     }
 }

  void MainWindow::on_MealRadio_clicked()
 {
     isReadOnly(true);
 }

  void MainWindow::on_AmerRadio_clicked()
 {
     isReadOnly(false);
 }

  void MainWindow::on_VisaRadio_clicked()
 {
     isReadOnly(false);
 }


  void MainWindow::on_MasterRadio_clicked()
 {
     isReadOnly(false);
 }

  void MainWindow::on_DiscoRadio_clicked()
 {
     isReadOnly(false);
 }
>>>>>>> meal swipe/credit card selections

void MainWindow::on_MasterRadio_clicked()
{
    isReadOnly(false);
}

void MainWindow::on_DiscoRadio_clicked()
{
    isReadOnly(false);
}
