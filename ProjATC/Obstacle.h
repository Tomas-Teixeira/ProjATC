#pragma once
#include <curses.h>
using namespace std;

class Obstacle {
private:
    int x, y;
public:
    Obstacle(int a, int b);//Construtor da classe Obstacle recebe as coordenadas do obstaculo

    void draw();//Desenha o obstaculo
    int getx();//Dá return a coordenada x do obstaculo
    int gety();//Dá return a coordenada x do obstaculo

};
