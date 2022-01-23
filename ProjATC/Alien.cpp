#include "Alien.h"

Alien::Alien(int x, int y) : aliendirection(1), alienx(x), alieny(y)
{
}

int Alien::get_aly() {
    return alieny;
}

vector <coord> Alien::get_tiros_alien()
{
    return tirosalien;
}

void Alien::draw_alien() {
    mvprintw(alienx, alieny, "/");
    mvprintw(alienx, alieny + 1, "-");
    mvprintw(alienx, alieny + 2, "\\");
    mvprintw(alienx + 1, alieny, "\\");
    mvprintw(alienx + 1, alieny + 1, "_");
    mvprintw(alienx + 1, alieny + 2, "/");
}

void Alien::move_alien(int acc) {
    if (acc % 2 == 0) {
        if (alieny >= 82 || alieny < 41) {
            aliendirection *= -1;
            alieny += aliendirection;
        }
        else {
            alieny += aliendirection;
        }

    }
    if (acc % 500 == 0) {
        alienx += 3;
    }

}

int Alien::game_over() {
    if (alienx > 24) {
        return 2;
    }
    else return 1;
}

void Alien::manda_tiros_alien() {

    coord c0 = coord{ alieny, alienx + 2 };
    tirosalien.push_back(c0);

}

void Alien::atualiza_tiros_alien(int acc) {
    if (acc % 10 == 0) {
        for (int i = 0; i < tirosalien.size(); i++) {

            tirosalien.at(i).y += 1;
        }

        for (int c = 0; c < tirosalien.size(); c++) {

            if (tirosalien.at(c).y == 30)
            {
                tirosalien.erase(tirosalien.begin() + c);
            }
        }

    }
    if (!tirosalien.empty()) {
        for (int j = 0; j < tirosalien.size(); j++) {
            mvprintw(tirosalien.at(j).y, tirosalien.at(j).x, "o");
        }
    }
}
