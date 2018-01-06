#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include <QDebug>
#include<QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    MainWindow w;
    w.show();

    return a.exec();
}
