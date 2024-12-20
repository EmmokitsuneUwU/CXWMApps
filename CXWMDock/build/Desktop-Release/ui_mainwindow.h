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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Menu;
    QFrame *Clock;
    QLabel *hour;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(96, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 170);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Menu = new QPushButton(centralwidget);
        Menu->setObjectName("Menu");
        Menu->setGeometry(QRect(5, 5, 86, 86));
        Menu->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));\n"
"border: 3px solid;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/logoFinal.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Menu->setIcon(icon);
        Menu->setIconSize(QSize(80, 80));
        Clock = new QFrame(centralwidget);
        Clock->setObjectName("Clock");
        Clock->setGeometry(QRect(5, 100, 86, 86));
        Clock->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(143, 142, 154, 255), stop:1 rgba(143, 142, 154, 255));\n"
"border: 3px solid;"));
        Clock->setFrameShape(QFrame::Shape::StyledPanel);
        Clock->setFrameShadow(QFrame::Shadow::Raised);
        hour = new QLabel(Clock);
        hour->setObjectName("hour");
        hour->setGeometry(QRect(10, 10, 65, 18));
        QFont font;
        font.setFamilies({QString::fromUtf8("Terminus (TTF)")});
        font.setPointSize(17);
        hour->setFont(font);
        hour->setStyleSheet(QString::fromUtf8("border: 2px solid;\n"
"background-color: rgb(0, 85, 0);\n"
"color: rgb(0, 255, 0);"));
        hour->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(Clock);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 27, 61, 51));
        label->setStyleSheet(QString::fromUtf8("border: none;"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Img/iconCalendar.png")));
        label->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Menu->setText(QString());
        hour->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
