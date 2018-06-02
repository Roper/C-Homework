#include "people.h"
#include "mainwindow.h"
#include "addpeopledialog.h"
#include <QApplication>

void init()
{
    People::Initi();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    init();
    MainWindow w;
    w.show();

    return a.exec();
}
