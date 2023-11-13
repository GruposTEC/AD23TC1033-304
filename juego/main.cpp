#include <iostream>
#include "dado.h"

using std::cout;
using std::endl;

int main()
{
    Dado mi_dado;
    mi_dado.set_caras(6);
    //cout << mi_dado.caras << endl;
    cout << "Numero de caras " << mi_dado.get_caras() << endl;
    for (int i = 0 ; i < 5; i++)
    {
         cout << mi_dado.girar( ) << endl;
    }
   

}