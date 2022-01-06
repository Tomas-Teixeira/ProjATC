#include "Alien.h"

void manda_tiros_alien(int bar1x, int ch) {
    int tiroy = 3, ac, tirox;
    if (ac % 10 == 0) {
        //Cria tiro e adiciona ao vetor
        tirox = bar1x + 1;
    }
    ac++;
}

void atualiza_tiros_alien() {
    //Atualiza as coords dos tiros percorrendo o vetor de tiros
}

void move_alien() {
    if (bar1x + 5 >= w || bar1x - 3 < 0) {
        bar1directionx *= -1;
        bar1x += bar1directionx;
    }
    else {
        bar1x += bar1directionx;
    }
    mvprintw(bar1y + 1, bar1x + 1, "V");
    mvprintw(bar1y + 1, bar1x + 2, "V");
    mvprintw(bar1y + 1, bar1x + 3, "V");
}

void damage_alien() {
    //Se y e x do tiro da nave for igual ao alien:
    healthbar--;
    //else return;
}
