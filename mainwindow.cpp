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
    calc('+');
}


void MainWindow::on_pushButton_subtraction_clicked()
{
    calc('-');
}


void MainWindow::on_pushButton_multiplication_clicked()
{
    calc('*');
}


void MainWindow::on_pushButton_division_clicked()
{
    calc('/');
}

void MainWindow::calc(char operation)
{
    bool calc_sys_correct_1 = false;
    bool calc_sys_correct_2 = false;
    bool calc_sys_correct_result = false;
    int calc_sys_1 = ui->lineEdit_calc_system_1->text().toInt(&calc_sys_correct_1);
    int calc_sys_2 = ui->lineEdit_calc_system_2->text().toInt(&calc_sys_correct_2);
    int calc_sys_result = ui->lineEdit_result_culc_sys->text().toInt(&calc_sys_correct_result);

    if (!calc_sys_correct_1 || !calc_sys_correct_2 || !calc_sys_result) {
        ui->label_result_value->setText("Ошибка ввода ССЧ!");
        return;
    }

    bool value_correct_1 = false;
    bool value_correct_2 = false;
    int value1 = ui->lineEdit_value_1->text().toInt(&value_correct_1, calc_sys_1);
    int value2 = ui->lineEdit_value_2->text().toInt(&value_correct_2, calc_sys_2);


    if (!value_correct_1 || !value_correct_2) {
        ui->label_result_value->setText("Неправильный ввод значеня!");
        return;
    }

    QString result = "Неизвестная операция";

    switch (operation) {
    case '*':
        result = QString::number(value1 * value2, calc_sys_result);
        break;
    case '+':
        result = QString::number(value1 + value2, calc_sys_result);
        break;
    case '-':
        result = QString::number(value1 - value2, calc_sys_result);
        break;
    case '/':
        if (value2 == 0) {
            ui->label_result_value->setText("Деление на 0 запрещено");
            return;
        }
        result = QString::number(value1 / value2, calc_sys_result);
        break;
    }
    QString str = "dklfasjlkdfj;flasdjklfs;ljfa;sldjfdlsjf;lsja;lsdjflsjfljs";
    ui->label_7->setFixedWidth(str.size());
    ui->label_7->setText(str);
    ui->label_result_value->setText(result);
}
