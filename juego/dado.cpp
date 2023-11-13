#include <iostream>
#include "dado.h"
#include "stdlib.h"

using std::cout;
using std::endl;

int Dado::girar()
{
    return 1 + (rand()%caras);
}

void Dado::set_caras(int n)
{
    caras = n;
}

int Dado::get_caras()
{
    return caras;
}



