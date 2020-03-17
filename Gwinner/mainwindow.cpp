#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtWebSockets/qwebsocket.h"
#include "QProcess"
#include "QFile"
#include "foodoption.h"
#include "iostream"

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



void MainWindow::on_BreakButton_clicked()
{
    QStringList wordList = getMenu("B", 1);

    std::cout << QString::number(wordList.size()).toStdString();


    for(int i = 0; i < wordList.size()-1; i++){
        QString buttonName = wordList.takeAt(i);
        std::cout << buttonName.toStdString();
        FoodOption* button = new FoodOption(wordList.takeAt(i), ui->foodContainer);

        button->setStyleSheet("background-color: rgb(66, 66, 66);");
        button->resize(200, 75);
        button->move(100, 50+i*85);
        setCentralWidget(ui->foodContainer);
        //ui->foodContainer->addWidget(button);


    }


}

int MainWindow::getDay(QString day)
{
    if(day == "Sunday")
        return 0;
    if(day == "Monday")
        return 1;
    if(day == "Tuesday")
        return 2;
    if(day == "Wednesday")
        return 3;
    if(day == "Thursday")
        return 4;
    if(day == "Friday")
        return 5;
    if(day == "Saturday")
        return 6;
}

QStringList MainWindow::loadFile()
{
    QString path = QCoreApplication::applicationDirPath();
    QString  command("python");
    QStringList params = QStringList() << "WebScraper.py";

    QProcess *process = new QProcess();
    //process->startDetached(command, params, path);
    process->waitForFinished();
    process->close();

    //Variables
    QStringList wordList;

    QFile file("food.csv");
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        return wordList;
    }
    while (!file.atEnd()) {

        QByteArray line = file.readLine();
        wordList.append(line.split(',').first());
    }
    return wordList;
}

QStringList MainWindow::getMenu(QString timeOfMeal, int date)
{

    QStringList wordList = loadFile();
    QStringList* currentList = new QStringList;
    QHash <int, QStringList> breakfast,
            lunch,
            dinner;
    int breakfastCount = 1, lunchCount = 1, dinnerCount = 1;
    // Logic for sorting menu goes here
    // Based off of mealtime (i.e. breakfast) * day (How many times you need to get the breakfast menu
    // Stack of Break, Lunch, Dinner each element is an array of food options
    for(int i = 0; i < wordList.size(); i++){
        QString line = wordList.at(i);
        if((line.toStdString() == "")){
            continue;
        }
            //std::cout << line.toStdString() << "Equals: " << (line.contains("BREAKFAST") == 0) << "\n";
            if(line.toStdString() == "BREAKFAST"){
                //std::cout << "Passes 5 - Weekday " << breakfastCount;
                //current = breakfast;
                if(!(currentList->empty())){
                    breakfast.insert(breakfastCount, *currentList);
                    currentList = new QStringList;
                    breakfastCount += 1;
                }


            }
            else if(line.toStdString() == "LUNCH"){
                //current = lunch;
                if(!(currentList->empty())){
                    lunch.insert(lunchCount, *currentList);
                    currentList = new QStringList;
                    breakfastCount += 1;
                }

            }
            else if(line.toStdString() == "DINNER") {
                //current = dinner;
                if(!(currentList->empty())){
                    dinner.insert(dinnerCount, *currentList);
                    currentList = new QStringList;
                    dinnerCount += 1;
                }
            }
            else {
                //if(){
                    currentList->append(line);
                }
            }
        //}
    //}

    QStringList retVal = *currentList;
    if(timeOfMeal == "B"){
        if(breakfast.contains(date))
        retVal = breakfast.value(date);
    } else if(timeOfMeal == "L"){
        retVal = lunch.value(date);
    } else if(timeOfMeal == "D"){
        retVal = dinner.value(date);
    }

    return retVal; //I think it breaks because we return something that is empty?

}

//void MainWindow::foodChoice() {
//    std::cout << "Name: " + button->text().toStdString();
//}
