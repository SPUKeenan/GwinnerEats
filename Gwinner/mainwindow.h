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

    void on_MealRadio_clicked();

    void on_AmerRadio_clicked();

    void on_VisaRadio_clicked();

    void on_MasterRadio_clicked();

    void on_DiscoRadio_clicked();


    void on_MealRadio_clicked();

    void on_AmerRadio_clicked();

    void on_VisaRadio_clicked();

    void on_MasterRadio_clicked();

    void on_DiscoRadio_clicked();

private:
    Ui::MainWindow *ui;

    void isReadOnly(bool);

};
#endif // MAINWINDOW_H
