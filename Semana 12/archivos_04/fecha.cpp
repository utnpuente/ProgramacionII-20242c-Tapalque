#include <iostream>
#include "fecha.h"
using namespace std;

Fecha cargarFecha()
{
    Fecha aux;

    cout << "Ingrese el d�a: ";
    cin >> aux.dia;

    cout << "Ingrese el mes: ";
    cin >> aux.mes;

    cout << "Ingrese el a�o: ";
    cin >> aux.anio;

    return aux;
}

void mostrarFecha(Fecha &fecha)
{
    cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << endl;
}
