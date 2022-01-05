#include "SpaceShip.h"

void Spaceship::moveSpaceship()
{
    int tmp = getch();
    switch (tmp)
    {
        //Move Left
    case KEY_LEFT:
        if (pos_x < /*Left_Limit*/)
        {
            pos_x++;
        }
        break;

        //Move Right
    case KEY_RIGHT:
        if (pos_x < /*Right_Limit*/)
        {
            pos_x--;
        }
        break;
        //Shoot
    case KEY_ENTER:
        //Call function shoot

        break;
    }


}
