#include "calendar.h"
#include "mainwindow.h"
#include <QApplication>
#include <QWindow>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calendar c;
    c.show();
    MainWindow w;
    w.show();
    return a.exec();

}
