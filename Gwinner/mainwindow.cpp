#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <iostream>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QDir>

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

void MainWindow::writeJsonToFile()
{


Payment Info;


        Info.name = ui->NameLabel->text();
        Info.HallName =  Info.HallName = ui->HallCombo->currentText() + ", #: " +  ui->RoomLine->text();
        Info.PhoneNumber = Info.PhoneNumber = ui->PhoneInpute->text();
        Info.DeliveryTime = Info.DeliveryTime = ui->DelivTime->text();
        Info.DeliveryNotes =  Info.DeliveryNotes = ui->DelivNotes->text();
        Info.CreditNumber = ui->CreditNumLine ->text();
        Info.StudentID = ui->IDNumLine ->text();
        Info.InfoStreetName = ui-> StreetLine->text() + " " + "#" + ui->AptLine->text();
       Info.city = ui->CityLine->text() + " " + ui->ZipLine->text();

        QFile file("/Users/zachary/1.txt");

        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            std::cerr << "Cannot open file for writing: "
                      << qPrintable(file.errorString()) << std::endl;
            return;
        }

        QTextStream stream(&file);

        stream << "Name: " << Info.name <<endl;
        stream << "Hall Name: " << Info.HallName << endl;
        stream << "Phone Number: " << Info.PhoneNumber << endl;
        stream << "Delivery Time: " << Info.DeliveryTime << endl;

        stream << "Student ID:"  << Info.StudentID << endl;
        stream << "Street Name:"  << Info.InfoStreetName << endl;
        stream << "City:"  << Info.city << endl;
        stream<<endl;
        stream<<endl;
        stream << "Delivery Notes: " << Info.DeliveryNotes << endl;
        stream << "----------------------" <<endl;
        stream<<endl;
        stream<<endl;

        ui->DelLabel->setText(Info.HallName + Info.InfoStreetName);
        ui->NameLabel_2->setText(Info.name);
        ui->PhoneOut->setText(Info.PhoneNumber);
        ui->CreditLabel->setText(Info.CreditNumber);
       ui->IDLabel->setText(Info.StudentID);


}

void MainWindow::on_actionExit_triggered()
{

    exit (1);
}


void MainWindow::on_CompButton_clicked()
{
     writeJsonToFile();
}

void MainWindow::on_MonButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    Info.daySelection = "Monday";
    stream << "--------CLIENT--------" <<endl;
    stream << endl;
    stream << "Day of the week: " <<Info.daySelection << endl;
    ui->tabWidget->setCurrentIndex(1);

}

void MainWindow::on_TuesButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    stream << "--------CLIENT--------" <<endl;
    stream << endl;
    Info.daySelection = "Tuesday";
    stream << "Day of the week: " <<Info.daySelection << endl;
     ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_WedButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    stream << "--------CLIENT--------" <<endl;
    stream << endl;
    Info.daySelection = "Wednesday";
    stream << "Day of the week: " <<Info.daySelection << endl;
     ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_ThurButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    stream << "--------CLIENT--------" <<endl;
    stream << endl;
    Info.daySelection = "Thursday";
    stream << "Day of the week: " <<Info.daySelection << endl;
     ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_FriButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    stream << "--------CLIENT--------" <<endl;
    stream << endl;
    Info.daySelection = "Friday";
    stream << "Day of the week: " <<Info.daySelection << endl;
     ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_BreakButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;

    Info.mealSelection = "Breakfast";
    stream << "Meal: " <<Info.mealSelection << endl;
    stream << endl;
    stream << endl;
     ui->tabWidget->setCurrentIndex(2);

}

void MainWindow::on_LunButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;

    Info.mealSelection = "Lunch";
      stream << "Meal: " <<Info.mealSelection << endl;
      stream << endl;
      stream << endl;
       ui->tabWidget->setCurrentIndex(2);

}

void MainWindow::on_DinButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    Info.mealSelection = "Dinner";
    stream << "Meal: " <<Info.mealSelection << endl;
    stream << endl;
    stream << endl;
     ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_SatButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    Info.daySelection = "Saturday";
    stream << "Meal: " <<Info.mealSelection << endl;
    stream << endl;
    stream << endl;
     ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_SunButton_clicked()
{
    QFile file("/Users/zachary/1.txt");

    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        std::cerr << "Cannot open file for writing: "
                  << qPrintable(file.errorString()) << std::endl;
        return;
    }
       QTextStream stream(&file);
    Payment Info;
    Info.mealSelection = "Sunday";
    stream << "Meal: " <<Info.mealSelection << endl;
    stream << endl;
    stream << endl;
     ui->tabWidget->setCurrentIndex(2);

}
