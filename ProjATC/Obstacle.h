#pragma once
#include <curses.h>
using namespace std;

class Obstacle {
private:
    int x, y;
public:
    Obstacle(int a, int b);

    void draw();
    int getx();
    int gety();

};
