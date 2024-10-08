/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_value_1;
    QLineEdit *lineEdit_value_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_sum;
    QLabel *label_3;
    QLabel *label_result_value;
    QPushButton *pushButton_multiplication;
    QPushButton *pushButton_division;
    QPushButton *pushButton_subtraction;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_calc_system_1;
    QLineEdit *lineEdit_calc_system_2;
    QLabel *label_6;
    QLineEdit *lineEdit_result_culc_sys;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_value_1 = new QLineEdit(centralwidget);
        lineEdit_value_1->setObjectName("lineEdit_value_1");
        lineEdit_value_1->setGeometry(QRect(250, 60, 113, 22));
        lineEdit_value_2 = new QLineEdit(centralwidget);
        lineEdit_value_2->setObjectName("lineEdit_value_2");
        lineEdit_value_2->setGeometry(QRect(250, 110, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(180, 60, 71, 20));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setLineWidth(1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 110, 71, 20));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName("pushButton_sum");
        pushButton_sum->setGeometry(QRect(290, 150, 111, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 230, 61, 20));
        label_result_value = new QLabel(centralwidget);
        label_result_value->setObjectName("label_result_value");
        label_result_value->setGeometry(QRect(260, 230, 191, 20));
        pushButton_multiplication = new QPushButton(centralwidget);
        pushButton_multiplication->setObjectName("pushButton_multiplication");
        pushButton_multiplication->setGeometry(QRect(170, 150, 111, 24));
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName("pushButton_division");
        pushButton_division->setGeometry(QRect(530, 150, 111, 24));
        pushButton_subtraction = new QPushButton(centralwidget);
        pushButton_subtraction->setObjectName("pushButton_subtraction");
        pushButton_subtraction->setGeometry(QRect(410, 150, 111, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(490, 60, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(490, 110, 49, 16));
        lineEdit_calc_system_1 = new QLineEdit(centralwidget);
        lineEdit_calc_system_1->setObjectName("lineEdit_calc_system_1");
        lineEdit_calc_system_1->setGeometry(QRect(540, 60, 113, 22));
        lineEdit_calc_system_2 = new QLineEdit(centralwidget);
        lineEdit_calc_system_2->setObjectName("lineEdit_calc_system_2");
        lineEdit_calc_system_2->setGeometry(QRect(540, 110, 113, 22));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(490, 230, 41, 20));
        lineEdit_result_culc_sys = new QLineEdit(centralwidget);
        lineEdit_result_culc_sys->setObjectName("lineEdit_result_culc_sys");
        lineEdit_result_culc_sys->setGeometry(QRect(540, 230, 113, 22));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(190, 360, 49, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
        label->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 1:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 2:", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202:", nullptr));
        label_result_value->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        pushButton_multiplication->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton_division->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton_subtraction->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\202\320\260\320\275\320\270\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\320\241\320\247 1:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\241\320\247 2:", nullptr));
        lineEdit_calc_system_1->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lineEdit_calc_system_2->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\241\320\247: ", nullptr));
        lineEdit_result_culc_sys->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
