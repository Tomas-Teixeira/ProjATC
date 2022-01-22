#include "Coordenadas.cpp"
#include <curses.h>
using namespace std;

class Alien {
protected:
    int alienx, alieny, aliendirection;

public:
    Alien(int, int);
    int get_aly();
    void draw_alien();
    int move_alien(int acc);


    /*
    void manda_tiros_alien(int acc) {
        if (acc % 50 == 0) {
            coord c0 = coord{ alieny, alienx + 2 };
            tirosalien.push_back(c0);
            for (int i = 0; i < tirosalien.size(); i++) {

                tirosalien.at(i).x++;
            }
        }
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

        else return;
    }*/
};
