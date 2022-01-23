#pragma once
#include "Coordenadas.cpp"

using namespace std;

class Alien {
private:
    vector<coord> tirosalien;

public:
    int alienx, alieny, aliendirection;

    Alien(int x, int y);//Construtor da classe Alien, recebe as coordenadas do alien

    int get_aly();//Função que retorna a coordenada y do Alien
    vector <coord> get_tiros_alien();
    void draw_alien(); //Função que desenha o Alien no ecrã
    void move_alien(int acc); //Função que lida com a movimentação do alien
    int game_over(); //Função que trata do final do jogo
    void manda_tiros_alien(); //Função que trata de criar o tiro
    void atualiza_tiros_alien(int acc);//Função que atualiza as coordenadas do alien e verifica colisões
};
