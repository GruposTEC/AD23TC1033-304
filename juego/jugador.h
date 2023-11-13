#ifndef _JUGADOR_H_
#define _JUGADOR_H_

#include <string>
using std::string;

class Jugador
{
    private:
    string color;
    int posicion;

    public:
    void set_color(string c);
    void set_posicion(int p);
    int get_posicion();
    string get_color();
    
};

#endif