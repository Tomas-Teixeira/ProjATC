#pragma once
#include <iostream>
#include <vector>
#include <curses.h>
#include <cstdlib>

class Spaceship
{
private:
	int pos_x;
	int pos_y;
	void moveSpaceship();

public:
	Spaceship();
	~Spaceship();
	
};
