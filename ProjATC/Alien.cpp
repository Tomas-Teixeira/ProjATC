#include "Alien.h"
#include <Windows.h>
using namespace std;

Alien::Alien(int x, int y) : aliendirection(1), alienx(x), alieny(y) {

}

int Alien::get_aly()
{
    return alieny;
}

void Alien::draw_alien()
{
    mvprintw(alienx, alieny, "V");
}

int Alien::move_alien(int acc)
{
    if (acc % 2 == 0) {
        if (alieny >= 84 || alieny < 41) {
            aliendirection *= -1;

            alieny += aliendirection;


        }
        else {
            alieny += aliendirection;
        }

    }
    if (acc % 500 == 0) {
        alienx += 5;
    }
    if (alienx >= 25) {
        Sleep(200);
        return 0;
    }
    else {
        return 1;
    }
}

