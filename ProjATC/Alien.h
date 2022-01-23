#include "Coordenadas.cpp"
#include <curses.h>
using namespace std;

class Alien {
protected:

    vector<coord> tirosalien;
public:
    int alienx, alieny, aliendirection;
    Alien(int, int);

    int get_aly() {
        return alieny;
    }

    void draw_alien() {
        mvprintw(alienx, alieny, "V");
        mvprintw(alienx, alieny + 1, "V");
        mvprintw(alienx, alieny + 2, "V");
    }



    void move_alien(int acc) {
        if (acc % 2 == 0) {
            if (alieny >= 84 || alieny < 41) {
                aliendirection *= -1;

                alieny += aliendirection;


            }
            else {
                alieny += aliendirection;
            }

        }
        if (acc % 100 == 0) {
            alienx += 3;
        }

    }


    int game_over() {
        if (alienx > 24) {
            return 2;
        }
        else return 1;
    }

    void manda_tiros_alien(int acc) {

        coord c0 = coord{ alieny, alienx + 2 };
        tirosalien.push_back(c0);

    }

    void atualiza_tiros_alien(int acc) {
        if (acc % 10 == 0) {
            for (int i = 0; i < tirosalien.size(); i++) {

                tirosalien.at(i).x += 1;
            }

            for (int c = 0; c < tirosalien.size(); c++) {

                if (tirosalien.at(c).x == 30)
                {
                    tirosalien.erase(tirosalien.begin() + c);
                }
            }

        }
        if (!tirosalien.empty()) {
            for (int j = 0; j < tirosalien.size(); j++) {
                mvprintw(tirosalien.at(j).x, tirosalien.at(j).y, "o");
            }
        }
    }

    void damage_alien() {

        //else return;
    }
};

Alien::Alien(int x, int y) : aliendirection(1), alienx(x), alieny(y) {

}