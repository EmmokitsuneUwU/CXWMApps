#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

QProcess process;

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qApp->exit(0);
}


void MainWindow::on_lineEdit_returnPressed()
{
    process.startDetached(ui->lineEdit->text());
    qApp->exit(0);
}

