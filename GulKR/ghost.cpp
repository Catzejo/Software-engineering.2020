#include "ghost.h"
ghost::ghost()
{
    nameT = (list[1].name()).join(",");
    descT = ;
    picT = ;
    enemyT = ;
    foodT = ;
    strongT = ;
    weekT = ;
}

ghost::ghost(ghost &v)
{
    nameT = v.nameT;
    nameT = v.nameT;
    descT = v.descT;
    picT = v.picT;
    enemyT = v.enemyT;
    foodT = v.foodT;
    strongT = v.strongT;
    weekT = v.weekT;
}

ghost::~ghost()
{

}
