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

void drawBorder()
{
    char oldalchar;
    oldalchar = (char)219;

    for (int i = 0; i < maxwidth - 1; i++)
    {
        move(0, i);
        addch(oldalchar);
    }

    for (int i = 0; i < maxheight - 1; i++)
    {
        move(i, 0);
        addch(oldalchar);
    }

    for (int i = 0; i < maxwidth - 1; i++)
    {
        move(maxheight - 2, i);
        addch(oldalchar);
    }

    for (int i = 0; i < maxheight - 1; i++)
    {
        move(i, maxwidth - 2);
        addch(oldalchar);
    }
}

void deleteWindow()
{
	nodelay(stdscr, false);
	getch();
	endwin();
}