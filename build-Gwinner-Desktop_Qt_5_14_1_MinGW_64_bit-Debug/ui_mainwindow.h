/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *WelcomLabel;
    QPushButton *MonButton;
    QPushButton *TuesButton;
    QPushButton *WedButton;
    QPushButton *ThurButton;
    QPushButton *FriButton;
    QPushButton *SatButton;
    QPushButton *SunButton;
    QWidget *tab_2;
    QPushButton *BreakButton;
    QPushButton *LunButton;
    QPushButton *DinButton;
    QWidget *tab_3;
    QPushButton *FoodImage1;
    QPushButton *FoodImage2;
    QPushButton *FoodImage3;
    QPushButton *FoodImage4;
    QLabel *FoodLabel1;
    QLabel *FoodLabel2;
    QLabel *FoodLabel3;
    QLabel *FoodLabel4;
    QComboBox *CondimentsCombo;
    QWidget *tab_5;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QTimeEdit *timeEdit;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox;
    QWidget *tab_7;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QComboBox *comboBox_3;
    QWidget *tab_6;
    QWidget *tab_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 40, 791, 521));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        WelcomLabel = new QLabel(tab);
        WelcomLabel->setObjectName(QString::fromUtf8("WelcomLabel"));
        WelcomLabel->setGeometry(QRect(260, 20, 231, 171));
        QFont font;
        font.setPointSize(25);
        WelcomLabel->setFont(font);
        WelcomLabel->setAlignment(Qt::AlignCenter);
        MonButton = new QPushButton(tab);
        MonButton->setObjectName(QString::fromUtf8("MonButton"));
        MonButton->setGeometry(QRect(70, 270, 131, 51));
        TuesButton = new QPushButton(tab);
        TuesButton->setObjectName(QString::fromUtf8("TuesButton"));
        TuesButton->setGeometry(QRect(230, 270, 131, 51));
        WedButton = new QPushButton(tab);
        WedButton->setObjectName(QString::fromUtf8("WedButton"));
        WedButton->setGeometry(QRect(390, 270, 131, 51));
        ThurButton = new QPushButton(tab);
        ThurButton->setObjectName(QString::fromUtf8("ThurButton"));
        ThurButton->setGeometry(QRect(550, 270, 131, 51));
        FriButton = new QPushButton(tab);
        FriButton->setObjectName(QString::fromUtf8("FriButton"));
        FriButton->setGeometry(QRect(150, 350, 131, 51));
        SatButton = new QPushButton(tab);
        SatButton->setObjectName(QString::fromUtf8("SatButton"));
        SatButton->setGeometry(QRect(310, 350, 131, 51));
        SunButton = new QPushButton(tab);
        SunButton->setObjectName(QString::fromUtf8("SunButton"));
        SunButton->setGeometry(QRect(470, 350, 131, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        BreakButton = new QPushButton(tab_2);
        BreakButton->setObjectName(QString::fromUtf8("BreakButton"));
        BreakButton->setGeometry(QRect(120, 170, 131, 131));
        LunButton = new QPushButton(tab_2);
        LunButton->setObjectName(QString::fromUtf8("LunButton"));
        LunButton->setGeometry(QRect(290, 170, 131, 131));
        DinButton = new QPushButton(tab_2);
        DinButton->setObjectName(QString::fromUtf8("DinButton"));
        DinButton->setGeometry(QRect(460, 170, 131, 131));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        FoodImage1 = new QPushButton(tab_3);
        FoodImage1->setObjectName(QString::fromUtf8("FoodImage1"));
        FoodImage1->setGeometry(QRect(60, 100, 101, 101));
        FoodImage2 = new QPushButton(tab_3);
        FoodImage2->setObjectName(QString::fromUtf8("FoodImage2"));
        FoodImage2->setGeometry(QRect(220, 100, 101, 101));
        FoodImage3 = new QPushButton(tab_3);
        FoodImage3->setObjectName(QString::fromUtf8("FoodImage3"));
        FoodImage3->setGeometry(QRect(380, 100, 101, 101));
        FoodImage4 = new QPushButton(tab_3);
        FoodImage4->setObjectName(QString::fromUtf8("FoodImage4"));
        FoodImage4->setGeometry(QRect(540, 100, 101, 101));
        FoodLabel1 = new QLabel(tab_3);
        FoodLabel1->setObjectName(QString::fromUtf8("FoodLabel1"));
        FoodLabel1->setGeometry(QRect(60, 210, 101, 41));
        FoodLabel2 = new QLabel(tab_3);
        FoodLabel2->setObjectName(QString::fromUtf8("FoodLabel2"));
        FoodLabel2->setGeometry(QRect(220, 210, 101, 41));
        FoodLabel3 = new QLabel(tab_3);
        FoodLabel3->setObjectName(QString::fromUtf8("FoodLabel3"));
        FoodLabel3->setGeometry(QRect(380, 210, 101, 41));
        FoodLabel4 = new QLabel(tab_3);
        FoodLabel4->setObjectName(QString::fromUtf8("FoodLabel4"));
        FoodLabel4->setGeometry(QRect(540, 210, 101, 41));
        CondimentsCombo = new QComboBox(tab_3);
        CondimentsCombo->addItem(QString());
        CondimentsCombo->addItem(QString());
        CondimentsCombo->addItem(QString());
        CondimentsCombo->addItem(QString());
        CondimentsCombo->setObjectName(QString::fromUtf8("CondimentsCombo"));
        CondimentsCombo->setGeometry(QRect(60, 260, 101, 21));
        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        label_5 = new QLabel(tab_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 100, 47, 14));
        label_6 = new QLabel(tab_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 130, 47, 14));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 160, 101, 16));
        timeEdit = new QTimeEdit(tab_5);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(270, 240, 118, 22));
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 240, 101, 16));
        lineEdit = new QLineEdit(tab_5);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(270, 100, 211, 20));
        lineEdit_3 = new QLineEdit(tab_5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 160, 61, 20));
        comboBox = new QComboBox(tab_5);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(270, 130, 161, 22));
        tabWidget->addTab(tab_5, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        groupBox = new QGroupBox(tab_7);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(80, 90, 171, 141));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(30, 20, 83, 18));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(30, 40, 83, 18));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(30, 60, 83, 18));
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(30, 80, 83, 18));
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(30, 100, 83, 18));
        lineEdit_2 = new QLineEdit(tab_7);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(450, 100, 231, 20));
        label = new QLabel(tab_7);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 100, 131, 16));
        label_2 = new QLabel(tab_7);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 130, 131, 16));
        label_3 = new QLabel(tab_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 160, 131, 16));
        lineEdit_4 = new QLineEdit(tab_7);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(450, 130, 71, 20));
        lineEdit_5 = new QLineEdit(tab_7);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(450, 160, 231, 20));
        label_15 = new QLabel(tab_7);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(80, 300, 131, 16));
        label_16 = new QLabel(tab_7);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(80, 330, 131, 16));
        label_17 = new QLabel(tab_7);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(80, 360, 131, 16));
        label_18 = new QLabel(tab_7);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(80, 420, 131, 16));
        label_19 = new QLabel(tab_7);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(80, 390, 131, 16));
        lineEdit_11 = new QLineEdit(tab_7);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(240, 420, 131, 20));
        lineEdit_13 = new QLineEdit(tab_7);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(240, 360, 201, 20));
        lineEdit_14 = new QLineEdit(tab_7);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(240, 330, 101, 20));
        lineEdit_15 = new QLineEdit(tab_7);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(240, 300, 261, 20));
        comboBox_3 = new QComboBox(tab_7);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(240, 390, 181, 22));
        tabWidget->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        WelcomLabel->setText(QCoreApplication::translate("MainWindow", "Welcome To \n"
"GwinnerEats", nullptr));
        MonButton->setText(QCoreApplication::translate("MainWindow", "Monday", nullptr));
        TuesButton->setText(QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        WedButton->setText(QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        ThurButton->setText(QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        FriButton->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
        SatButton->setText(QCoreApplication::translate("MainWindow", "Saturday", nullptr));
        SunButton->setText(QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Day of the Week", nullptr));
        BreakButton->setText(QCoreApplication::translate("MainWindow", "Breakfast", nullptr));
        LunButton->setText(QCoreApplication::translate("MainWindow", "Lunch", nullptr));
        DinButton->setText(QCoreApplication::translate("MainWindow", "Dinner", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Breakfast/Lunch/Dinner", nullptr));
        FoodImage1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        FoodImage2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        FoodImage3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        FoodImage4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        FoodLabel1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        FoodLabel2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        FoodLabel3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        FoodLabel4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        CondimentsCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Ketchup", nullptr));
        CondimentsCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Mustard", nullptr));
        CondimentsCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Pickles", nullptr));
        CondimentsCombo->setItemText(3, QCoreApplication::translate("MainWindow", "Ranch", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Food", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Dorm:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Room Number:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Delivery Time:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Hill Hall", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Ashton Hall", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Arnett Hall", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("MainWindow", "Emerson Hall", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("MainWindow", "Moyer Hall", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Delivery", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Payment Type", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Visa", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Master", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Discovery", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "American", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "Meal Swipe", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Credit Card Number:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CVC:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name on Card:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Street Address:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Apartment Number:", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "City:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Zip Code:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "State:", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("MainWindow", "Alabama", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("MainWindow", "Alaska", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("MainWindow", "Arizona", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("MainWindow", "Arkansas", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("MainWindow", "California", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("MainWindow", "Colorado", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("MainWindow", "Connecticut", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("MainWindow", "Delaware", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("MainWindow", "Florida", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("MainWindow", "Georgia", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("MainWindow", "Hawaii", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("MainWindow", "Idaho", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("MainWindow", "Illinois", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("MainWindow", "Indiana", nullptr));
        comboBox_3->setItemText(14, QCoreApplication::translate("MainWindow", "Iowa", nullptr));
        comboBox_3->setItemText(15, QCoreApplication::translate("MainWindow", "Kansas", nullptr));
        comboBox_3->setItemText(16, QCoreApplication::translate("MainWindow", "Kentucky", nullptr));
        comboBox_3->setItemText(17, QCoreApplication::translate("MainWindow", "Louisiana", nullptr));
        comboBox_3->setItemText(18, QCoreApplication::translate("MainWindow", "Maine", nullptr));
        comboBox_3->setItemText(19, QCoreApplication::translate("MainWindow", "Maryland", nullptr));
        comboBox_3->setItemText(20, QCoreApplication::translate("MainWindow", "Massachusetts", nullptr));
        comboBox_3->setItemText(21, QCoreApplication::translate("MainWindow", "Michigan", nullptr));
        comboBox_3->setItemText(22, QCoreApplication::translate("MainWindow", "Minnesota", nullptr));
        comboBox_3->setItemText(23, QCoreApplication::translate("MainWindow", "Mississippi", nullptr));
        comboBox_3->setItemText(24, QCoreApplication::translate("MainWindow", "Missouri", nullptr));
        comboBox_3->setItemText(25, QCoreApplication::translate("MainWindow", "Montana", nullptr));
        comboBox_3->setItemText(26, QCoreApplication::translate("MainWindow", "Nebraska", nullptr));
        comboBox_3->setItemText(27, QCoreApplication::translate("MainWindow", "Nevada", nullptr));
        comboBox_3->setItemText(28, QCoreApplication::translate("MainWindow", "New Hampshire", nullptr));
        comboBox_3->setItemText(29, QCoreApplication::translate("MainWindow", "New Jersey", nullptr));
        comboBox_3->setItemText(30, QCoreApplication::translate("MainWindow", "New Mexico", nullptr));
        comboBox_3->setItemText(31, QCoreApplication::translate("MainWindow", "New York", nullptr));
        comboBox_3->setItemText(32, QCoreApplication::translate("MainWindow", "North Carolina", nullptr));
        comboBox_3->setItemText(33, QCoreApplication::translate("MainWindow", "North Dakota", nullptr));
        comboBox_3->setItemText(34, QCoreApplication::translate("MainWindow", "Ohio", nullptr));
        comboBox_3->setItemText(35, QCoreApplication::translate("MainWindow", "Oklahoma", nullptr));
        comboBox_3->setItemText(36, QCoreApplication::translate("MainWindow", "Oregon", nullptr));
        comboBox_3->setItemText(37, QCoreApplication::translate("MainWindow", "Pennsylvania", nullptr));
        comboBox_3->setItemText(38, QCoreApplication::translate("MainWindow", "Rhode Island", nullptr));
        comboBox_3->setItemText(39, QCoreApplication::translate("MainWindow", "South Carolina", nullptr));
        comboBox_3->setItemText(40, QCoreApplication::translate("MainWindow", "Tenessee", nullptr));
        comboBox_3->setItemText(41, QCoreApplication::translate("MainWindow", "Texas", nullptr));
        comboBox_3->setItemText(42, QCoreApplication::translate("MainWindow", "Utah", nullptr));
        comboBox_3->setItemText(43, QCoreApplication::translate("MainWindow", "Vermont", nullptr));
        comboBox_3->setItemText(44, QCoreApplication::translate("MainWindow", "Virginia", nullptr));
        comboBox_3->setItemText(45, QCoreApplication::translate("MainWindow", "Washington", nullptr));
        comboBox_3->setItemText(46, QCoreApplication::translate("MainWindow", "West Virginia", nullptr));
        comboBox_3->setItemText(47, QCoreApplication::translate("MainWindow", "Wisconsin", nullptr));
        comboBox_3->setItemText(48, QCoreApplication::translate("MainWindow", "Wyoming", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Payment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Confirmation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Rating", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
