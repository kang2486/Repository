#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w,w3;
    w.show();
    w3.show();
    return a.exec();
}
