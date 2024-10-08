#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "math.h"

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
    calc(Operation::Add);
}


void MainWindow::on_pushButton_subtraction_clicked()
{
    calc(Operation::Subtract);
}


void MainWindow::on_pushButton_multiplication_clicked()
{
    calc(Operation::Multiply);
}


void MainWindow::on_pushButton_division_clicked()
{
    calc(Operation::Divide);
}

void MainWindow::calc(Operation operation)
{
    bool value_correct_1 = false;
    bool value_correct_2 = false;
    double value1 = ui->lineEdit_value_1->text().toDouble(&value_correct_1);
    double value2 = ui->lineEdit_value_2->text().toDouble(&value_correct_2);

    if (!value_correct_1 || !value_correct_2) {
        ui->label_result_value->setText("Неправильный ввод значеня!");
        return;
    }



    double result = 0.0;

    switch (operation) {
    case Multiply:
        result = value1 * value2;
        break;
    case Add:
        result = value1 + value2;
        break;
    case Subtract:
        result = value1 - value2;
        break;
    case Divide:
        result = value1 / value2;
        if (value2 == 0) {
            ui->label_result_value->setText("Деление на 0 запрещено!");
            return;
        }
        break;
    case Sinus:
        if (ui->radioButton_degrees->isChecked()) {
            result = sin(value1 * M_PI / 180.0);
        } else if (ui->radioButton_radians->isChecked()) {
            result = sin(value1);
        } else {
            ui->label_result_value->setText("Выберите тип!");
            return;
        }
        break;
    case Сosine:
        if (ui->radioButton_degrees->isChecked()) {
            result = cos(value1 * M_PI / 180.0);
        } else if (ui->radioButton_radians->isChecked()) {
            result = cos(value1);
        } else {
            ui->label_result_value->setText("Выберите тип!");
            return;
        }
        break;
    case Tangent:
        if (value1 == M_PI / 2 || value1 == 90.0 || value1 == 270.0 || value1 == (3 * M_PI) / 2 ) {
            ui->label_result_value->setText("Такого тангенса нет!");
            return;
        }
        if (ui->radioButton_degrees->isChecked()) {
            result = tan(value1 * M_PI / 180.0);
        } else if (ui->radioButton_radians->isChecked()) {
            result = tan(value1);
        } else {
            ui->label_result_value->setText("Выберите тип!");
            return;
        }
        break;
    case Сotangent:
        if (ui->radioButton_degrees->isChecked()) {
            result = 1/tan(value1 * M_PI / 180.0);
        } else if (ui->radioButton_radians->isChecked()) {
            result = 1/tan(value1);
        } else {
            ui->label_result_value->setText("Выберите тип!");
            return;
        }
        break;
    case Arcsine:
        if (ui->radioButton_degrees->isChecked()) {
            result = asin(value1 * M_PI / 180.0);
        } else if (ui->radioButton_radians->isChecked()) {
            result = asin(value1);
        } else {
            ui->label_result_value->setText("Выберите тип!");
            return;
        }
        break;
    case Arccosine:
        if (ui->radioButton_degrees->isChecked()) {
            result = acos(value1 * M_PI / 180.0);
        } else if (ui->radioButton_radians->isChecked()) {
            result = acos(value1);
        } else {
            ui->label_result_value->setText("Выберите тип!");
            return;
        }
        break;
    }

    if (qIsNaN(result)) {
        ui->label_result_value->setText("Не число!");
    } else if (qIsInf(result)) {
        ui->label_result_value->setText("Бесконечность!");
    } else {
        ui->label_result_value->setText(QString::number(result, 'f', 10));
    }
}

void MainWindow::on_pushButton_sin_clicked()
{
    calc(Operation::Sinus);
}


void MainWindow::on_pushButton_cos_clicked()
{
    calc(Operation::Сosine);
}


void MainWindow::on_pushButton_tan_clicked()
{
    calc(Operation::Tangent);
}


void MainWindow::on_pushButton_cotan_clicked()
{
    calc(Operation::Сotangent);
}


void MainWindow::on_pushButton_arcsin_clicked()
{
    calc(Operation::Arcsine);
}


void MainWindow::on_pushButton_arccos_clicked()
{
    calc(Operation::Arccosine);
}

