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
    query.exec("create table people(name varchar(20), year int, month int, day int,"
               "relation varchar(20), phoneNumber varchar(20),"
               "emailAddress varchar(100), special varchar(200), sortAnchor int, primary key (name))");
    qDebug() << query.lastError();
    return 1;
}

static void insertToDb(QString name, int year, int month, int day, QString relation,
                       QString phoneNumber, QString emailAddress, QString special, int sortAnchor)
{
    QSqlQuery query;
    query.prepare("insert into people(name, year, month, day, relation, phoneNumber, emailAddress, special, sortAnchor)"
                  "values(:name, :year, :month, :day, :relation, :phoneNumber, :emailAddress, :special, :sortAnchor)");
    query.bindValue(0, name);
    query.bindValue(1, year);
    query.bindValue(2, month);
    query.bindValue(3, day);
    query.bindValue(4, relation);
    query.bindValue(5, phoneNumber);
    query.bindValue(6, emailAddress);
    query.bindValue(7, special);
    query.bindValue(8, sortAnchor);
    query.exec();
}

static void deleteFromDb(QString name)
{
    QSqlQuery query;
    query.prepare("delete from people where name = :name");
    query.bindValue(0, name);
    query.exec();
}

#endif // CONNECTION_H
