#pragma once
#include <iostream>
#include <vector>
#include <curses.h>
#include <cstdlib>

class Alien
{
private:

	char direction;
	void moveAlien();

public:
	Alien();
	~Alien();
	void start();
};

