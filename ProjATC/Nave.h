#pragma once
#include "Coordenadas.cpp"
#include "Alien.h"
#include "Obstacle.h"

using namespace std;

class Nave{
private:

    int navex, navey, navedirectionx, health;
    vector <coord> tiros;

public:
    Nave();//Construtor da classe Nave recebe as coordenadas da nave e o sentido do movimento da nave
    bool check_tiros();//Função que retorna a quantidade de tiros
    vector <coord> get_tiros();//Função que devolve o vetor dos tiros
    coord get_tiro(int n);//Função que retorna a coordenada de um tiro
    void draw_nave();//Função que desenha a nave
    void move_nave(int ch);//Função que trata da movimentação da nave
    void manda_tiros_nave(int ch);//Função que trata da criação de tiros da nave
    void atualiza_tiros_nave();//Função que atualiza a posição dos tiros da nave
    void colisao_obstacle(vector<Obstacle> a);//Função que verifica se o obstaculo é atingido pelo tiro e apaga o tiro
    void colisao_alien(vector<Alien>a);//Função que verifica se o alien é atingido pelo tiro e apaga o tiro
};

