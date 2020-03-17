#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QVector>
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


private:
    Ui::MainWindow *ui;

    void isReadOnly(bool);

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
        };
     QVector <Payment> PaymentVector;
};
#endif // MAINWINDOW_H
