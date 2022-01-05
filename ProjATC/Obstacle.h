#pragma once
class Obstacle
{
private:
	int x;
	int y;
	int life;


public:
	Obstacle();
	void subLife();
	void resetLife();
	
};

