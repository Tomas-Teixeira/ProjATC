#include "Obstacle.h"

Obstacle::Obstacle(int a, int b)
{
    y = a;
    x = b;
}
void Obstacle::draw() {
    mvprintw(y, x, "_");
}

int Obstacle::getx() {
    return x;
}

int Obstacle::gety() {
    return y;
}