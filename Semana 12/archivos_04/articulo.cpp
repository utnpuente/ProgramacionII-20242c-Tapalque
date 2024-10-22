#include <iostream>
#include "articulo.h"
using namespace std;

void mostrarArticulo(const Articulo &articulo)
{
    cout << "C�digo      : " << articulo.cod << endl;
    cout << "Descripci�n : " << articulo.descipcion << endl;
    cout << "Precio      : $" << articulo.precio << endl;
    cout << "Costo       : $" << articulo.costo << endl;
    cout << "Stock       : " << articulo.stock << endl;
    cout << "Estado      : " << (articulo.estado ? "Activo" : "No Activo" ) << endl;
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

    cout << "Ingrese el costo: $";
    cin >> aux.costo;

    cout << "Ingrese el stock: ";
    cin >> aux.stock;

    aux.estado = true;

    return aux;
}
