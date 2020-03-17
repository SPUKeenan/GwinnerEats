#include "foodoption.h"
#include "mainwindow.h"
#include "iostream"

void FoodOption::foodChoice() {
    std::cout << this->text().toStdString();
}
