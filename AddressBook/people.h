#ifndef PEOPLE_H
#define PEOPLE_H

#include <QStringList>

class People
{
public:
    static QStringList relations;
public:
    People();
    static void Initi();
    static QString indexToSpecial(int index);
    static int relationToIndex(QString relation);
};

#endif // PEOPLE_H
