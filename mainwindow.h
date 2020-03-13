#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionExit_triggered();
    void writeToFile();

    void on_RateButton_clicked();

private:
    Ui::MainWindow *ui;
    struct Payment{

        QString name;
        QString HallName;
        QString RoomNumber;
        QString PhoneNumber;
        QString DeliveryTime;
        QString DeliveryNotes;
        };
};
#endif // MAINWINDOW_H
