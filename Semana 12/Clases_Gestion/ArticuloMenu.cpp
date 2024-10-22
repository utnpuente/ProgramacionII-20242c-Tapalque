#include <iostream>
using namespace std;
#include "ArticuloMenu.h"

ArticuloMenu::ArticuloMenu()
{

}

void ArticuloMenu::mostrar()
{
    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - CARGAR ARTICULOS" << endl;
        cout << "2 - VER LISTADO DE ARTICULOS" << endl;
        cout << "3 - BUSCAR ARTICULO" << endl;
        cout << "4 - MODIFICAR PRECIO" << endl;
        cout << "5 - CANTIDAD DE REGISTROS" << endl;
        cout << "0 - VOLVER" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> _opcion;

        opciones();

    }
    while (!_salir);
}

void ArticuloMenu::opciones()
{

    switch (_opcion)
    {
    case 1:
//        opcionCargarArticulos();
        cout << "Opcion Cargar Articulo" << endl;
        system("pause > nul");
        break;
    case 2:
//        opcionListarArticulos();
        cout << "Opcion Listar Articulo" << endl;
        system("pause > nul");
        break;
    case 3:
//        opcionBuscarArticulos();
        cout << "Opcion Buscar Articulo" << endl;
        system("pause > nul");
        break;
    case 4:
//        opcionModificarArticulos();
        cout << "Opcion Modificar Articulo" << endl;
        system("pause > nul");
        break;
    case 5:
//        opcionCantidadArticulos();
        cout << "Opcion cantidad Articulo" << endl;
        system("pause > nul");
        break;
    case 0:
        _salir = true;
        break;
    }
}
