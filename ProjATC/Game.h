#pragma once

#include "Coordenadas.cpp"
#include "Nave.h"
#include "Alien.h"
#include "Obstacle.h"

#pragma comment(lib, "winmm.lib")

void tocaMusica()
{
    PlaySound(TEXT("music.wav"), NULL, SND_FILENAME | SND_ASYNC);
}

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

int randalien(int acc, vector<Alien> a) {
    if (acc % 100 == 0) {
        int r = rand() % (a.size());
        return r;
    }
    else  return 999;
}

void gameLoop()
{
    int rand;
    int exit = 1;
    int ch, h, w;
    int acc = 1;
    int bar1x = 60, bar1y = 7, bar1directionx = 1;
    int bar2x = 60, bar2y = 26, bar2directionx = 1;
    Nave player = Nave();
    vector<Alien> aux;
    vector<Obstacle> obsaux;
    vector<Alien> aliens;
    vector<Obstacle> obstaculos;

    //Criar todos os Obstaculos
    Obstacle ob0 = Obstacle(23, 40); obstaculos.push_back(ob0);
    Obstacle ob1 = Obstacle(23, 41); obstaculos.push_back(ob1);
    Obstacle ob2 = Obstacle(23, 42); obstaculos.push_back(ob2);
    Obstacle ob3 = Obstacle(23, 43); obstaculos.push_back(ob3);
    Obstacle ob4 = Obstacle(23, 44); obstaculos.push_back(ob4);

    Obstacle ob5 = Obstacle(23, 48); obstaculos.push_back(ob5);
    Obstacle ob6 = Obstacle(23, 49); obstaculos.push_back(ob6);
    Obstacle ob7 = Obstacle(23, 50); obstaculos.push_back(ob7);
    Obstacle ob8 = Obstacle(23, 51); obstaculos.push_back(ob8);
    Obstacle ob9 = Obstacle(23, 52); obstaculos.push_back(ob9);

    Obstacle ob10 = Obstacle(23, 56); obstaculos.push_back(ob10);
    Obstacle ob11 = Obstacle(23, 57); obstaculos.push_back(ob11);
    Obstacle ob12 = Obstacle(23, 58); obstaculos.push_back(ob12);
    Obstacle ob13 = Obstacle(23, 59); obstaculos.push_back(ob13);
    Obstacle ob14 = Obstacle(23, 60); obstaculos.push_back(ob14);

    Obstacle ob15 = Obstacle(23, 64); obstaculos.push_back(ob15);
    Obstacle ob16 = Obstacle(23, 65); obstaculos.push_back(ob16);
    Obstacle ob17 = Obstacle(23, 66); obstaculos.push_back(ob17);
    Obstacle ob18 = Obstacle(23, 67); obstaculos.push_back(ob18);
    Obstacle ob19 = Obstacle(23, 68); obstaculos.push_back(ob19);

    Obstacle ob20 = Obstacle(23, 72); obstaculos.push_back(ob20);
    Obstacle ob21 = Obstacle(23, 73); obstaculos.push_back(ob21);
    Obstacle ob22 = Obstacle(23, 74); obstaculos.push_back(ob22);
    Obstacle ob23 = Obstacle(23, 75); obstaculos.push_back(ob23);
    Obstacle ob24 = Obstacle(23, 76); obstaculos.push_back(ob24);

    Obstacle ob25 = Obstacle(23, 80); obstaculos.push_back(ob25);
    Obstacle ob26 = Obstacle(23, 81); obstaculos.push_back(ob26);
    Obstacle ob27 = Obstacle(23, 82); obstaculos.push_back(ob27);
    Obstacle ob28 = Obstacle(23, 83); obstaculos.push_back(ob28);
    Obstacle ob29 = Obstacle(23, 84); obstaculos.push_back(ob29);


    //Criar todos os aliens inimigos
    Alien a0 = Alien(7, 41); aliens.push_back(a0);
    Alien a1 = Alien(7, 46); aliens.push_back(a1);
    Alien a2 = Alien(7, 51); aliens.push_back(a2);
    Alien a3 = Alien(7, 56); aliens.push_back(a3);
    Alien a4 = Alien(7, 61); aliens.push_back(a4);
    Alien a5 = Alien(10, 41); aliens.push_back(a5);
    Alien a6 = Alien(10, 46); aliens.push_back(a6);
    Alien a7 = Alien(10, 51); aliens.push_back(a7);
    Alien a8 = Alien(10, 56); aliens.push_back(a8);
    Alien a9 = Alien(10, 61); aliens.push_back(a9);
    Alien a10 = Alien(13, 41); aliens.push_back(a10);
    Alien a11 = Alien(13, 46); aliens.push_back(a11);
    Alien a12 = Alien(13, 51); aliens.push_back(a12);
    Alien a13 = Alien(13, 56); aliens.push_back(a13);
    Alien a14 = Alien(13, 61); aliens.push_back(a14);
    initscr();
    getmaxyx(stdscr, h, w);

    noecho();
    curs_set(FALSE);
    menu_inicial();
    tocaMusica();

    while (exit == 1) {
        nodelay(stdscr, TRUE);
        keypad(stdscr, TRUE);
        ch = getch();
        exit = hailmary(aliens);
        if (exit == 3) { Sleep(400); break; }

        obsaux = check_collision_obstacle(player, obstaculos);
        aux = check_collision_alien(player, aliens);
        player.colisao_obstacle(obstaculos);
        player.colisao_alien(aliens);
        aliens = aux;
        obstaculos = obsaux;

        rand = randalien(acc, aliens);
        if (rand != 999) {
            aliens.at(rand).manda_tiros_alien();
        }
        player.move_nave(ch);
        player.manda_tiros_nave(ch);
        for (int m = aliens.size() - 1; m >= 0; m--) {
            exit = aliens.at(m).game_over();
            if (exit == 2) { Sleep(500); break; }

        }



        for (int m = 0; m < aliens.size(); m++) {
            aliens.at(m).move_alien(acc);
        }


        clear();
        drawBorder(h, w);

        for (int n = 0; n < aliens.size(); n++) {
            aliens.at(n).draw_alien();
        }
        for (int n = 0; n < obstaculos.size(); n++) {
            obstaculos.at(n).draw();
        }
        for (int m = 0; m < aliens.size(); m++) {
            aliens.at(m).atualiza_tiros_alien(acc);
        }
        player.draw_nave();
        player.atualiza_tiros_nave();
        //atualiza_tiros_alien(acc);
        refresh();
        Sleep(1);

        acc++;
    }

    clear();
    if (exit == 2) {
        mvprintw(15, 50, "GAME OVER");
    }
    if (exit == 3) {
        mvprintw(15, 50, "AGUEROOOOOOOO");
    }
    refresh();
    system("pause");
    endwin();
}