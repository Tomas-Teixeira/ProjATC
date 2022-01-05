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
	void moveAlien();

public:
	Alien();
	~Alien();
	void start();
};

