#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    enum Operation {
        Add,
        Subtract,
        Multiply,
        Divide,
        Sinus,
        Сosine,
        Tangent,
        Сotangent,
        Arcsine,
        Arccosine
    };
    void calc(Operation operation);

private slots:
    void on_pushButton_sum_clicked();

    void on_pushButton_subtraction_clicked();

    void on_pushButton_multiplication_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_cotan_clicked();

    void on_pushButton_arcsin_clicked();

    void on_pushButton_arccos_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
