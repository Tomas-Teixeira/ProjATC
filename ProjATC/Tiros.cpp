#include <vector>
#include"Functions.cpp"
//Ficheiro temporario para as fun��es do tiro

std::vector <Coords> shot; // Cria o vetor tiros

//no loop principal do jogo verificar se a tecla enter � primida e chamar a fun��o

void createShot()
{
	int y_bullet;
	mvprintw(y_bullet, SpaceshipCord.x + 3, "*");

	y_bullet += 1;

	if (y_bullet == 15);
	{
		mvprintw(x + 20, y + 20, "g");
	}
}