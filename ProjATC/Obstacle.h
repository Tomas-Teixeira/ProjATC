#pragma once
#include <curses.h>
using namespace std;

class Obstacle {
private:
    int x, y;
public:
    Obstacle(int a, int b);//Construtor da classe Obstacle recebe as coordenadas do obstaculo

    void draw();//Desenha o obstaculo
    int getx();//D� return a coordenada x do obstaculo
    int gety();//D� return a coordenada x do obstaculo

};
