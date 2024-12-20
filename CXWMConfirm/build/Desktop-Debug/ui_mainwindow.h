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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *OptButtonOK;
    QPushButton *OptButtonCancel;
    QGroupBox *groupBox;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 150);
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/logoFinal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        OptButtonOK = new QPushButton(centralwidget);
        OptButtonOK->setObjectName("OptButtonOK");
        OptButtonOK->setGeometry(QRect(30, 100, 131, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        font1.setPointSize(20);
        OptButtonOK->setFont(font1);
        OptButtonOK->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        OptButtonCancel = new QPushButton(centralwidget);
        OptButtonCancel->setObjectName("OptButtonCancel");
        OptButtonCancel->setGeometry(QRect(340, 100, 131, 41));
        OptButtonCancel->setFont(font1);
        OptButtonCancel->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 481, 80));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(1, 4, 481, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        font2.setPointSize(17);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("border: 1px dashed;"));
        label->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "CXWM Dialog", nullptr));
        OptButtonOK->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        OptButtonCancel->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PLACEHOLDERTEXT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
