#include "mainwindow.h"
#include "ui_mainwindow.h"

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
}
