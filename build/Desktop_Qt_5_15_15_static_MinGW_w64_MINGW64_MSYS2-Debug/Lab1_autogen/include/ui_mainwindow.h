/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
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
#include <QtWidgets/QRadioButton>
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
    QRadioButton *radioButton_radians;
    QRadioButton *radioButton_degrees;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_cotan;
    QPushButton *pushButton_arcsin;
    QPushButton *pushButton_arccos;
    QLabel *label_4;
    QPushButton *pushButton_arctan;
    QPushButton *pushButton_arccot;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit_value_1 = new QLineEdit(centralwidget);
        lineEdit_value_1->setObjectName(QString::fromUtf8("lineEdit_value_1"));
        lineEdit_value_1->setGeometry(QRect(280, 60, 113, 22));
        lineEdit_value_2 = new QLineEdit(centralwidget);
        lineEdit_value_2->setObjectName(QString::fromUtf8("lineEdit_value_2"));
        lineEdit_value_2->setGeometry(QRect(280, 110, 113, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 60, 91, 20));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setAutoFillBackground(false);
        label->setLineWidth(1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 110, 91, 20));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName(QString::fromUtf8("pushButton_sum"));
        pushButton_sum->setGeometry(QRect(290, 150, 111, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 330, 111, 20));
        label_result_value = new QLabel(centralwidget);
        label_result_value->setObjectName(QString::fromUtf8("label_result_value"));
        label_result_value->setGeometry(QRect(310, 330, 271, 20));
        pushButton_multiplication = new QPushButton(centralwidget);
        pushButton_multiplication->setObjectName(QString::fromUtf8("pushButton_multiplication"));
        pushButton_multiplication->setGeometry(QRect(170, 150, 111, 24));
        pushButton_division = new QPushButton(centralwidget);
        pushButton_division->setObjectName(QString::fromUtf8("pushButton_division"));
        pushButton_division->setGeometry(QRect(530, 150, 111, 24));
        pushButton_subtraction = new QPushButton(centralwidget);
        pushButton_subtraction->setObjectName(QString::fromUtf8("pushButton_subtraction"));
        pushButton_subtraction->setGeometry(QRect(410, 150, 111, 24));
        radioButton_radians = new QRadioButton(centralwidget);
        radioButton_radians->setObjectName(QString::fromUtf8("radioButton_radians"));
        radioButton_radians->setGeometry(QRect(160, 210, 111, 20));
        radioButton_degrees = new QRadioButton(centralwidget);
        radioButton_degrees->setObjectName(QString::fromUtf8("radioButton_degrees"));
        radioButton_degrees->setGeometry(QRect(290, 210, 121, 20));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName(QString::fromUtf8("pushButton_sin"));
        pushButton_sin->setGeometry(QRect(170, 240, 111, 24));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName(QString::fromUtf8("pushButton_cos"));
        pushButton_cos->setGeometry(QRect(290, 240, 111, 24));
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName(QString::fromUtf8("pushButton_tan"));
        pushButton_tan->setGeometry(QRect(410, 240, 111, 24));
        pushButton_cotan = new QPushButton(centralwidget);
        pushButton_cotan->setObjectName(QString::fromUtf8("pushButton_cotan"));
        pushButton_cotan->setGeometry(QRect(530, 240, 111, 24));
        pushButton_arcsin = new QPushButton(centralwidget);
        pushButton_arcsin->setObjectName(QString::fromUtf8("pushButton_arcsin"));
        pushButton_arcsin->setGeometry(QRect(170, 270, 111, 24));
        pushButton_arccos = new QPushButton(centralwidget);
        pushButton_arccos->setObjectName(QString::fromUtf8("pushButton_arccos"));
        pushButton_arccos->setGeometry(QRect(290, 270, 111, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 190, 71, 16));
        pushButton_arctan = new QPushButton(centralwidget);
        pushButton_arctan->setObjectName(QString::fromUtf8("pushButton_arctan"));
        pushButton_arctan->setGeometry(QRect(410, 270, 111, 24));
        pushButton_arccot = new QPushButton(centralwidget);
        pushButton_arccot->setObjectName(QString::fromUtf8("pushButton_arccot"));
        pushButton_arccot->setGeometry(QRect(530, 270, 111, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
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
        radioButton_radians->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", nullptr));
        radioButton_degrees->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_cotan->setText(QCoreApplication::translate("MainWindow", "cotan", nullptr));
        pushButton_arcsin->setText(QCoreApplication::translate("MainWindow", "arcsin", nullptr));
        pushButton_arccos->setText(QCoreApplication::translate("MainWindow", "arccos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \320\262:", nullptr));
        pushButton_arctan->setText(QCoreApplication::translate("MainWindow", "arctan", nullptr));
        pushButton_arccot->setText(QCoreApplication::translate("MainWindow", "arccot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
