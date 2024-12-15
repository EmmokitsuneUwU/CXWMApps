#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Args = qApp->arguments();

    // [1] label text [2] command to execute if affirmative

    ui->label->setText(Args[1]);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OptButtonOK_clicked()
{
    process.startDetached(Args[2]);
    QApplication::exit(0);
}


void MainWindow::on_OptButtonCancel_clicked()
{
    QApplication::exit(-1);
}

