#pragma once
#include "Coordenadas.cpp"

using namespace std;

class Alien {
private:
    vector<coord> tirosalien;

public:
    int alienx, alieny, aliendirection;

    Alien(int x, int y);//Construtor da classe Alien, recebe as coordenadas do alien

    int get_aly();//Fun��o que retorna a coordenada y do Alien
    vector <coord> get_tiros_alien();
    void draw_alien(); //Fun��o que desenha o Alien no ecr�
    void move_alien(int acc); //Fun��o que lida com a movimenta��o do alien
    int game_over(); //Fun��o que trata do final do jogo
    void manda_tiros_alien(); //Fun��o que trata de criar o tiro
    void atualiza_tiros_alien(int acc);//Fun��o que atualiza as coordenadas do alien e verifica colis�es
};
