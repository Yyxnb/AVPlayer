/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *openBtn;
    QPushButton *playBtn;
    QPushButton *pauseBtn;
    QPushButton *stopBtn;
    QLabel *label;
    QStatusBar *statusBar;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(572, 508);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openBtn = new QPushButton(widget);
        openBtn->setObjectName(QStringLiteral("openBtn"));

        horizontalLayout->addWidget(openBtn);

        playBtn = new QPushButton(widget);
        playBtn->setObjectName(QStringLiteral("playBtn"));
        playBtn->setIconSize(QSize(16, 20));

        horizontalLayout->addWidget(playBtn);

        pauseBtn = new QPushButton(widget);
        pauseBtn->setObjectName(QStringLiteral("pauseBtn"));

        horizontalLayout->addWidget(pauseBtn);

        stopBtn = new QPushButton(widget);
        stopBtn->setObjectName(QStringLiteral("stopBtn"));

        horizontalLayout->addWidget(stopBtn);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 572, 23));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        openBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        playBtn->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", Q_NULLPTR));
        pauseBtn->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", Q_NULLPTR));
        stopBtn->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "AVPlayer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
