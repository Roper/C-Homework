#include "mainwindow.h"
#include "addpeopledialog.h"
#include "people.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    People::Initi();
    MainWindow w;
    w.show();

    return a.exec();
}
