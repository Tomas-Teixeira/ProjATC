#pragma once
#include "Functions.cpp"
#include "Tiros.cpp"

class Alien
{
private:

	Coords positionAlien;

	const char* uperAlien = (" _____ ");
	const char* midAlien = ("/ O O \\");
	const char* lowerAlien = ("\\/---\\/");


public:
	Alien()
	{
		positionAlien.x = 0;
		positionAlien.y = 0;
		createAlien();
	}

	void moveAlien();
	void createAlien();
	void shootAlien();

};