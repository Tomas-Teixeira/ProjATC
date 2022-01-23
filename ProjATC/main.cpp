#include "Functions.cpp"

using namespace std;

int main()
{
    int exit = 1;
    int ch, h, w;
    int acc = 1;
    int bar1x = 60, bar1y = 7, bar1directionx = 1;
    int bar2x = 60, bar2y = 26, bar2directionx = 1;
    Nave player = Nave();
    vector<coord> aux;
    vector<Alien> aliens;
    vector<Obstacle> obstaculos;
    Obstacle ob0 = Obstacle(19, 42); obstaculos.push_back(ob0);
    Obstacle ob1 = Obstacle(19, 47); obstaculos.push_back(ob1);
    Obstacle ob2 = Obstacle(19, 52); obstaculos.push_back(ob2);
    Obstacle ob3 = Obstacle(19, 57); obstaculos.push_back(ob3);
    Obstacle ob4 = Obstacle(19, 62); obstaculos.push_back(ob4);
    Obstacle ob5 = Obstacle(19, 67); obstaculos.push_back(ob5);
    Obstacle ob6 = Obstacle(19, 72); obstaculos.push_back(ob6);
    Obstacle ob7 = Obstacle(19, 77); obstaculos.push_back(ob7);
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

    while (exit == 1) {
        nodelay(stdscr, TRUE);
        keypad(stdscr, TRUE);
        ch = getch();
        exit = hailmary(aliens);
        if (exit == 3) { Sleep(400); break; }
        //aux = impacto(player, aliens);
        obstaculos = check_collision_obstacle(player, obstaculos);
        aliens = check_collision_alien(player, aliens);

        //player.tiros_restore(aux);
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



