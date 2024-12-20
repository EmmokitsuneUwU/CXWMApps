/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *N1;
    QLineEdit *N2;
    QLabel *Result;
    QLabel *Operator;
    QLabel *label;
    QPushButton *bt9;
    QPushButton *Delete;
    QPushButton *bt0;
    QPushButton *Enter;
    QPushButton *Multiply;
    QPushButton *Subtract;
    QPushButton *bt3;
    QPushButton *bt4;
    QPushButton *bt7;
    QPushButton *bt2;
    QPushButton *bt1;
    QPushButton *bt6;
    QPushButton *Divide;
    QPushButton *bt5;
    QPushButton *bt8;
    QPushButton *Dot;
    QPushButton *Clean;
    QPushButton *Sum;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 500);
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        font.setPointSize(17);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/logoFinal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(9, 9, 381, 481));
        N1 = new QLineEdit(groupBox);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(12, 16, 361, 31));
        N1->setStyleSheet(QString::fromUtf8("border: 3px dotted;"));
        N2 = new QLineEdit(groupBox);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(10, 110, 361, 27));
        N2->setStyleSheet(QString::fromUtf8("border: 3px dotted;"));
        Result = new QLabel(groupBox);
        Result->setObjectName("Result");
        Result->setGeometry(QRect(14, 150, 351, 20));
        Result->setFont(font);
        Result->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Operator = new QLabel(groupBox);
        Operator->setObjectName("Operator");
        Operator->setGeometry(QRect(150, 70, 65, 18));
        Operator->setFont(font);
        Operator->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 190, 361, 281));
        label->setStyleSheet(QString::fromUtf8("border: 1px dashed;"));
        bt9 = new QPushButton(groupBox);
        bt9->setObjectName("bt9");
        bt9->setGeometry(QRect(165, 380, 51, 41));
        bt9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Delete = new QPushButton(groupBox);
        Delete->setObjectName("Delete");
        Delete->setGeometry(QRect(225, 380, 51, 41));
        Delete->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt0 = new QPushButton(groupBox);
        bt0->setObjectName("bt0");
        bt0->setGeometry(QRect(105, 230, 51, 41));
        bt0->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Enter = new QPushButton(groupBox);
        Enter->setObjectName("Enter");
        Enter->setGeometry(QRect(20, 230, 51, 41));
        Enter->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Multiply = new QPushButton(groupBox);
        Multiply->setObjectName("Multiply");
        Multiply->setGeometry(QRect(310, 380, 51, 41));
        Multiply->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Subtract = new QPushButton(groupBox);
        Subtract->setObjectName("Subtract");
        Subtract->setGeometry(QRect(310, 230, 51, 41));
        Subtract->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt3 = new QPushButton(groupBox);
        bt3->setObjectName("bt3");
        bt3->setGeometry(QRect(105, 280, 51, 41));
        bt3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt4 = new QPushButton(groupBox);
        bt4->setObjectName("bt4");
        bt4->setGeometry(QRect(165, 280, 51, 41));
        bt4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt7 = new QPushButton(groupBox);
        bt7->setObjectName("bt7");
        bt7->setGeometry(QRect(165, 330, 51, 41));
        bt7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt2 = new QPushButton(groupBox);
        bt2->setObjectName("bt2");
        bt2->setGeometry(QRect(225, 230, 51, 41));
        bt2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt1 = new QPushButton(groupBox);
        bt1->setObjectName("bt1");
        bt1->setGeometry(QRect(165, 230, 51, 41));
        bt1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt6 = new QPushButton(groupBox);
        bt6->setObjectName("bt6");
        bt6->setGeometry(QRect(105, 330, 51, 41));
        bt6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Divide = new QPushButton(groupBox);
        Divide->setObjectName("Divide");
        Divide->setGeometry(QRect(310, 305, 51, 41));
        Divide->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt5 = new QPushButton(groupBox);
        bt5->setObjectName("bt5");
        bt5->setGeometry(QRect(225, 280, 51, 41));
        bt5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        bt8 = new QPushButton(groupBox);
        bt8->setObjectName("bt8");
        bt8->setGeometry(QRect(225, 330, 51, 41));
        bt8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Dot = new QPushButton(groupBox);
        Dot->setObjectName("Dot");
        Dot->setGeometry(QRect(105, 380, 51, 41));
        Dot->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Clean = new QPushButton(groupBox);
        Clean->setObjectName("Clean");
        Clean->setGeometry(QRect(20, 305, 51, 41));
        Clean->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        Sum = new QPushButton(groupBox);
        Sum->setObjectName("Sum");
        Sum->setGeometry(QRect(20, 380, 51, 41));
        Sum->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        Result->setText(QString());
        Operator->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QString());
        bt9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Delete->setText(QString());
        bt0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Enter->setText(QCoreApplication::translate("MainWindow", "E", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bt3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        bt4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        bt7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        bt2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        bt1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        bt6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        bt5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        bt8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Dot->setText(QString());
        Clean->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Sum->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
