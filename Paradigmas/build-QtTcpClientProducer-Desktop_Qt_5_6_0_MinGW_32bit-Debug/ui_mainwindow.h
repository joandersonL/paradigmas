/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *servidor;
    QHBoxLayout *horizontalLayout;
    QPushButton *Connect;
    QPushButton *Disconnect;
    QHBoxLayout *horizontalLayout_3;
    QSlider *minimo;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QSlider *maximo;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *timing;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Start;
    QPushButton *Stop;
    QTextBrowser *textBrowser;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(464, 344);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 391, 271));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        servidor = new QLineEdit(layoutWidget);
        servidor->setObjectName(QStringLiteral("servidor"));

        verticalLayout->addWidget(servidor);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Connect = new QPushButton(layoutWidget);
        Connect->setObjectName(QStringLiteral("Connect"));

        horizontalLayout->addWidget(Connect);

        Disconnect = new QPushButton(layoutWidget);
        Disconnect->setObjectName(QStringLiteral("Disconnect"));

        horizontalLayout->addWidget(Disconnect);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minimo = new QSlider(layoutWidget);
        minimo->setObjectName(QStringLiteral("minimo"));
        minimo->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(minimo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));

        verticalLayout_2->addWidget(lcdNumber);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        maximo = new QSlider(layoutWidget);
        maximo->setObjectName(QStringLiteral("maximo"));
        maximo->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(maximo);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        lcdNumber_2 = new QLCDNumber(layoutWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));

        verticalLayout_3->addWidget(lcdNumber_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        timing = new QSlider(layoutWidget);
        timing->setObjectName(QStringLiteral("timing"));
        timing->setMinimum(1);
        timing->setMaximum(10);
        timing->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(timing);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Start = new QPushButton(layoutWidget);
        Start->setObjectName(QStringLiteral("Start"));

        horizontalLayout_5->addWidget(Start);

        Stop = new QPushButton(layoutWidget);
        Stop->setObjectName(QStringLiteral("Stop"));

        horizontalLayout_5->addWidget(Stop);


        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_6);

        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_6->addWidget(textBrowser);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(70, 320, 120, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 119));
        scrollArea->setWidget(scrollAreaWidgetContents);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);
        QObject::connect(timing, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));
        QObject::connect(minimo, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(maximo, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        servidor->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        Connect->setText(QApplication::translate("MainWindow", "Connect", 0));
        Disconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">M\303\255nimo</p></body></html>", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">M\303\241ximo</p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "Timing(s)", 0));
        label_3->setText(QApplication::translate("MainWindow", "1", 0));
        Start->setText(QApplication::translate("MainWindow", "Start", 0));
        Stop->setText(QApplication::translate("MainWindow", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
