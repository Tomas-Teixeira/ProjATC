#include "Alien.h"
#include "Functions.cpp"

void Alien::moveAlien()
{
	Coords windowSize;
	windowSize = getWindowSize(); //Nao funciona para ter o maximo do x e y

	int next_x = 0;
	int direction = 1;

	next_x = positionAlien.x + 5 + direction;
	if (next_x >= windowSize.x || next_x < 14) {
			direction *= -1;
			y += 1;
		}
		else {
			x += direction;
		}
}

void Alien::createAlien() //cria apenas um dos alien é preciso fazer com que crie varios no eixo do x e y
{	
	mvprintw(positionAlien.x, positionAlien.y, uperAlien);
	mvprintw(positionAlien.x, positionAlien.y -1, midAlien);
	mvprintw(positionAlien.x, positionAlien.y - 2, lowerAlien);
}

void Alien::shootAlien()
{
}
