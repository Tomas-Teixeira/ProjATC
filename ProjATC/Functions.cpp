#include <curses.h>
#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <vector>
#include "Nave.h"
#include "Alien.h"
#include "Obstacle.h"


using namespace std;

struct coord //Struct que guarda coordenadas de todos os objetos do jogo
{
    int x, y;
};


vector<coord> impacto(Nave, vector<Alien>);
vector<Alien> check_collision_alien(Nave, vector<Alien>);
vector<Obstacle> check_collision_obstacle(Nave, vector<Obstacle>);
int hailmary(vector<Alien>);

void menu_inicial() {
    mvprintw(15, 50, "Press key to start");
    refresh();
    system("pause");
}

void drawBorder(int h, int w)
{
    for (int i = 7; i < h; i++)
    {
        mvprintw(i, 85, "W|");
    }

    for (int i = 7; i < h; i++)
    {
        mvprintw(i, 38, "W|");
    }

    for (int i = 38; i < w - 34; i++)
    {
        mvprintw(29, i, "*");
    }

    for (int i = 38; i < w - 34; i++)
    {
        mvprintw(6, i, "*");
    }


}

int hailmary(vector<Alien> a) {
    if (a.empty()) {
        return 3;
    }
    else return 1;
}

vector<Alien> check_collision_alien(Nave a, vector<Alien> b) {
    if (!a.check_tiros()) {
        vector<Alien> alienaux;

        for (int o = b.size() - 1; o >= 0; o--) {
            for (int p = 0; p < a.get_tiros().size(); p++) {
                if ((b.at(o).alienx) == ((a.get_tiros().at(p).x)) && (b.at(o).alieny) == (a.get_tiros().at(p).y) || (b.at(o).alienx) == ((a.get_tiros().at(p).x)) && ((b.at(o).alieny) + 1) == (a.get_tiros().at(p).y) || (b.at(o).alienx) == ((a.get_tiros().at(p).x)) && ((b.at(o).alieny) + 2) == (a.get_tiros().at(p).y)) {

                }
                else
                {

                    alienaux.push_back(b.at(o));
                }


            }
        }

        return alienaux;
    }
    else return b;
}

vector<Obstacle> check_collision_obstacle(Nave a, vector<Obstacle> b) {
    if (!a.check_tiros()) {
        vector<Obstacle> obsaux;

        for (int j = 0; j < b.size(); j++) {
            for (int k = 0; k < a.get_tiros().size(); k++) {
                if ((b.at(j).gety()) == ((a.get_tiros().at(k).x)) && ((b.at(j).getx()) == (a.get_tiros().at(k).y))) {

                }
                else
                {
                    obsaux.push_back(b.at(j));
                }


            }
        }

        return obsaux;
    }
    else return b;
}

vector<coord> impacto(Nave a, vector<Alien> b) {
    if (!a.check_tiros()) {

        vector<coord> tirosaux;
        for (int o = b.size() - 1; o >= 0; o--) {
            for (int p = 0; p < a.get_tiros().size(); p++) {
                if ((b.at(o).alienx) == ((a.get_tiros().at(p).x)) && (b.at(o).alieny) == (a.get_tiros().at(p).y) || (b.at(o).alienx) == ((a.get_tiros().at(p).x)) && ((b.at(o).alieny) + 1) == (a.get_tiros().at(p).y) || (b.at(o).alienx) == ((a.get_tiros().at(p).x)) && ((b.at(o).alieny) + 2) == (a.get_tiros().at(p).y)) {

                }
                else
                {
                    //tirosaux.push_back(a.get_tiros().at(p));

                }


            }
        }

        return tirosaux;
    }
    else return a.get_tiros();
}

void randalien(int acc, vector<Alien> a) {
    if (acc % 50 == 0) {
        int r = rand() % (a.size());
        a.at(r).manda_tiros_alien(acc);
    }
}





