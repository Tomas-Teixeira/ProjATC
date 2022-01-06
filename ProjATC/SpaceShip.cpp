#include "SpaceShip.h"

void move_nave(int ch) {

    int bar2x = 60, bar2y = 27, bar2directionx = 1;
    switch (ch) {
    case KEY_LEFT:  // user pressed up arrow key
        bar2directionx = -1;
        bar2x += bar2directionx;

        break;
    case KEY_RIGHT:  // user pressed up arrow key
        bar2directionx = 1;
        bar2x += bar2directionx;

        break;
    case ERR:
        bar2directionx = 0;
        bar2x += bar2directionx;
        break;

    }




    if (bar2x + 3 >= w || bar2x <= 0) {
        bar2directionx *= -1;
        bar2x += bar2directionx;
    }
    else {
        bar2x += bar2directionx;
    }
    mvprintw(bar2y, bar2x + 2, "^");
    mvprintw(bar2y + 1, bar2x + 1, "0");
    mvprintw(bar2y + 1, bar2x + 2, "0");
    mvprintw(bar2y + 1, bar2x + 3, "0");
    mvprintw(bar2y + 2, bar2x, "0");
    mvprintw(bar2y + 2, bar2x + 1, "0");
    mvprintw(bar2y + 2, bar2x + 2, "0");
    mvprintw(bar2y + 2, bar2x + 3, "0");
    mvprintw(bar2y + 2, bar2x + 4, "0");

}


void manda_tiros_nave(int bar2x, int ch) {
    int tiroy = 3, ac, tirox;
    if (ac % 10 == 0) {
        switch (ch) {
        case KEY_ENTER:
            ac = 0;
            tirox = bar2x + 1;
            break;
        case ERR:
            break;
        }
    }
    ac++;
}

void atualiza_tiros_nave() {
    //Atualiza as coords dos tiros percorrendo o vetor de tiros
}


void damage_nave() {
    //Se y e x do tiro do alien for igual ao da nave:
    healthbar--;
    //else return;
}