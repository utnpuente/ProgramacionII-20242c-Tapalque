#include <iostream>
#include "VentaMenu.h"
using namespace std;

VentaMenu::VentaMenu()
{

}

void VentaMenu::mostrar()
{
    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - PROCESAR VENTA" << endl;
        cout << "2 - LISTAR VENTAS" << endl;
        cout << "0 - VOLVER" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> _opcion;

        opciones();
    }
    while (!_salir);

}


void VentaMenu::opciones()
{
    switch(_opcion)
    {
    case 1:
        cout << "Opcion Procesar Ventas" << endl;
        system("pause > nul");
//        opcionProcesarVenta();
        break;
    case 2:
//        opcionLeerVentas();
        cout << "Opcion Leer Ventas" << endl;
        system("pause > nul");
        break;
    case 0:
        _salir = true;
        break;
    }

}
