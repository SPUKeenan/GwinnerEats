#ifndef FOODOPTION_H
#define FOODOPTION_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include "mainwindow.h"
#include "iostream"

class FoodOption : public QPushButton
{
    Q_OBJECT

public slots:
    void foodChoice();

public:

    FoodOption() : QPushButton() {}

    FoodOption(QString name, QWidget* widget) : QPushButton(name, widget){
        connect(this, SIGNAL(clicked()), this, SLOT(foodChoice()));
    }


};

#endif // FOODOPTION_H
