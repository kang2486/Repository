#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w,w2;
    w.move(200,100);
    w2.move(500,100);

    w.show();
    w2.show();
    return a.exec();
}
