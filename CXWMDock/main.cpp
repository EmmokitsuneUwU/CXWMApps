#include "mainwindow.h"

#include <QApplication>
#include <QScreen>
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QScreen *screen = QGuiApplication::primaryScreen();
    MainWindow w;

    w.move(screen->geometry().width() - 96,0);

    w.show();
    return a.exec();
}
