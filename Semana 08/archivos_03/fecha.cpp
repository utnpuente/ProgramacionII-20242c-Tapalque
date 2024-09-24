#include <iostream>
#include "fecha.h"
using namespace std;

Fecha cargarFecha()
{
    Fecha aux;

    cout << "Ingrese el día: ";
    cin >> aux.dia;

    cout << "Ingrese el mes: ";
    cin >> aux.mes;

    cout << "Ingrese el año: ";
    cin >> aux.anio;

    return aux;
}

void mostrarFecha(Fecha &fecha)
{
    cout << fecha.dia << "/" << fecha.mes << "/" << fecha.anio << endl;
}
