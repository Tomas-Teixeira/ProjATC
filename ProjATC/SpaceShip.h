#pragma once
#include <iostream>
#include <vector>
#include <curses.h>
#include <cstdlib>
#include "Functions.cpp"

class Spaceship
{
private:
	int life;
	Coords positionSpaceship; // O x é metade do x_max 

public:
	Spaceship();
	~Spaceship();

	void createSpaceship();
	void moveSpaceship();
	void subLife();
	void resetLife();
	bool checkColisionSpaceship();
	void shoot();
	void Difficulty();
	
};
