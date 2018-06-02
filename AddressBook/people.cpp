#include "people.h"

QStringList People::relations;

People::People()
{
}

void People::Initi()
{
    relations << "同学" << "朋友" << "同事" << "亲戚";
}
QString People::indexToSpecial(int index)
{
    switch(index)
    {
        case 0:
            return "学校";
            break;
        case 1:
            return "认识地";
            break;
        case 2:
            return "单位";
            break;
        case 3:
            return "称呼";
    }
}

int People::relationToIndex(QString relation)
{
    for(int i = 0; i < relations.size(); i ++)
        if(!QString::compare(relation, relations.at(i)))
            return i;
}
