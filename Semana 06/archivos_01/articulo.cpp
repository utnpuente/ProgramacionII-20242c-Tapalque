#include <iostream>
#include "articulo.h"
using namespace std;

void cargarArticulos()
{

}

void listarArticulos()
{

}

void mostrarArticulo(const Articulo& art)
{
    cout << "C�digo     : " << art.cod << endl;
    cout << "Descripci�n: " << art.descripcion << endl;
    cout << "Precio     : $" << art.precio << endl;
}
