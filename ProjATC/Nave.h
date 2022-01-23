#include "Coordenadas.cpp"




using namespace std;

#pragma once

class Nave {
protected:

    int navex, navey, navedirectionx;
    vector <coord> tiros;

public:
    Nave();
    bool check_tiros();
    vector <coord> get_tiros();
    coord get_tiro(int n);
    void draw_nave();
    void move_nave(int ch);
    void manda_tiros_nave(int ch);
    void atualiza_tiros_nave();
    void tiros_restore(vector<coord> a);
};

