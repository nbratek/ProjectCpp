#include "health.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QMainWindow *window = new QMainWindow;


    return a.exec();
}
