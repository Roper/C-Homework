#include "people.h"

QStringList People::relations;

People::People()
{
}

void People::Initi()
{
    relations << "同学" << "朋友" << "同事" << "亲戚";
}
