#include "Spaceship.h"

Nave::Nave() : navex(60), navey(25), navedirectionx(1) {}

bool Nave::check_tiros()
{
    return tiros.empty();
}

vector<coord> Nave::get_tiros()
{
    return tiros;
}

coord Nave::get_tiro(int n)
{
    return tiros.at(n);
}

void Nave::draw_nave()
{
    mvprintw(navey, navex + 2, "^");
    mvprintw(navey + 1, navex + 1, "0");
    mvprintw(navey + 1, navex + 2, "0");
    mvprintw(navey + 1, navex + 3, "0");
    mvprintw(navey + 2, navex, "0");
    mvprintw(navey + 2, navex + 1, "0");
    mvprintw(navey + 2, navex + 2, "0");
    mvprintw(navey + 2, navex + 3, "0");
    mvprintw(navey + 2, navex + 4, "0");
}

void Nave::move_nave(int ch)
{
    switch (ch) {
    case KEY_LEFT:  // user pressed up arrow key
        navedirectionx = -1;
        navex += navedirectionx;

        break;
    case KEY_RIGHT:  // user pressed up arrow key
        navedirectionx = 1;
        navex += navedirectionx;

        break;
    case ERR:
        navedirectionx = 0;
        navex += navedirectionx;
        break;
    }
    if (navex + 3 >= 120 || navex <= 0) {
        navedirectionx *= -1;
        navex += navedirectionx;
    }
    else {
        navex += navedirectionx;
    }


}

void Nave::manda_tiros_nave(int ch)
{
    switch (ch) {
    case KEY_UP:
        coord c0 = coord{ navey, navex + 2 };
        tiros.push_back(c0);
        for (int i = 0; i < tiros.size(); i++) {

            tiros.at(i).x--;
            break;
        }
    }
}

void Nave::atualiza_tiros_nave()
{
    for (int i = 0; i < tiros.size(); i++) {

        tiros.at(i).x -= 1;
    }

    for (int c = 0; c < tiros.size(); c++) {

        if (tiros.at(c).x == 5)
        {
            tiros.erase(tiros.begin() + c);
        }
    }

    if (!tiros.empty()) {
        for (int j = 0; j < tiros.size(); j++) {
            mvprintw(tiros.at(j).x, tiros.at(j).y, "o");
        }
    }
    //Atualiza as coords dos tiros percorrendo o vetor de tiros
}

