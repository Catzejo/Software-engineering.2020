#include "ghosts.h"
#include "mainwindow.h"

ghosts::ghosts()
{

}

ghosts::ghosts(QString nameC, QString specC, QString picC,
                 QStringList enemyC, QStringList foodC, QStringList strongC,
                 QStringList weekC)
{
    nameT = nameC;
    specT = specC;
    picT = picC;
    enemyT = enemyC;
    foodT = foodC;
    strongT = strongC;
    weekT = weekC;

}

ghosts::ghosts(const ghosts &v)
{
   nameT = v.nameT;
   specT = v.specT;
   picT = v.picT;
   enemyT = v.enemyT;
   foodT = v.foodT;
   strongT = v.strongT;
   weekT = v.weekT;
}

ghosts::~ghosts()
{

}

QString ghosts::name()
{
    return nameT;
}

QString ghosts::spec()
{
    return specT;
}

QString ghosts::pic()
{
    return picT;
}

QStringList ghosts::enemy()
{
    return enemyT;
}

QStringList ghosts::food()
{
    return foodT;
}

QStringList ghosts::strong()
{
   return strongT;
}

QStringList ghosts::week()
{
    return weekT;
}

