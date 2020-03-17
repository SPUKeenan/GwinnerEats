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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *WelcomLabel;
    QGroupBox *groupBox_12;
    QPushButton *MonButton;
    QPushButton *TuesButton;
    QPushButton *WedButton;
    QPushButton *ThurButton;
    QPushButton *FriButton;
    QPushButton *SatButton;
    QPushButton *SunButton;
    QWidget *tab_2;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_10;
    QGroupBox *groupBox_2;
    QPushButton *BreakButton;
    QPushButton *LunButton;
    QPushButton *DinButton;
    QWidget *tab_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QLabel *label_9;
    QPushButton *FoodImage1;
    QGroupBox *groupBox_3;
    QLabel *FoodLabel1;
    QPushButton *FoodImage2;
    QGroupBox *groupBox_4;
    QLabel *FoodLabel2;
    QPushButton *FoodImage3;
    QGroupBox *groupBox_5;
    QLabel *FoodLabel3;
    QPushButton *FoodImage4;
    QGroupBox *groupBox_6;
    QLabel *FoodLabel4;
    QWidget *tab_7;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QGroupBox *groupBox_13;
    QLabel *label_5;
    QLineEdit *NameLabel;
    QLabel *label_6;
    QComboBox *HallCombo;
    QLabel *label_7;
    QLineEdit *RoomLine;
    QLabel *label_8;
    QTimeEdit *DelivTime;
    QLabel *Noteslabel;
    QLineEdit *DelivNotes;
    QLabel *PhoneLabel;
    QLineEdit *PhoneInpute;
    QLabel *label_11;
    QGroupBox *groupBox;
    QRadioButton *VisaRadio;
    QRadioButton *MasterRadio;
    QRadioButton *DiscoRadio;
    QRadioButton *AmerRadio;
    QRadioButton *MealRadio;
    QGroupBox *groupBox_14;
    QLabel *label;
    QLineEdit *CreditNumLine;
    QLabel *label_2;
    QLineEdit *CVCLine;
    QLabel *label_3;
    QLineEdit *CardNameLine;
    QLabel *label_14;
    QLineEdit *IDNumLine;
    QLabel *label_25;
    QLineEdit *ExpLine;
    QGroupBox *groupBox_15;
    QLabel *label_15;
    QLineEdit *StreetLine;
    QLabel *label_16;
    QLineEdit *AptLine;
    QLabel *label_17;
    QLineEdit *CityLine;
    QLabel *label_19;
    QComboBox *StateCombo;
    QLabel *label_18;
    QLineEdit *ZipLine;
    QPushButton *CompButton;
    QWidget *tab_6;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QGroupBox *groupBox_16;
    QLabel *label_20;
    QLabel *FoodLabel;
    QLabel *label_21;
    QLabel *FoodChoiceImage_2;
    QLabel *DelLabel;
    QLabel *label_22;
    QLabel *CreditLabel;
    QLabel *label_23;
    QLabel *NameLabel_2;
    QPushButton *RateButton;
    QLabel *label_31;
    QLabel *IDLabel;
    QLabel *label_24;
    QLabel *PhoneOut;
    QWidget *tab_4;
    QScrollArea *scrollArea_7;
    QWidget *scrollAreaWidgetContents_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_13;
    QGroupBox *groupBox_17;
    QPushButton *UploadButton;
    QLabel *FoodChoiceImage;
    QLabel *label_30;
    QPushButton *Star1;
    QPushButton *Star2;
    QPushButton *Star3;
    QPushButton *Star4;
    QPushButton *Star5;
    QLabel *CommentLabel;
    QLineEdit *CommentInput;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(406, 653);
        MainWindow->setMinimumSize(QSize(391, 551));
        QFont font;
        font.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setFont(font);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 391, 591));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font1.setPointSize(8);
        tabWidget->setFont(font1);
        tabWidget->setMouseTracking(false);
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab { height: 30px; width: 65px; }\n"
"QTabBar::tab\n"
"{\n"
"background: #212121;\n"
"border-color: rgb(48, 48, 48);\n"
"}\n"
"QTabBar::tab:selected,\n"
"QTabBar::tab:hover\n"
"{\n"
" border-top-color: #1D2A32;\n"
"    border-color: #40494E;\n"
"    color: white;\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #424242, stop: 1 #424242);\n"
"}\n"
""));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(true);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setMinimumSize(QSize(391, 0));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Candara"));
        tab->setFont(font2);
        tab->setStyleSheet(QString::fromUtf8(""));
        scrollArea_2 = new QScrollArea(tab);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 10, 391, 551));
        scrollArea_2->setMinimumSize(QSize(391, 551));
        scrollArea_2->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(33, 33, 33);"));
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, -263, 389, 814));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        WelcomLabel = new QLabel(scrollAreaWidgetContents_4);
        WelcomLabel->setObjectName(QString::fromUtf8("WelcomLabel"));
        WelcomLabel->setMinimumSize(QSize(371, 90));
        WelcomLabel->setMaximumSize(QSize(371, 90));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font3.setPointSize(23);
        WelcomLabel->setFont(font3);
        WelcomLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(WelcomLabel);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_4);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        groupBox_12->setMinimumSize(QSize(361, 700));
        groupBox_12->setMaximumSize(QSize(361, 700));
        groupBox_12->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(48, 48, 48);"));
        MonButton = new QPushButton(groupBox_12);
        MonButton->setObjectName(QString::fromUtf8("MonButton"));
        MonButton->setGeometry(QRect(110, 40, 141, 81));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        MonButton->setFont(font4);
        MonButton->setStyleSheet(QString::fromUtf8("#MonButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"\n"
"}\n"
"#MonButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        TuesButton = new QPushButton(groupBox_12);
        TuesButton->setObjectName(QString::fromUtf8("TuesButton"));
        TuesButton->setGeometry(QRect(110, 130, 141, 81));
        TuesButton->setFont(font4);
        TuesButton->setStyleSheet(QString::fromUtf8("#TuesButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#TuesButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        WedButton = new QPushButton(groupBox_12);
        WedButton->setObjectName(QString::fromUtf8("WedButton"));
        WedButton->setGeometry(QRect(110, 220, 141, 81));
        WedButton->setFont(font4);
        WedButton->setStyleSheet(QString::fromUtf8("#WedButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#WedButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        ThurButton = new QPushButton(groupBox_12);
        ThurButton->setObjectName(QString::fromUtf8("ThurButton"));
        ThurButton->setGeometry(QRect(110, 310, 141, 81));
        ThurButton->setFont(font4);
        ThurButton->setStyleSheet(QString::fromUtf8("#ThurButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#ThurButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        FriButton = new QPushButton(groupBox_12);
        FriButton->setObjectName(QString::fromUtf8("FriButton"));
        FriButton->setGeometry(QRect(110, 400, 141, 81));
        FriButton->setFont(font4);
        FriButton->setStyleSheet(QString::fromUtf8("#FriButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#FriButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        SatButton = new QPushButton(groupBox_12);
        SatButton->setObjectName(QString::fromUtf8("SatButton"));
        SatButton->setGeometry(QRect(110, 490, 141, 81));
        SatButton->setFont(font4);
        SatButton->setStyleSheet(QString::fromUtf8("#SatButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#SatButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        SunButton = new QPushButton(groupBox_12);
        SunButton->setObjectName(QString::fromUtf8("SunButton"));
        SunButton->setGeometry(QRect(110, 580, 141, 81));
        SunButton->setFont(font4);
        SunButton->setStyleSheet(QString::fromUtf8("#SunButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#SunButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));

        verticalLayout_3->addWidget(groupBox_12);

        scrollArea_2->setWidget(scrollAreaWidgetContents_4);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        scrollArea_4 = new QScrollArea(tab_2);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(10, 10, 391, 551));
        scrollArea_4->setMinimumSize(QSize(391, 551));
        scrollArea_4->setMaximumSize(QSize(391, 551));
        scrollArea_4->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(33, 33, 33);"));
        scrollArea_4->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 391, 551));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_10 = new QLabel(scrollAreaWidgetContents_6);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(16777215, 40));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font5.setPointSize(25);
        label_10->setFont(font5);

        verticalLayout_5->addWidget(label_10);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_6);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(361, 450));
        groupBox_2->setMaximumSize(QSize(361, 450));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        BreakButton = new QPushButton(groupBox_2);
        BreakButton->setObjectName(QString::fromUtf8("BreakButton"));
        BreakButton->setGeometry(QRect(110, 50, 141, 81));
        BreakButton->setMinimumSize(QSize(141, 81));
        BreakButton->setMaximumSize(QSize(141, 81));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setWeight(75);
        BreakButton->setFont(font6);
        BreakButton->setStyleSheet(QString::fromUtf8("#BreakButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#BreakButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        LunButton = new QPushButton(groupBox_2);
        LunButton->setObjectName(QString::fromUtf8("LunButton"));
        LunButton->setGeometry(QRect(110, 180, 141, 81));
        LunButton->setMinimumSize(QSize(141, 81));
        LunButton->setMaximumSize(QSize(141, 81));
        LunButton->setFont(font6);
        LunButton->setStyleSheet(QString::fromUtf8("#LunButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#LunButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        DinButton = new QPushButton(groupBox_2);
        DinButton->setObjectName(QString::fromUtf8("DinButton"));
        DinButton->setGeometry(QRect(110, 310, 141, 81));
        DinButton->setMinimumSize(QSize(141, 81));
        DinButton->setMaximumSize(QSize(141, 81));
        DinButton->setFont(font6);
        DinButton->setStyleSheet(QString::fromUtf8("#DinButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#DinButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));

        verticalLayout_5->addWidget(groupBox_2);

        scrollArea_4->setWidget(scrollAreaWidgetContents_6);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        scrollArea = new QScrollArea(tab_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(10, 10, 391, 551));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setPointSize(12);
        scrollArea->setFont(font7);
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);\n"
"border:0;"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 391, 1030));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_9 = new QLabel(scrollAreaWidgetContents);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 40));
        label_9->setFont(font5);
        label_9->setWordWrap(true);

        verticalLayout->addWidget(label_9);

        FoodImage1 = new QPushButton(scrollAreaWidgetContents);
        FoodImage1->setObjectName(QString::fromUtf8("FoodImage1"));
        FoodImage1->setMinimumSize(QSize(201, 131));
        FoodImage1->setMaximumSize(QSize(201, 131));
        FoodImage1->setFont(font7);

        verticalLayout->addWidget(FoodImage1);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(361, 100));
        groupBox_3->setMaximumSize(QSize(361, 100));
        groupBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        FoodLabel1 = new QLabel(groupBox_3);
        FoodLabel1->setObjectName(QString::fromUtf8("FoodLabel1"));
        FoodLabel1->setGeometry(QRect(10, 10, 211, 81));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font8.setPointSize(12);
        FoodLabel1->setFont(font8);

        verticalLayout->addWidget(groupBox_3);

        FoodImage2 = new QPushButton(scrollAreaWidgetContents);
        FoodImage2->setObjectName(QString::fromUtf8("FoodImage2"));
        FoodImage2->setMinimumSize(QSize(201, 131));
        FoodImage2->setMaximumSize(QSize(201, 131));
        FoodImage2->setFont(font7);

        verticalLayout->addWidget(FoodImage2);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(161, 100));
        groupBox_4->setMaximumSize(QSize(1000, 1000));
        groupBox_4->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(48, 48, 48);"));
        FoodLabel2 = new QLabel(groupBox_4);
        FoodLabel2->setObjectName(QString::fromUtf8("FoodLabel2"));
        FoodLabel2->setGeometry(QRect(10, 10, 211, 81));
        FoodLabel2->setMinimumSize(QSize(211, 81));
        FoodLabel2->setMaximumSize(QSize(211, 81));
        FoodLabel2->setFont(font8);

        verticalLayout->addWidget(groupBox_4);

        FoodImage3 = new QPushButton(scrollAreaWidgetContents);
        FoodImage3->setObjectName(QString::fromUtf8("FoodImage3"));
        FoodImage3->setMinimumSize(QSize(201, 131));
        FoodImage3->setMaximumSize(QSize(201, 131));

        verticalLayout->addWidget(FoodImage3);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setMinimumSize(QSize(361, 100));
        groupBox_5->setMaximumSize(QSize(361, 100));
        groupBox_5->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(48, 48, 48);"));
        FoodLabel3 = new QLabel(groupBox_5);
        FoodLabel3->setObjectName(QString::fromUtf8("FoodLabel3"));
        FoodLabel3->setGeometry(QRect(10, 10, 211, 81));
        FoodLabel3->setFont(font8);

        verticalLayout->addWidget(groupBox_5);

        FoodImage4 = new QPushButton(scrollAreaWidgetContents);
        FoodImage4->setObjectName(QString::fromUtf8("FoodImage4"));
        FoodImage4->setMinimumSize(QSize(201, 131));
        FoodImage4->setMaximumSize(QSize(201, 131));

        verticalLayout->addWidget(FoodImage4);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(361, 100));
        groupBox_6->setMaximumSize(QSize(361, 100));
        groupBox_6->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(48, 48, 48);"));
        FoodLabel4 = new QLabel(groupBox_6);
        FoodLabel4->setObjectName(QString::fromUtf8("FoodLabel4"));
        FoodLabel4->setGeometry(QRect(10, 10, 211, 81));
        FoodLabel4->setMinimumSize(QSize(211, 81));
        FoodLabel4->setMaximumSize(QSize(211, 16777215));
        FoodLabel4->setFont(font8);

        verticalLayout->addWidget(groupBox_6);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab_3, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QString::fromUtf8("tab_7"));
        scrollArea_5 = new QScrollArea(tab_7);
        scrollArea_5->setObjectName(QString::fromUtf8("scrollArea_5"));
        scrollArea_5->setGeometry(QRect(10, 10, 391, 551));
        scrollArea_5->setMinimumSize(QSize(391, 551));
        scrollArea_5->setMaximumSize(QSize(391, 551));
        scrollArea_5->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 33, 33);\n"
"border:0;"));
        scrollArea_5->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea_5->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_7"));
        scrollAreaWidgetContents_7->setGeometry(QRect(0, -1052, 379, 1603));
        verticalLayout_6 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_4 = new QLabel(scrollAreaWidgetContents_7);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMaximumSize(QSize(16777215, 40));
        label_4->setFont(font5);
        label_4->setWordWrap(true);

        verticalLayout_6->addWidget(label_4);

        groupBox_13 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setMinimumSize(QSize(361, 550));
        groupBox_13->setMaximumSize(QSize(361, 16777215));
        groupBox_13->setFont(font2);
        groupBox_13->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        label_5 = new QLabel(groupBox_13);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 60, 60, 40));
        label_5->setFont(font8);
        NameLabel = new QLineEdit(groupBox_13);
        NameLabel->setObjectName(QString::fromUtf8("NameLabel"));
        NameLabel->setGeometry(QRect(110, 60, 261, 40));
        NameLabel->setFont(font8);
        NameLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        NameLabel->setFrame(false);
        label_6 = new QLabel(groupBox_13);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 130, 71, 40));
        label_6->setFont(font8);
        HallCombo = new QComboBox(groupBox_13);
        HallCombo->addItem(QString());
        HallCombo->addItem(QString());
        HallCombo->addItem(QString());
        HallCombo->addItem(QString());
        HallCombo->addItem(QString());
        HallCombo->setObjectName(QString::fromUtf8("HallCombo"));
        HallCombo->setGeometry(QRect(110, 130, 161, 40));
        HallCombo->setFont(font8);
        HallCombo->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_7 = new QLabel(groupBox_13);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 180, 101, 40));
        label_7->setFont(font8);
        RoomLine = new QLineEdit(groupBox_13);
        RoomLine->setObjectName(QString::fromUtf8("RoomLine"));
        RoomLine->setGeometry(QRect(110, 180, 80, 40));
        RoomLine->setFont(font8);
        RoomLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        RoomLine->setMaxLength(3);
        RoomLine->setFrame(false);
        label_8 = new QLabel(groupBox_13);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 290, 101, 40));
        label_8->setFont(font8);
        label_8->setWordWrap(true);
        DelivTime = new QTimeEdit(groupBox_13);
        DelivTime->setObjectName(QString::fromUtf8("DelivTime"));
        DelivTime->setGeometry(QRect(110, 290, 118, 40));
        DelivTime->setFont(font8);
        DelivTime->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);\n"
""));
        DelivTime->setFrame(false);
        Noteslabel = new QLabel(groupBox_13);
        Noteslabel->setObjectName(QString::fromUtf8("Noteslabel"));
        Noteslabel->setGeometry(QRect(10, 380, 104, 40));
        Noteslabel->setFont(font8);
        Noteslabel->setWordWrap(true);
        DelivNotes = new QLineEdit(groupBox_13);
        DelivNotes->setObjectName(QString::fromUtf8("DelivNotes"));
        DelivNotes->setGeometry(QRect(129, 390, 221, 150));
        DelivNotes->setFont(font8);
        DelivNotes->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        DelivNotes->setMaxLength(500);
        DelivNotes->setFrame(false);
        DelivNotes->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        PhoneLabel = new QLabel(groupBox_13);
        PhoneLabel->setObjectName(QString::fromUtf8("PhoneLabel"));
        PhoneLabel->setGeometry(QRect(10, 230, 101, 40));
        PhoneLabel->setFont(font8);
        PhoneInpute = new QLineEdit(groupBox_13);
        PhoneInpute->setObjectName(QString::fromUtf8("PhoneInpute"));
        PhoneInpute->setGeometry(QRect(110, 230, 261, 40));
        PhoneInpute->setFont(font8);
        PhoneInpute->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        PhoneInpute->setFrame(false);

        verticalLayout_6->addWidget(groupBox_13);

        label_11 = new QLabel(scrollAreaWidgetContents_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font5);

        verticalLayout_6->addWidget(label_11);

        groupBox = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(361, 200));
        groupBox->setMaximumSize(QSize(361, 200));
        groupBox->setFont(font7);
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        VisaRadio = new QRadioButton(groupBox);
        VisaRadio->setObjectName(QString::fromUtf8("VisaRadio"));
        VisaRadio->setGeometry(QRect(30, 10, 83, 30));
        VisaRadio->setFont(font8);
        VisaRadio->setStyleSheet(QString::fromUtf8(""));
        MasterRadio = new QRadioButton(groupBox);
        MasterRadio->setObjectName(QString::fromUtf8("MasterRadio"));
        MasterRadio->setGeometry(QRect(30, 40, 83, 30));
        MasterRadio->setFont(font8);
        DiscoRadio = new QRadioButton(groupBox);
        DiscoRadio->setObjectName(QString::fromUtf8("DiscoRadio"));
        DiscoRadio->setGeometry(QRect(30, 70, 100, 30));
        DiscoRadio->setFont(font8);
        AmerRadio = new QRadioButton(groupBox);
        AmerRadio->setObjectName(QString::fromUtf8("AmerRadio"));
        AmerRadio->setGeometry(QRect(30, 100, 100, 30));
        AmerRadio->setFont(font8);
        MealRadio = new QRadioButton(groupBox);
        MealRadio->setObjectName(QString::fromUtf8("MealRadio"));
        MealRadio->setGeometry(QRect(30, 160, 140, 30));
        MealRadio->setFont(font8);

        verticalLayout_6->addWidget(groupBox);

        groupBox_14 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setMinimumSize(QSize(0, 350));
        groupBox_14->setMaximumSize(QSize(361, 350));
        groupBox_14->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        label = new QLabel(groupBox_14);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 131, 40));
        label->setFont(font8);
        label->setWordWrap(true);
        CreditNumLine = new QLineEdit(groupBox_14);
        CreditNumLine->setObjectName(QString::fromUtf8("CreditNumLine"));
        CreditNumLine->setGeometry(QRect(130, 30, 230, 40));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font9.setPointSize(14);
        CreditNumLine->setFont(font9);
        CreditNumLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_2 = new QLabel(groupBox_14);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 131, 40));
        label_2->setFont(font8);
        CVCLine = new QLineEdit(groupBox_14);
        CVCLine->setObjectName(QString::fromUtf8("CVCLine"));
        CVCLine->setGeometry(QRect(130, 90, 71, 40));
        CVCLine->setFont(font8);
        CVCLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        CVCLine->setMaxLength(3);
        label_3 = new QLabel(groupBox_14);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 210, 131, 40));
        label_3->setFont(font8);
        CardNameLine = new QLineEdit(groupBox_14);
        CardNameLine->setObjectName(QString::fromUtf8("CardNameLine"));
        CardNameLine->setGeometry(QRect(130, 210, 230, 40));
        CardNameLine->setFont(font8);
        CardNameLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_14 = new QLabel(groupBox_14);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 270, 101, 40));
        label_14->setFont(font8);
        label_14->setWordWrap(true);
        IDNumLine = new QLineEdit(groupBox_14);
        IDNumLine->setObjectName(QString::fromUtf8("IDNumLine"));
        IDNumLine->setGeometry(QRect(130, 270, 230, 40));
        IDNumLine->setFont(font8);
        IDNumLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        IDNumLine->setMaxLength(9);
        label_25 = new QLabel(groupBox_14);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 150, 101, 40));
        label_25->setFont(font8);
        label_25->setWordWrap(true);
        ExpLine = new QLineEdit(groupBox_14);
        ExpLine->setObjectName(QString::fromUtf8("ExpLine"));
        ExpLine->setGeometry(QRect(130, 150, 71, 40));
        ExpLine->setFont(font8);
        ExpLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        ExpLine->setMaxLength(5);

        verticalLayout_6->addWidget(groupBox_14);

        groupBox_15 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_15->setObjectName(QString::fromUtf8("groupBox_15"));
        groupBox_15->setMinimumSize(QSize(361, 320));
        groupBox_15->setMaximumSize(QSize(361, 320));
        groupBox_15->setFont(font);
        groupBox_15->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        label_15 = new QLabel(groupBox_15);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 20, 131, 40));
        label_15->setFont(font8);
        StreetLine = new QLineEdit(groupBox_15);
        StreetLine->setObjectName(QString::fromUtf8("StreetLine"));
        StreetLine->setGeometry(QRect(130, 20, 230, 40));
        StreetLine->setFont(font8);
        StreetLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_16 = new QLabel(groupBox_15);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 80, 131, 41));
        label_16->setFont(font8);
        label_16->setWordWrap(true);
        AptLine = new QLineEdit(groupBox_15);
        AptLine->setObjectName(QString::fromUtf8("AptLine"));
        AptLine->setGeometry(QRect(130, 80, 101, 40));
        AptLine->setFont(font8);
        AptLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_17 = new QLabel(groupBox_15);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 140, 131, 40));
        label_17->setFont(font8);
        CityLine = new QLineEdit(groupBox_15);
        CityLine->setObjectName(QString::fromUtf8("CityLine"));
        CityLine->setGeometry(QRect(130, 140, 201, 40));
        CityLine->setFont(font8);
        CityLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_19 = new QLabel(groupBox_15);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 200, 131, 40));
        label_19->setFont(font8);
        StateCombo = new QComboBox(groupBox_15);
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->addItem(QString());
        StateCombo->setObjectName(QString::fromUtf8("StateCombo"));
        StateCombo->setGeometry(QRect(130, 200, 181, 40));
        StateCombo->setFont(font8);
        StateCombo->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        label_18 = new QLabel(groupBox_15);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 260, 131, 40));
        label_18->setFont(font8);
        ZipLine = new QLineEdit(groupBox_15);
        ZipLine->setObjectName(QString::fromUtf8("ZipLine"));
        ZipLine->setGeometry(QRect(130, 260, 131, 40));
        ZipLine->setFont(font8);
        ZipLine->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));

        verticalLayout_6->addWidget(groupBox_15);

        CompButton = new QPushButton(scrollAreaWidgetContents_7);
        CompButton->setObjectName(QString::fromUtf8("CompButton"));
        CompButton->setMinimumSize(QSize(0, 45));
        CompButton->setMaximumSize(QSize(361, 45));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        CompButton->setFont(font10);
        CompButton->setStyleSheet(QString::fromUtf8("#CompButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#CompButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));

        verticalLayout_6->addWidget(CompButton);

        scrollArea_5->setWidget(scrollAreaWidgetContents_7);
        tabWidget->addTab(tab_7, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        scrollArea_6 = new QScrollArea(tab_6);
        scrollArea_6->setObjectName(QString::fromUtf8("scrollArea_6"));
        scrollArea_6->setGeometry(QRect(10, 10, 391, 551));
        scrollArea_6->setMinimumSize(QSize(391, 551));
        scrollArea_6->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(33, 33, 33);"));
        scrollArea_6->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_8"));
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 391, 551));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_12 = new QLabel(scrollAreaWidgetContents_8);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(0, 40));
        label_12->setMaximumSize(QSize(16777215, 40));
        label_12->setFont(font5);

        verticalLayout_7->addWidget(label_12);

        groupBox_16 = new QGroupBox(scrollAreaWidgetContents_8);
        groupBox_16->setObjectName(QString::fromUtf8("groupBox_16"));
        groupBox_16->setMinimumSize(QSize(361, 395));
        groupBox_16->setMaximumSize(QSize(361, 525));
        groupBox_16->setFont(font);
        groupBox_16->setStyleSheet(QString::fromUtf8("\n"
"border:0;\n"
"background-color: rgb(48, 48, 48);"));
        label_20 = new QLabel(groupBox_16);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 10, 111, 40));
        label_20->setFont(font8);
        FoodLabel = new QLabel(groupBox_16);
        FoodLabel->setObjectName(QString::fromUtf8("FoodLabel"));
        FoodLabel->setGeometry(QRect(150, 10, 190, 40));
        FoodLabel->setFont(font8);
        FoodLabel->setWordWrap(true);
        label_21 = new QLabel(groupBox_16);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(10, 260, 131, 40));
        label_21->setFont(font8);
        FoodChoiceImage_2 = new QLabel(groupBox_16);
        FoodChoiceImage_2->setObjectName(QString::fromUtf8("FoodChoiceImage_2"));
        FoodChoiceImage_2->setGeometry(QRect(10, 50, 201, 131));
        FoodChoiceImage_2->setMinimumSize(QSize(201, 131));
        FoodChoiceImage_2->setMaximumSize(QSize(201, 131));
        FoodChoiceImage_2->setFont(font2);
        FoodChoiceImage_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        DelLabel = new QLabel(groupBox_16);
        DelLabel->setObjectName(QString::fromUtf8("DelLabel"));
        DelLabel->setGeometry(QRect(150, 260, 151, 40));
        DelLabel->setFont(font8);
        label_22 = new QLabel(groupBox_16);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 300, 131, 40));
        label_22->setFont(font8);
        CreditLabel = new QLabel(groupBox_16);
        CreditLabel->setObjectName(QString::fromUtf8("CreditLabel"));
        CreditLabel->setGeometry(QRect(150, 300, 190, 40));
        CreditLabel->setFont(font8);
        label_23 = new QLabel(groupBox_16);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 180, 111, 40));
        label_23->setFont(font8);
        NameLabel_2 = new QLabel(groupBox_16);
        NameLabel_2->setObjectName(QString::fromUtf8("NameLabel_2"));
        NameLabel_2->setGeometry(QRect(150, 180, 151, 40));
        NameLabel_2->setFont(font8);
        RateButton = new QPushButton(groupBox_16);
        RateButton->setObjectName(QString::fromUtf8("RateButton"));
        RateButton->setGeometry(QRect(180, 420, 161, 51));
        RateButton->setFont(font10);
        RateButton->setStyleSheet(QString::fromUtf8("#RateButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#RateButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        label_31 = new QLabel(groupBox_16);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(10, 340, 131, 40));
        label_31->setFont(font8);
        IDLabel = new QLabel(groupBox_16);
        IDLabel->setObjectName(QString::fromUtf8("IDLabel"));
        IDLabel->setGeometry(QRect(150, 340, 190, 40));
        IDLabel->setFont(font8);
        label_24 = new QLabel(groupBox_16);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 220, 111, 40));
        label_24->setFont(font8);
        PhoneOut = new QLabel(groupBox_16);
        PhoneOut->setObjectName(QString::fromUtf8("PhoneOut"));
        PhoneOut->setGeometry(QRect(150, 220, 151, 40));
        PhoneOut->setFont(font8);

        verticalLayout_7->addWidget(groupBox_16);

        scrollArea_6->setWidget(scrollAreaWidgetContents_8);
        tabWidget->addTab(tab_6, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        scrollArea_7 = new QScrollArea(tab_4);
        scrollArea_7->setObjectName(QString::fromUtf8("scrollArea_7"));
        scrollArea_7->setGeometry(QRect(10, 10, 391, 551));
        scrollArea_7->setMinimumSize(QSize(391, 551));
        scrollArea_7->setStyleSheet(QString::fromUtf8("border:0;\n"
"background-color: rgb(33, 33, 33);"));
        scrollArea_7->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_7->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_7->setWidgetResizable(true);
        scrollAreaWidgetContents_9 = new QWidget();
        scrollAreaWidgetContents_9->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_9"));
        scrollAreaWidgetContents_9->setGeometry(QRect(0, 0, 391, 551));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_13 = new QLabel(scrollAreaWidgetContents_9);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 42));
        label_13->setMaximumSize(QSize(16777215, 42));
        QFont font11;
        font11.setFamily(QString::fromUtf8("Nirmala UI Semilight"));
        font11.setPointSize(24);
        label_13->setFont(font11);

        verticalLayout_8->addWidget(label_13);

        groupBox_17 = new QGroupBox(scrollAreaWidgetContents_9);
        groupBox_17->setObjectName(QString::fromUtf8("groupBox_17"));
        groupBox_17->setMinimumSize(QSize(361, 430));
        groupBox_17->setMaximumSize(QSize(361, 460));
        groupBox_17->setStyleSheet(QString::fromUtf8("background-color: rgb(48, 48, 48);\n"
"border:0;"));
        UploadButton = new QPushButton(groupBox_17);
        UploadButton->setObjectName(QString::fromUtf8("UploadButton"));
        UploadButton->setGeometry(QRect(90, 270, 200, 41));
        UploadButton->setFont(font10);
        UploadButton->setStyleSheet(QString::fromUtf8("#UploadButton\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}\n"
"#UploadButton:pressed\n"
"{\n"
"background-color: rgb(100,100,100);\n"
"}"));
        FoodChoiceImage = new QLabel(groupBox_17);
        FoodChoiceImage->setObjectName(QString::fromUtf8("FoodChoiceImage"));
        FoodChoiceImage->setGeometry(QRect(90, 320, 201, 131));
        FoodChoiceImage->setMinimumSize(QSize(201, 131));
        FoodChoiceImage->setMaximumSize(QSize(201, 131));
        FoodChoiceImage->setFont(font2);
        FoodChoiceImage->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_30 = new QLabel(groupBox_17);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(7, 20, 60, 51));
        label_30->setFont(font8);
        Star1 = new QPushButton(groupBox_17);
        Star1->setObjectName(QString::fromUtf8("Star1"));
        Star1->setGeometry(QRect(60, 20, 61, 51));
        Star1->setFont(font);
        Star1->setStyleSheet(QString::fromUtf8("#Star1 {\n"
"backgroud-color: transparent;\n"
"border-image: url(:greyStar.jpeg);\n"
"background: none;\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"}\n"
"#Star1:pressed,\n"
"#Star1:checked\n"
"{\n"
"border-image: url(:yelloStar.png);\n"
"}"));
        Star2 = new QPushButton(groupBox_17);
        Star2->setObjectName(QString::fromUtf8("Star2"));
        Star2->setGeometry(QRect(120, 20, 61, 51));
        Star2->setStyleSheet(QString::fromUtf8("#Star2 {\n"
"backgroud-color: transparent;\n"
"border-image: url(:greyStar.jpeg);\n"
"background: none;\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"}\n"
"#Star2:pressed,\n"
"#Star2:checked\n"
"{\n"
"border-image: url(:yelloStar.png);\n"
"}"));
        Star3 = new QPushButton(groupBox_17);
        Star3->setObjectName(QString::fromUtf8("Star3"));
        Star3->setGeometry(QRect(180, 20, 61, 51));
        Star3->setStyleSheet(QString::fromUtf8("#Star3 {\n"
"backgroud-color: transparent;\n"
"border-image: url(:greyStar.jpeg);\n"
"background: none;\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"}\n"
"#Star3:pressed,\n"
"#Star3:checked\n"
"{\n"
"border-image: url(:yelloStar.png);\n"
"}"));
        Star4 = new QPushButton(groupBox_17);
        Star4->setObjectName(QString::fromUtf8("Star4"));
        Star4->setGeometry(QRect(240, 20, 61, 51));
        Star4->setStyleSheet(QString::fromUtf8("#Star4 {\n"
"backgroud-color: transparent;\n"
"border-image: url(:greyStar.jpeg);\n"
"background: none;\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"}\n"
"#Star4:pressed,\n"
"#Star4:checked\n"
"{\n"
"border-image: url(:yelloStar.png);\n"
"}"));
        Star5 = new QPushButton(groupBox_17);
        Star5->setObjectName(QString::fromUtf8("Star5"));
        Star5->setGeometry(QRect(300, 20, 61, 51));
        Star5->setStyleSheet(QString::fromUtf8("#Star5 {\n"
"backgroud-color: transparent;\n"
"border-image: url(:greyStar.jpeg);\n"
"background: none;\n"
"border: none;\n"
"backgroud-repeat: none;\n"
"}\n"
"#Star5:pressed,\n"
"#Star5:checked\n"
"{\n"
"border-image: url(:yelloStar.png);\n"
"}"));
        CommentLabel = new QLabel(groupBox_17);
        CommentLabel->setObjectName(QString::fromUtf8("CommentLabel"));
        CommentLabel->setGeometry(QRect(10, 100, 81, 51));
        CommentLabel->setFont(font8);
        CommentInput = new QLineEdit(groupBox_17);
        CommentInput->setObjectName(QString::fromUtf8("CommentInput"));
        CommentInput->setGeometry(QRect(90, 110, 260, 140));
        CommentInput->setFont(font8);
        CommentInput->setStyleSheet(QString::fromUtf8("background-color: rgb(66, 66, 66);"));
        CommentInput->setMaxLength(500);
        CommentInput->setFrame(false);
        CommentInput->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayout_8->addWidget(groupBox_17);

        scrollArea_7->setWidget(scrollAreaWidgetContents_9);
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 406, 22));
        menubar->setFont(font);
        menubar->setStyleSheet(QString::fromUtf8("QMenu::item{\n"
" background-color: rgb(48, 48, 48);\n"
" color: white;\n"
" }\n"
"\n"
" QMenu::item:selected{\n"
" background-color: rgb(66, 66, 66);\n"
" color: white;\n"
" } \n"
"\n"
"QMenuBar::item\n"
"{\n"
" background-color: rgb(48, 48, 48);\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"background-color: rgb(66, 66, 66);\n"
"}"));
        menubar->setDefaultUp(false);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setFont(font);
        menuFile->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setFont(font);
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        WelcomLabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Welcome To </p><p align=\"center\">GwinnerEats</p></body></html>", nullptr));
        groupBox_12->setTitle(QString());
        MonButton->setText(QCoreApplication::translate("MainWindow", "Monday", nullptr));
        TuesButton->setText(QCoreApplication::translate("MainWindow", "Tuesday", nullptr));
        WedButton->setText(QCoreApplication::translate("MainWindow", "Wednesday", nullptr));
        ThurButton->setText(QCoreApplication::translate("MainWindow", "Thursday", nullptr));
        FriButton->setText(QCoreApplication::translate("MainWindow", "Friday", nullptr));
        SatButton->setText(QCoreApplication::translate("MainWindow", "Saturday", nullptr));
        SunButton->setText(QCoreApplication::translate("MainWindow", "Sunday", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Day", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Meal</p></body></html>", nullptr));
        groupBox_2->setTitle(QString());
        BreakButton->setText(QCoreApplication::translate("MainWindow", "Breakfast", nullptr));
        LunButton->setText(QCoreApplication::translate("MainWindow", "Lunch", nullptr));
        DinButton->setText(QCoreApplication::translate("MainWindow", "Dinner", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Meal", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Food Choice</p></body></html>", nullptr));
        FoodImage1->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox_3->setTitle(QString());
        FoodLabel1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        FoodImage2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox_4->setTitle(QString());
        FoodLabel2->setText(QCoreApplication::translate("MainWindow", "Hello Gov", nullptr));
        FoodImage3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox_5->setTitle(QString());
        FoodLabel3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        FoodImage4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        groupBox_6->setTitle(QString());
        FoodLabel4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Food", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Delivery Information</p></body></html>", nullptr));
        groupBox_13->setTitle(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        NameLabel->setPlaceholderText(QCoreApplication::translate("MainWindow", "Mark Smith", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Dorm:", nullptr));
        HallCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Hill Hall", nullptr));
        HallCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Ashton Hall", nullptr));
        HallCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Arnett Hall", nullptr));
        HallCombo->setItemText(3, QCoreApplication::translate("MainWindow", "Emerson Hall", nullptr));
        HallCombo->setItemText(4, QCoreApplication::translate("MainWindow", "Moyer Hall", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Room #:", nullptr));
        RoomLine->setInputMask(QString());
        RoomLine->setText(QString());
        RoomLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "111", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Delivery Time:", nullptr));
        Noteslabel->setText(QCoreApplication::translate("MainWindow", "Delivery Notes:", nullptr));
        DelivNotes->setInputMask(QString());
        DelivNotes->setText(QString());
        DelivNotes->setPlaceholderText(QCoreApplication::translate("MainWindow", "I'm sick. Leave at door please.", nullptr));
        PhoneLabel->setText(QCoreApplication::translate("MainWindow", "Phone #:", nullptr));
        PhoneInpute->setPlaceholderText(QCoreApplication::translate("MainWindow", "***-***-***", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Payment</p></body></html>", nullptr));
        groupBox->setTitle(QString());
        VisaRadio->setText(QCoreApplication::translate("MainWindow", "Visa", nullptr));
        MasterRadio->setText(QCoreApplication::translate("MainWindow", "Master", nullptr));
        DiscoRadio->setText(QCoreApplication::translate("MainWindow", "Discovery", nullptr));
        AmerRadio->setText(QCoreApplication::translate("MainWindow", "American", nullptr));
        MealRadio->setText(QCoreApplication::translate("MainWindow", "Meal Swipe", nullptr));
        groupBox_14->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Credit Card Number:</p></body></html>", nullptr));
        CreditNumLine->setText(QString());
        CreditNumLine->setPlaceholderText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "CVC:", nullptr));
        CVCLine->setInputMask(QString());
        CVCLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "000", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Name on Card:", nullptr));
        CardNameLine->setInputMask(QString());
        CardNameLine->setText(QString());
        CardNameLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Mark Smith", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "ID # (only if Meal Swipe):", nullptr));
        IDNumLine->setInputMask(QString());
        IDNumLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "900123123", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Expiration Date: ", nullptr));
        ExpLine->setInputMask(QCoreApplication::translate("MainWindow", "##/##", nullptr));
        ExpLine->setPlaceholderText(QString());
        groupBox_15->setTitle(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Street Address:", nullptr));
        StreetLine->setText(QString());
        StreetLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "123 N Garden St", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Apartment #:", nullptr));
        AptLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "2222", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "City:", nullptr));
        CityLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Seattle", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "State:", nullptr));
        StateCombo->setItemText(0, QCoreApplication::translate("MainWindow", "Alabama", nullptr));
        StateCombo->setItemText(1, QCoreApplication::translate("MainWindow", "Alaska", nullptr));
        StateCombo->setItemText(2, QCoreApplication::translate("MainWindow", "Arizona", nullptr));
        StateCombo->setItemText(3, QCoreApplication::translate("MainWindow", "Arkansas", nullptr));
        StateCombo->setItemText(4, QCoreApplication::translate("MainWindow", "California", nullptr));
        StateCombo->setItemText(5, QCoreApplication::translate("MainWindow", "Colorado", nullptr));
        StateCombo->setItemText(6, QCoreApplication::translate("MainWindow", "Connecticut", nullptr));
        StateCombo->setItemText(7, QCoreApplication::translate("MainWindow", "Delaware", nullptr));
        StateCombo->setItemText(8, QCoreApplication::translate("MainWindow", "Florida", nullptr));
        StateCombo->setItemText(9, QCoreApplication::translate("MainWindow", "Georgia", nullptr));
        StateCombo->setItemText(10, QCoreApplication::translate("MainWindow", "Hawaii", nullptr));
        StateCombo->setItemText(11, QCoreApplication::translate("MainWindow", "Idaho", nullptr));
        StateCombo->setItemText(12, QCoreApplication::translate("MainWindow", "Illinois", nullptr));
        StateCombo->setItemText(13, QCoreApplication::translate("MainWindow", "Indiana", nullptr));
        StateCombo->setItemText(14, QCoreApplication::translate("MainWindow", "Iowa", nullptr));
        StateCombo->setItemText(15, QCoreApplication::translate("MainWindow", "Kansas", nullptr));
        StateCombo->setItemText(16, QCoreApplication::translate("MainWindow", "Kentucky", nullptr));
        StateCombo->setItemText(17, QCoreApplication::translate("MainWindow", "Louisiana", nullptr));
        StateCombo->setItemText(18, QCoreApplication::translate("MainWindow", "Maine", nullptr));
        StateCombo->setItemText(19, QCoreApplication::translate("MainWindow", "Maryland", nullptr));
        StateCombo->setItemText(20, QCoreApplication::translate("MainWindow", "Massachusetts", nullptr));
        StateCombo->setItemText(21, QCoreApplication::translate("MainWindow", "Michigan", nullptr));
        StateCombo->setItemText(22, QCoreApplication::translate("MainWindow", "Minnesota", nullptr));
        StateCombo->setItemText(23, QCoreApplication::translate("MainWindow", "Mississippi", nullptr));
        StateCombo->setItemText(24, QCoreApplication::translate("MainWindow", "Missouri", nullptr));
        StateCombo->setItemText(25, QCoreApplication::translate("MainWindow", "Montana", nullptr));
        StateCombo->setItemText(26, QCoreApplication::translate("MainWindow", "Nebraska", nullptr));
        StateCombo->setItemText(27, QCoreApplication::translate("MainWindow", "Nevada", nullptr));
        StateCombo->setItemText(28, QCoreApplication::translate("MainWindow", "New Hampshire", nullptr));
        StateCombo->setItemText(29, QCoreApplication::translate("MainWindow", "New Jersey", nullptr));
        StateCombo->setItemText(30, QCoreApplication::translate("MainWindow", "New Mexico", nullptr));
        StateCombo->setItemText(31, QCoreApplication::translate("MainWindow", "New York", nullptr));
        StateCombo->setItemText(32, QCoreApplication::translate("MainWindow", "North Carolina", nullptr));
        StateCombo->setItemText(33, QCoreApplication::translate("MainWindow", "North Dakota", nullptr));
        StateCombo->setItemText(34, QCoreApplication::translate("MainWindow", "Ohio", nullptr));
        StateCombo->setItemText(35, QCoreApplication::translate("MainWindow", "Oklahoma", nullptr));
        StateCombo->setItemText(36, QCoreApplication::translate("MainWindow", "Oregon", nullptr));
        StateCombo->setItemText(37, QCoreApplication::translate("MainWindow", "Pennsylvania", nullptr));
        StateCombo->setItemText(38, QCoreApplication::translate("MainWindow", "Rhode Island", nullptr));
        StateCombo->setItemText(39, QCoreApplication::translate("MainWindow", "South Carolina", nullptr));
        StateCombo->setItemText(40, QCoreApplication::translate("MainWindow", "Tenessee", nullptr));
        StateCombo->setItemText(41, QCoreApplication::translate("MainWindow", "Texas", nullptr));
        StateCombo->setItemText(42, QCoreApplication::translate("MainWindow", "Utah", nullptr));
        StateCombo->setItemText(43, QCoreApplication::translate("MainWindow", "Vermont", nullptr));
        StateCombo->setItemText(44, QCoreApplication::translate("MainWindow", "Virginia", nullptr));
        StateCombo->setItemText(45, QCoreApplication::translate("MainWindow", "Washington", nullptr));
        StateCombo->setItemText(46, QCoreApplication::translate("MainWindow", "West Virginia", nullptr));
        StateCombo->setItemText(47, QCoreApplication::translate("MainWindow", "Wisconsin", nullptr));
        StateCombo->setItemText(48, QCoreApplication::translate("MainWindow", "Wyoming", nullptr));

        label_18->setText(QCoreApplication::translate("MainWindow", "Zip Code:", nullptr));
        ZipLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "98119", nullptr));
        CompButton->setText(QCoreApplication::translate("MainWindow", "Complete Payment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Payment", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Confirmation</p></body></html>", nullptr));
        groupBox_16->setTitle(QString());
        label_20->setText(QCoreApplication::translate("MainWindow", "Food Choice:", nullptr));
        FoodLabel->setText(QCoreApplication::translate("MainWindow", "Ex: Octopus", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Delivery Address:", nullptr));
        FoodChoiceImage_2->setText(QCoreApplication::translate("MainWindow", "Image of Food Here", nullptr));
        DelLabel->setText(QCoreApplication::translate("MainWindow", "98119 hill", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Credit Card Info:", nullptr));
        CreditLabel->setText(QCoreApplication::translate("MainWindow", "****-****-****-4587", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        NameLabel_2->setText(QCoreApplication::translate("MainWindow", "Liam Not Levi", nullptr));
        RateButton->setText(QCoreApplication::translate("MainWindow", "Leave Us a Rating", nullptr));
        label_31->setText(QCoreApplication::translate("MainWindow", "ID Number:", nullptr));
        IDLabel->setText(QCoreApplication::translate("MainWindow", "900152416", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "Phone #:", nullptr));
        PhoneOut->setText(QCoreApplication::translate("MainWindow", "***-***-****", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Confirmation", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">Rating</p></body></html>", nullptr));
        groupBox_17->setTitle(QString());
        UploadButton->setText(QCoreApplication::translate("MainWindow", "Upload Image of Food:", nullptr));
        FoodChoiceImage->setText(QCoreApplication::translate("MainWindow", "Image of food", nullptr));
        label_30->setText(QCoreApplication::translate("MainWindow", "Rating:", nullptr));
        Star1->setText(QString());
        Star2->setText(QString());
        Star3->setText(QString());
        Star4->setText(QString());
        Star5->setText(QString());
        CommentLabel->setText(QCoreApplication::translate("MainWindow", "Comment:", nullptr));
        CommentInput->setInputMask(QString());
        CommentInput->setText(QString());
        CommentInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Best Food Ever", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Rating", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
