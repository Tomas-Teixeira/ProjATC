#include <curses.h>
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

#define DELAY 300000

void usleep(__int64 usec)
{
	HANDLE timer;
	LARGE_INTEGER ft;

	ft.QuadPart = -(10 * usec); // Convert to 100 nanosecond interval, negative value indicates relative time

	timer = CreateWaitableTimer(NULL, TRUE, NULL);
	SetWaitableTimer(timer, &ft, 0, NULL, NULL, 0);
	WaitForSingleObject(timer, INFINITE);
	CloseHandle(timer);
}

void Playmusic(int) //Recebe um Int para seleção da musica caso dê tempo
{
	PlaySound(TEXT("Selfcare.wav"), NULL, SND_FILENAME | SND_ASYNC);//Não vai funcionar por enquanto
}

void createWindow() //Cria janela do Jogo
{
	initscr();
	noecho();
	curs_set(FALSE);
}

void menu_inicial() { //Cria o menu inicial do jogo
	mvprintw(15, 50, "Press key to start");
	refresh();
	system("pause");
}

struct Coords //Struct que guarda coordenadas de todos os objetos do jogo
{
	int x, y;
};

Coords getWindowSize() //Função que dá return ao tamanho da janela windowSize.x ao x máximo e windowSize.y o y máximo
{
	Coords windowSize;
	int max_y = 0, max_x = 0;
	getmaxyx(stdscr, max_y, max_x);
	windowSize.x = max_x;
	windowSize.y = max_y;
	return windowSize;
}
