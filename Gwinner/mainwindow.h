#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QVector>
#include "ui_mainwindow.h"
#include "foodoption.h"
#include <iostream>

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
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString fileLocation = "C:\\Users\\Levi\\Desktop\\School\\Applications Programming\\QT Projects\\GwinnerEats\\Gwinner\\1.txt";
    Ui::MainWindow *ui;


private slots:
    void on_actionExit_triggered();
    void writeJsonToFile();



    void on_CompButton_clicked();

    void on_MonButton_clicked();

    void on_TuesButton_clicked();

    void on_WedButton_clicked();

    void on_ThurButton_clicked();

    void on_FriButton_clicked();

    void on_BreakButton_clicked();

    void on_LunButton_clicked();

    void on_DinButton_clicked();

    void on_MealRadio_clicked();

    void on_AmerRadio_clicked();

    void on_VisaRadio_clicked();

    void on_MasterRadio_clicked();

    void on_DiscoRadio_clicked();

    void foodChoice();

    void on_foodOption1_clicked();

    void on_foodOption2_clicked();

    void on_foodOption5_clicked();

    void on_foodOption4_clicked();

    void on_foodOption3_clicked();

private:

    void increasePage();
    void isReadOnly(bool);

    int getDay(QString);

    QStringList loadFile();

    QStringList getMenu(QString timeOfMeal, int date);

    void createFoodOptions(QStringList meals);


    struct Payment{

        QString name;
        QString HallName;
        QString RoomNumber;
        QString PhoneNumber;
        QString DeliveryTime;
        QString DeliveryNotes;
        QString CreditNumber;
        QString StudentID;
        QString InfoStreetName;
        QString city;
        QString daySelection;
        QString mealSelection;
        QString food;
        };
     QVector <Payment> PaymentVector;

public:
     Payment Info;
};
#endif // MAINWINDOW_H
