#include <iostream>
#include "articulo.h"
using namespace std;

void mostrarArticulo(const Articulo &articulo)
{
    cout << "C�digo      : " << articulo.cod << endl;
    cout << "Descripci�n : " << articulo.descipcion << endl;
    cout << "Precio      : $" << articulo.precio << endl;
}

Articulo cargarArticulo()
{
    Articulo aux;

    cout << "Ingrese el c�digo: ";
    cin >> aux.cod;

    cin.ignore();

    cout << "Ingrese la descripci�n: ";
    cin.getline(aux.descipcion, CARACTERES_DESC);

    cout << "Ingrese el precio: $";
    cin >> aux.precio;

    return aux;
}
