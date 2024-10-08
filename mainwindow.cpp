#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_sum_clicked()
{
    int value1 = ui->lineEdit_value_1->text().toInt();
    int value2 = ui->lineEdit_value_2->text().toInt();

    int result = value1 + value2;

    ui->label_result_value->setNum(result);
}


void MainWindow::on_pushButton_subtraction_clicked()
{
    int value1 = ui->lineEdit_value_1->text().toInt();
    int value2 = ui->lineEdit_value_2->text().toInt();

    int result = value1 - value2;

    ui->label_result_value->setNum(result);
}


void MainWindow::on_pushButton_multiplication_clicked()
{
    int value1 = ui->lineEdit_value_1->text().toInt();
    int value2 = ui->lineEdit_value_2->text().toInt();

    int result = value1 * value2;

    ui->label_result_value->setNum(result);
}


void MainWindow::on_pushButton_division_clicked()
{
    int value1 = ui->lineEdit_value_1->text().toInt();
    int value2 = ui->lineEdit_value_2->text().toInt();

    if (value2 == 0) {
        ui->label_result_value->setText("Деление на 0 запрещено");
        return;
    }

    int result = value1 / value2;

    ui->label_result_value->setNum(result);
}

