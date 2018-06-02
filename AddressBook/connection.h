#ifndef CONNECTION_H
#define CONNECTION_H

#include <QString>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>

static bool checkConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("AddressBook.db");
    db.setUserName("AddressBookUser");
    db.setPassword("");
    if(!db.open())
        return 0;

    QSqlQuery query;
    if(query.exec("create table people(id int, name varchar(20), year int, month int, day int,"
               "relation varchar(20), tel varchar(20),"
               "emailAddr varchar(100), special varchar(200), primary key (id))"))
    {
        query.exec("create table status(id int, count int, showSpecial int, lastQuery varchar(200), primary key(id))");
        query.exec("insert into status values(0, 0, -1, 'select * from people')");
    }

    return 1;
}

static void insertToDb(int count, QString name, int year, int month, int day, QString relation,
                       QString tel, QString emailAddr, QString special)
{
    QSqlQuery query;
    query.prepare("insert into people(id, name, year, month, day, relation, tel, emailAddr, special)"
                  "values(:id, :name, :year, :month, :day, :relation, :tel, :emailAddr, :special)");
    query.bindValue(":id", count);
    query.bindValue(":name", name);
    query.bindValue(":year", year);
    query.bindValue(":month", month);
    query.bindValue(":day", day);
    query.bindValue(":relation", relation);
    query.bindValue(":tel", tel);
    query.bindValue(":emailAddr", emailAddr);
    query.bindValue(":special", special);
    query.exec();
}

static void deleteFromDb(int id)
{
    QSqlQuery query;
    query.prepare("delete from people where id = :id");
    query.bindValue(":id", id);
    query.exec();
}

#endif // CONNECTION_H
