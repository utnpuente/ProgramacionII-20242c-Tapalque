#include <iostream>
#include "PrincipalMenu.h"
using namespace std;

PrincipalMenu::PrincipalMenu()
{

}

void PrincipalMenu::mostrar()
{
    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - ARTICULOS" << endl;
        cout << "2 - VENTAS" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> _opcion;

        opciones();

    }
    while (!_salir);
}

void PrincipalMenu::opciones()
{

    switch(_opcion)
    {
    case 1:
        _articuloMenu.mostrar();
        break;
    case 2:
        _ventaMenu.mostrar();
        break;
    case 0:
        system("cls");
        cout << "¿Seguro quiere salir?";
        cin >> _salir;
    }

}
