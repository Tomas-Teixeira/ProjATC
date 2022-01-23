#pragma once
#include <curses.h>
using namespace std;

class Obstacle {
protected:
    int x, y;
public:
    Obstacle(int a, int b) 
    {
        y = a;
        x = b;
    }
    void draw() {
        mvprintw(y, x, "_");
    }

    int getx() {
        return x;
    }

    int gety() {
        return y;
    }
};


