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
    cout << "Código     : " << art.cod << endl;
    cout << "Descripción: " << art.descripcion << endl;
    cout << "Precio     : $" << art.precio << endl;
}
