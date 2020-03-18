#include "mainwindow.h"


using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow)
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
        stream << "Credit Card number:"  <<Info.CreditNumber << endl;
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

void MainWindow::on_VisaRadio_clicked()
{
    isReadOnly(false);
    ui->CreditNumLine->setInputMask("4999-9999-9999-9999;#");
}

void MainWindow::on_MasterRadio_clicked()
{
    isReadOnly(false);
    ui->CreditNumLine->setInputMask("5999-9999-9999-9999;#");
}

void MainWindow::on_DiscoRadio_clicked()
{
    isReadOnly(false);
    ui->CreditNumLine->setInputMask("6999-9999-9999-9999;#");
}

void MainWindow::on_AmerRadio_clicked()
{
    isReadOnly(false);
    ui->CreditNumLine->setInputMask("3999-999999-99999;#");
}

void MainWindow::on_MealRadio_clicked()
{
    isReadOnly(true);
    ui->CreditNumLine->setInputMask("");
    ui->CVCLine->setInputMask("");
}

void MainWindow::on_CompButton_clicked()
{
     writeJsonToFile();
}

void MainWindow::on_MonButton_clicked()
{
    QFile file(fileLocation);

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
    QFile file(fileLocation);

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
    QFile file(fileLocation);

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
    QFile file(fileLocation);

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
    QFile file(fileLocation);

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
    QFile file(fileLocation);

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


     QStringList wordList = getMenu("B", getDay(Info.daySelection));

     createFoodOptions(wordList);

    ui->foodOption1->setText(wordList[1]);
    ui->foodOption2->setText(wordList[2]);
    ui->foodOption3->setText(wordList[3]);
    ui->foodOption4->setText(wordList[4]);
    ui->foodOption5->setText(wordList[5]);

     //std::cout << QString::number(wordList.size()).toStdString();



}

void MainWindow::on_LunButton_clicked()
{
    QFile file(fileLocation);

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



       QStringList wordList = getMenu("L", getDay(Info.daySelection));

       createFoodOptions(wordList);
       ui->foodOption1->setText(wordList[1]);
       ui->foodOption2->setText(wordList[2]);
       ui->foodOption3->setText(wordList[3]);
       ui->foodOption4->setText(wordList[4]);
       ui->foodOption5->setText(wordList[5]);
}

void MainWindow::on_DinButton_clicked()
{
    QFile file(fileLocation);

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

     QStringList wordList = getMenu("B", getDay(Info.daySelection));

     createFoodOptions(wordList);

     ui->foodOption1->setText(wordList[1]);
     ui->foodOption2->setText(wordList[2]);
     ui->foodOption3->setText(wordList[3]);
     ui->foodOption4->setText(wordList[4]);
     ui->foodOption5->setText(wordList[5]);
}


int MainWindow::getDay(QString day)
{
    if(day == "Sunday")
        return 7;
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

void MainWindow::createFoodOptions(QStringList meals)
{
    int size = meals.size();
    if(meals.size()>6)
        size = 6;
    for(int i = 0; i < 6; i++){
        QString buttonName = meals.takeAt(i);
        //std::cout << buttonName.toStdString();
        FoodOption* button = new FoodOption(meals.takeAt(i), ui->foodContainer);
        connect(button, SIGNAL(clicked()), this, SLOT(foodChoice()));
        button->setStyleSheet("background-color: rgb(66, 66, 66);");
                             //"QPushButton::hover{color: rgb(0, 0, 0);}");
        button->resize(200, 75);
        button->move(100, 50+i*85);
        //setCentralWidget(ui->foodContainer);

    }
}


void MainWindow::foodChoice() {
    //Info.food = this->text();
    std::cout << ui->tabWidget;
    increasePage();
}

void MainWindow::increasePage()
{
    ui->tabWidget->setCurrentIndex(4);
}


void MainWindow::on_foodOption1_clicked()
{
    Info.food = ui->foodOption1->text();
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_foodOption2_clicked()
{
    Info.food = ui->foodOption1->text();
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_foodOption5_clicked()
{
    Info.food = ui->foodOption1->text();
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_foodOption4_clicked()
{
    Info.food = ui->foodOption1->text();
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_foodOption3_clicked()
{
    Info.food = ui->foodOption1->text();
    ui->tabWidget->setCurrentIndex(3);
}
