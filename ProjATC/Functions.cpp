#include <curses.h>
void config()
{
	int maxwidth;
	int maxheight;
	initscr();
	nodelay(stdscr, true);
	keypad(stdscr, true);
	noecho();
	curs_set(0);
	getmaxyx(stdscr, maxheight, maxwidth);

}