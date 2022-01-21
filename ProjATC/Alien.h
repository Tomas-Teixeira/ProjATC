#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <curses.h>
#include <cstdlib>
#include "Functions.cpp"

class Alien
{
	
private:
	int pos_x;
	int pos_y;
	

public:
	Alien(); 
	~Alien();
	void createAliens();
	void moveAlien();
	bool checkColisionAlien();

};

//3 vetores com 3 tipos de alien
// 