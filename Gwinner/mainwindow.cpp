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
    if (ui->MonButton->isChecked() == true ){
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionExit_triggered()
{
    exit (1);
}

<<<<<<< HEAD
void MainWindow::isReadOnly(bool state)
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
=======
void MainWindow::on_VisaRadio_clicked()
{
    ui->CreditNumLine->setInputMask("");
    ui->CreditNumLine->setInputMask("4999-9999-9999-9999;#");
    ui->CreditNumLine->setReadOnly(false);
    ui->CVCLine->setReadOnly(false);
    ui->ExpLine->setReadOnly(false);
    ui->StreetLine->setReadOnly(false);
    ui->AptLine->setReadOnly(false);
    ui->CityLine->setReadOnly(false);
    ui->ZipLine->setReadOnly(false);
    ui->StateCombo->setDisabled(false);
}

void MainWindow::on_MasterRadio_clicked()
{
    ui->CreditNumLine->setInputMask("");
    ui->CreditNumLine->setInputMask("5999-9999-9999-9999;#");
    ui->CreditNumLine->setReadOnly(false);
    ui->CVCLine->setReadOnly(false);
    ui->ExpLine->setReadOnly(false);
    ui->StreetLine->setReadOnly(false);
    ui->AptLine->setReadOnly(false);
    ui->CityLine->setReadOnly(false);
    ui->ZipLine->setReadOnly(false);
    ui->StateCombo->setDisabled(false);
}

void MainWindow::on_DiscoRadio_clicked()
{
    ui->CreditNumLine->setInputMask("");
    ui->CreditNumLine->setInputMask("6999-9999-9999-9999;#");
    ui->CreditNumLine->setReadOnly(false);
    ui->CVCLine->setReadOnly(false);
    ui->ExpLine->setReadOnly(false);
    ui->StreetLine->setReadOnly(false);
    ui->AptLine->setReadOnly(false);
    ui->CityLine->setReadOnly(false);
    ui->ZipLine->setReadOnly(false);
    ui->StateCombo->setDisabled(false);
}

void MainWindow::on_AmerRadio_clicked()
{
    ui->CreditNumLine->setInputMask("");
    ui->CreditNumLine->setInputMask("3999-999999-99999;#");
    ui->CreditNumLine->setReadOnly(false);
    ui->CVCLine->setReadOnly(false);
    ui->ExpLine->setReadOnly(false);
    ui->StreetLine->setReadOnly(false);
    ui->AptLine->setReadOnly(false);
    ui->CityLine->setReadOnly(false);
    ui->ZipLine->setReadOnly(false);
    ui->StateCombo->setDisabled(false);
}

void MainWindow::on_MealRadio_clicked()
{
    ui->CreditNumLine->setInputMask("");
    ui->CVCLine->setInputMask("");
    ui->CreditNumLine->setReadOnly(true);
    ui->CVCLine->setReadOnly(true);
    ui->ExpLine->setReadOnly(true);
    ui->StreetLine->setReadOnly(true);
    ui->AptLine->setReadOnly(true);
    ui->CityLine->setReadOnly(true);
    ui->ZipLine->setReadOnly(true);
    ui->StateCombo->setDisabled(true);
>>>>>>> master
}
