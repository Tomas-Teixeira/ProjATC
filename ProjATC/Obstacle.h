#include "Coordenadas.cpp"

using namespace std;

#pragma once

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
        mvprintw(y + 1, x + 1, "_");
    }
};