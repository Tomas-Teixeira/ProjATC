#include "Functions.cpp"

using namespace std;

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


int main()
{
    int exit = 1;
    int ch, h, w;
    int acc = 0;
    int bar1x = 60, bar1y = 7, bar1directionx = 1;
    int bar2x = 60, bar2y = 26, bar2directionx = 1;
    Nave player = Nave();
    vector<Alien> aliens;
    vector<Obstacle> obstaculos;
    Obstacle ob0 = Obstacle(20, 42); obstaculos.push_back(ob0);
    Obstacle ob1 = Obstacle(20, 47); obstaculos.push_back(ob1);
    Obstacle ob2 = Obstacle(20, 52); obstaculos.push_back(ob2);
    Obstacle ob3 = Obstacle(20, 57); obstaculos.push_back(ob3);
    Obstacle ob4 = Obstacle(20, 62); obstaculos.push_back(ob4);
    Obstacle ob5 = Obstacle(20, 67); obstaculos.push_back(ob5);
    Obstacle ob6 = Obstacle(20, 72); obstaculos.push_back(ob6);
    Obstacle ob7 = Obstacle(20, 77); obstaculos.push_back(ob7);
    Alien a0 = Alien(7, 41); aliens.push_back(a0);
    Alien a1 = Alien(7, 46); aliens.push_back(a1);
    Alien a2 = Alien(7, 51); aliens.push_back(a2);
    Alien a3 = Alien(7, 56); aliens.push_back(a3);
    Alien a4 = Alien(7, 61); aliens.push_back(a4);
 

    initscr();
    noecho();
    curs_set(FALSE);

    // Global var `stdscr` is created by the call to `initscr()`
    getmaxyx(stdscr, h, w);

    while (exit != 0) {
        nodelay(stdscr, TRUE);
        keypad(stdscr, TRUE);
        ch = getch();
        player.move_nave(ch);
        player.manda_tiros_nave(ch);
        for (int m = 0; m < aliens.size(); m++) {
            exit = aliens.at(m).move_alien(acc);
        }
        if (acc == 500)
        {
            Alien a5 = Alien(7, aliens.at(0).get_aly()); aliens.push_back(a5);
            Alien a6 = Alien(7, aliens.at(1).get_aly()); aliens.push_back(a6);
            Alien a7 = Alien(7, aliens.at(2).get_aly()); aliens.push_back(a7);
            Alien a8 = Alien(7, aliens.at(3).get_aly()); aliens.push_back(a8);
            Alien a9 = Alien(7, aliens.at(4).get_aly()); aliens.push_back(a9);
        }
        clear();
        //drawBorder(h, w);

        for (int n = 0; n < aliens.size(); n++) {
            aliens.at(n).draw_alien();
        }
        for (int n = 0; n < obstaculos.size(); n++) {
            obstaculos.at(n).draw();
        }
        player.draw_nave();
        player.atualiza_tiros_nave();
        //atualiza_tiros_alien(acc);
        refresh();
        Sleep(1);

        acc++;
    }


    endwin();
}


/*void check_collision(Nave a, Alien b) {
    if (!a.check_tiros()) {

        for (int o = b.getaliens().size() - 1; o >= 0; o--) {
            for (int p = 0; p < a.get_tiros().size(); p++) {
                if ((b.getaliens().at(o).x) == ((a.get_tiros().at(p).x) + 1) && (b.getaliens().at(o).y) == (a.get_tiros().at(p).y)) {
                    int z = 0;
                    while ((z + o) < b.getaliens().size() - 1) {
                        b.getaliens().at(o + z) = b.getaliens().at(o + z + 1);
                        z++;
                    }
                    b.getaliens().pop_back();
                    a.get_tiros().erase(a.get_tiros().begin() + p);
                }


            }

        }
    }
}*/