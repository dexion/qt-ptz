#include <QtGui/QApplication>
#include "mainwindow.h"

#include "enumerator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Enumerator en;

    return a.exec();
}
