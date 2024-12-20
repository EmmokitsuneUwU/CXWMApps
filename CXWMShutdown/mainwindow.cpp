#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>

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

void MainWindow::on_shutdown_clicked()
{
    process.start("shutdown");
}


void MainWindow::on_reboot_clicked()
{
    process.start("reboot");
}


void MainWindow::on_logout_clicked()
{
    process.start("pkill CXWM");
}


void MainWindow::on_cancel_clicked()
{
    qApp->exit();
}

