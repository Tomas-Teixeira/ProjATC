#include "SpaceShip.h"
#include "Functions.cpp"

void Spaceship::createSpaceship()
{
	mvprintw(positionSpaceship.x, positionSpaceship.y+2, );
	mvprintw(positionSpaceship.x+1, positionSpaceship.y+1, );
	mvprintw(positionSpaceship.x+2, positionSpaceship.y , );
}

void Spaceship::subLife()
{
    life--;
}

void Spaceship::resetLife()
{
    life = 0;
}

void Spaceship::moveSpaceship()
{
    int ch;
    ch = getch();
    switch (ch) {
    case KEY_LEFT:  //Move para a esquerda
        if (positionSpaceship.x == 0)
            positionSpaceship.x = positionSpaceship.x;
        else
            positionSpaceship.x += 1;

        break;
    case KEY_RIGHT:  //Move para a Direita
        if (positionSpaceship.x == windowSize.x) //supostamente se o x for igual ao x maximo volta nao faz nada, mas nao sei fazer
            positionSpaceship.x = positionSpaceship.x;
        else
            positionSpaceship -= 1;

    case KEY_ENTER:
        //DAR O TIRO
        break;
}
