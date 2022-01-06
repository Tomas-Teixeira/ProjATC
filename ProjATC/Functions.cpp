#include <curses.h>

int maxwidth;
int maxheight;

void createWindow()
{
    initscr();
    nodelay(stdscr, true);
    keypad(stdscr, true);
    noecho();
    curs_set(0);
    getmaxyx(stdscr, maxheight, maxwidth);

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

void deleteWindow()
{
    nodelay(stdscr, false);
    getch();
    endwin();
}
