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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *shutdown;
    QPushButton *reboot;
    QPushButton *logout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *cancel;
    QWidget *widget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/logoFinal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        shutdown = new QPushButton(centralwidget);
        shutdown->setObjectName("shutdown");
        shutdown->setGeometry(QRect(70, 150, 141, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        font.setPointSize(20);
        shutdown->setFont(font);
        shutdown->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        reboot = new QPushButton(centralwidget);
        reboot->setObjectName("reboot");
        reboot->setGeometry(QRect(70, 210, 141, 41));
        reboot->setFont(font);
        reboot->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        logout = new QPushButton(centralwidget);
        logout->setObjectName("logout");
        logout->setGeometry(QRect(295, 150, 141, 41));
        logout->setFont(font);
        logout->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 20, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        font1.setPointSize(17);
        label->setFont(font1);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 60, 80, 65));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Img/logoFinal.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(64, 137, 381, 121));
        label_4->setStyleSheet(QString::fromUtf8("border: 1px dashed;"));
        cancel = new QPushButton(centralwidget);
        cancel->setObjectName("cancel");
        cancel->setGeometry(QRect(295, 210, 141, 41));
        cancel->setFont(font);
        cancel->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(5, 10, 490, 281));
        widget->setStyleSheet(QString::fromUtf8("border: 1px dashed;"));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        label_4->raise();
        shutdown->raise();
        reboot->raise();
        logout->raise();
        label->raise();
        label_3->raise();
        cancel->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Shutdown", nullptr));
        shutdown->setText(QCoreApplication::translate("MainWindow", "Shutdown", nullptr));
        reboot->setText(QCoreApplication::translate("MainWindow", "Reboot", nullptr));
        logout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Logout Menu", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
