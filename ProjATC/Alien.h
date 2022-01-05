#pragma once
#include <iostream>
#include <vector>
#include <curses.h>
#include <cstdlib>

class Alien
{
private:
	int pos_x;
	int pos_y;

public:
	Alien();
	~Alien();
	void moveAlien();
	bool checkColisionAlien();

};

