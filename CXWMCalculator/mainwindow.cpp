#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

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


void MainWindow::on_Clean_clicked()
{
    number1 = 0;
    number2 = 0;
    opper = 1;
    ui->N1->setText(QString::number(number1,'f',2));
    ui->N2->setText(QString::number(number2,'f',2));
}


void MainWindow::on_Enter_clicked()
{
    switch (opper) {
    case 1:
        result = number1 + number2;
        break;
    case 2:
        result = number1 - number2;
        break;
    case 3:
        result = number1 / number2;
        break;
    case 4:
        result = number1 * number2;
        break;
    default:
        break;
    }
    ui->Result->setText(QString::number(result,'f',3));
}


void MainWindow::on_Sum_clicked()
{
    opper = 1;
    ui->Operator->setText("+");
}


void MainWindow::on_Subtract_clicked()
{
    opper = 2;
    ui->Operator->setText("-");
}


void MainWindow::on_Divide_clicked()
{
    opper = 3;
    ui->Operator->setText("/");
}


void MainWindow::on_Multiply_clicked()
{
    ui->Operator->setText("*");
    opper = 4;
}


void MainWindow::on_N1_textChanged(const QString &arg1)
{
    number1 = arg1.toFloat();
    focused = 0;
}


void MainWindow::on_N2_textChanged(const QString &arg1)
{
    number2 = arg1.toFloat();
    focused = 1;
}


void MainWindow::on_bt0_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "0");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "0");
    }
}


void MainWindow::on_bt1_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "1");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "1");
    }
}


void MainWindow::on_bt2_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "2");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "2");
    }
}


void MainWindow::on_bt3_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "3");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "3");
    }
}


void MainWindow::on_bt4_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "4");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "4");
    }
}


void MainWindow::on_bt5_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "5");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "5");
    }
}


void MainWindow::on_bt6_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "6");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "6");
    }
}


void MainWindow::on_bt7_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "7");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "7");
    }
}


void MainWindow::on_bt8_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "8");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "8");
    }
}


void MainWindow::on_bt9_clicked()
{
    if(focused == 0)
    {
        ui->N1->setText(ui->N1->text() + "9");
    }
    else
    {
        ui->N2->setText(ui->N2->text() + "9");
    }
}

