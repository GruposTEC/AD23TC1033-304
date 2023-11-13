#include <string>
#include "jugador.h"
using std::string;

void Jugador::set_color(string c)
{
    color = c;
}

void Jugador::set_posicion(int p)
{
    posicion = p;
}

int Jugador::get_posicion()
{
    return posicion;
}

string Jugador::get_color()
{
    return color;
}

