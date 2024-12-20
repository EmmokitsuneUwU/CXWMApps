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
    float number1 = 0;
    float number2 = 0;
    float result = 0;
    int opper = 1;
    int focused = 0;

private slots:
    void on_Clean_clicked();

    void on_Enter_clicked();

    void on_Sum_clicked();

    void on_Subtract_clicked();

    void on_Divide_clicked();

    void on_Multiply_clicked();

    void on_N1_textChanged(const QString &arg1);

    void on_N2_textChanged(const QString &arg1);

    void on_bt0_clicked();

    void on_bt1_clicked();

    void on_bt2_clicked();

    void on_bt3_clicked();

    void on_bt4_clicked();

    void on_bt5_clicked();

    void on_bt6_clicked();

    void on_bt7_clicked();

    void on_bt8_clicked();

    void on_bt9_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
