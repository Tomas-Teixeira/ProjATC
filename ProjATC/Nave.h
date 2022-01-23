#pragma once
#include "Coordenadas.cpp"
#include "Alien.h"

using namespace std;

class Nave{
private:

    int navex, navey, navedirectionx, health;

public:
    vector <coord> tiros;
    Nave();//Construtor da classe Nave recebe as coordenadas da nave e o sentido do movimento da nave
    bool check_tiros();//Fun��o que retorna a quantidade de tiros
    vector <coord> get_tiros();//Fun��o que devolve o vetor dos tiros
    coord get_tiro(int n);//Fun��o que retorna a coordenada de um tiro
    void draw_nave();//Fun��o que desenha a nave
    void move_nave(int ch);//Fun��o que trata da movimenta��o da nave
    void manda_tiros_nave(int ch);//Fun��o que trata da cria��o de tiros da nave
    void atualiza_tiros_nave();//Fun��o que atualiza a posi��o dos tiros da nave
    void colisao(vector<Alien> a);
};

