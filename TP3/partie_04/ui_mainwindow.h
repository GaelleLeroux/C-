/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Button_5;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QCheckBox *checkBox;
    QPushButton *Button_1;
    QCheckBox *checkBox_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(442, 310);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Button_5 = new QPushButton(centralwidget);
        Button_5->setObjectName(QStringLiteral("Button_5"));
        Button_5->setGeometry(QRect(30, 230, 92, 27));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 251, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(gridLayoutWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        gridLayout->addWidget(checkBox, 0, 0, 1, 1);

        Button_1 = new QPushButton(gridLayoutWidget);
        Button_1->setObjectName(QStringLiteral("Button_1"));

        gridLayout->addWidget(Button_1, 1, 0, 1, 1);

        checkBox_2 = new QCheckBox(gridLayoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        gridLayout->addWidget(checkBox_2, 0, 1, 1, 1);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(280, 20, 151, 151));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Button_2 = new QPushButton(verticalLayoutWidget);
        Button_2->setObjectName(QStringLiteral("Button_2"));

        verticalLayout->addWidget(Button_2);

        Button_3 = new QPushButton(verticalLayoutWidget);
        Button_3->setObjectName(QStringLiteral("Button_3"));

        verticalLayout->addWidget(Button_3);

        Button_4 = new QPushButton(verticalLayoutWidget);
        Button_4->setObjectName(QStringLiteral("Button_4"));

        verticalLayout->addWidget(Button_4);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 180, 59, 15));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 230, 113, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 442, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Button_5->setText(QApplication::translate("MainWindow", "Bouton 5", Q_NULLPTR));
        checkBox->setText(QApplication::translate("MainWindow", "checkbox 1", Q_NULLPTR));
        Button_1->setText(QApplication::translate("MainWindow", "bouton 1", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("MainWindow", "checkbox 2", Q_NULLPTR));
        Button_2->setText(QApplication::translate("MainWindow", "bouton 2", Q_NULLPTR));
        Button_3->setText(QApplication::translate("MainWindow", "bouton 3", Q_NULLPTR));
        Button_4->setText(QApplication::translate("MainWindow", "bouton 4", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "L\303\251gende", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("MainWindow", "pour ecrire", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
