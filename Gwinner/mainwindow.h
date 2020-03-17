#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <foodoption.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    //FoodOption* button;

    struct values{
        QString foodType;
    };

    values var;

    int getDay(QString);

    QStringList loadFile();

    QStringList getMenu(QString timeOfMeal, int date);

private slots:
    void on_actionExit_triggered();

    void on_BreakButton_clicked();



    //void foodChoice();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
