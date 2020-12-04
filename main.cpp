#include "mainwindow.h"
#include <QTextCodec>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.setMaximumHeight(600);
    w.setMinimumHeight(600);
    w.setMaximumWidth(800);
    w.setMinimumWidth(800);
    return a.exec();
}
