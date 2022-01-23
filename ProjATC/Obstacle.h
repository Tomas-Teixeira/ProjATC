

using namespace std;

struct coord //Struct que guarda coordenadas de todos os objetos do jogo
{
    int x, y;
};


class Obstacle {
protected:
    int x, y;
public:
    Obstacle(int, int);
    void draw() {
        mvprintw(y, x, "_");
    }

    int getx() {
        return x;
    }

    int gety() {
        return y;
    }
};

Obstacle::Obstacle(int a, int b) {
    y = a;
    x = b;
}


