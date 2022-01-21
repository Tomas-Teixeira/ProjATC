#pragma once
#include "Functions.cpp"

class Alien
{
private:

	Coords Position;

	const char* uperAlien = (" _____ ");
	const char* midAlien = ("/ O O \\");
	const char* lowerAlien = ("\\/---\\/");


public:
	Alien()
	{
		Position.x = 0;
		Position.y = 0;
		createAlien();
	}

	void moveAlien();
	void createAlien();

};