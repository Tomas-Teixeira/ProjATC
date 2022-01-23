#include "Coordenadas.cpp"

using namespace std;


class Obstacle {
protected:
    int x, y;
public:
    Obstacle(int, int);
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

Obstacle::Obstacle(int a, int b) {
    y = a;
    x = b;
}


