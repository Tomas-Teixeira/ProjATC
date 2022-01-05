#pragma once
#include <iostream>
#include <vector>
#include <curses.h>
#include <cstdlib>

class Spaceship
{
private:
	int pos_x;
	int const pos_y;
	int life;

public:
	Spaceship();
	~Spaceship();

	void moveSpaceship();
	void subLife();
	void resetLife();
	bool checkColisionSpaceship();
	void shoot();
	void Difficulty();
	
};
