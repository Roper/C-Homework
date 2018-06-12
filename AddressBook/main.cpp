#include "people.h"
#include "mainwindow.h"
#include "addpeopledialog.h"
#include <QDate>
#include <QApplication>

void init()
{
    People::Initi();
}

/*
QVariant QSqlQueryModel::data(const QModelIndex &item, int role) const
{
    QVariant ret = QSqlQueryModel::data(item, role);
    if(ret.toString() == "" && item.column() == 5)
    {
        int row = item.row();
        int y = QDate::currentDate().year();
        int m = this->index(row, 3).data().toInt();
        int d = this->index(row, 4).data().toInt();
        QDate *dat = new QDate(y, m, d);
        switch(dat->dayOfWeek())
        {
            case 1:
                return "Monday";
            case 2:
                return "Tuesday";
            case 3:
                return "Wednesday";
            case 4:
                return "Thursday";
            case 5:
                return "Friday";
            case 6:
                return "Saturday";
            case 7:
                return "Sunday";
        }
    }
    return ret;
}
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    init();
    MainWindow w;
    w.show();

    return a.exec();
}
