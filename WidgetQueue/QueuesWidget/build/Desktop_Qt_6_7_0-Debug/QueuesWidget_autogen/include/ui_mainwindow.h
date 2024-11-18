/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *nameLineEdit;
    QLineEdit *serviceLineEdit;
    QTextEdit *clientsTextEdit;
    QPushButton *addClientButton;
    QPushButton *showClientsButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(396, 271);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        nameLineEdit = new QLineEdit(centralwidget);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setGeometry(QRect(110, 80, 113, 25));
        serviceLineEdit = new QLineEdit(centralwidget);
        serviceLineEdit->setObjectName("serviceLineEdit");
        serviceLineEdit->setGeometry(QRect(110, 110, 113, 25));
        clientsTextEdit = new QTextEdit(centralwidget);
        clientsTextEdit->setObjectName("clientsTextEdit");
        clientsTextEdit->setGeometry(QRect(230, 80, 151, 111));
        addClientButton = new QPushButton(centralwidget);
        addClientButton->setObjectName("addClientButton");
        addClientButton->setGeometry(QRect(30, 20, 89, 25));
        showClientsButton = new QPushButton(centralwidget);
        showClientsButton->setObjectName("showClientsButton");
        showClientsButton->setGeometry(QRect(120, 20, 89, 25));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 80, 71, 17));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 110, 81, 17));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 396, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nameLineEdit->setText(QString());
        serviceLineEdit->setText(QString());
        addClientButton->setText(QCoreApplication::translate("MainWindow", "Add client", nullptr));
        showClientsButton->setText(QCoreApplication::translate("MainWindow", "Show clients", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name add", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Service add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
