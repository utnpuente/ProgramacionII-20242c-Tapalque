#include <iostream>
#include "menu.h"
#include "archivoArticulo.h"
#include "articulo.h"
using namespace std;

void mostrarMenu()
{

    int opcion;
    bool salir;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - CARGAR ARTICULOS" << endl;
        cout << "2 - VER LISTADO DE ARTICULOS" << endl;
        cout << "3 - BUSCAR ARTICULO" << endl;
        cout << "4 - MODIFICAR PRECIO" << endl;
        cout << "5 - CANTIDAD DE REGISTROS" << endl;
        cout << "0 - SALIR" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        salir = opcionMenu(opcion);

    }
    while (!salir);
}

bool opcionMenu(int opcion)
{
    bool salir = false;

    switch (opcion)
    {
    case 1:
        opcionCargarArticulos();
        break;
    case 2:
        opcionListarArticulos();
        break;
    case 3:
        opcionBuscarArticulos();
        break;
    case 4:
        opcionModificarArticulos();
        break;
    case 5:
        opcionCantidadArticulos();
        break;
    case 0:
        system("cls");
        cout << "¨Seguro quiere salir? ";
        cin >> salir;
        break;
    default:
        break;
    }

    return salir;
}


void opcionCantidadArticulos()
{
    system("cls");

    cout << "Cantidad de registros: " << cantidadArticulos() << endl;

    system("pause");
}

void opcionCargarArticulos()
{
    system("cls");

    Articulo art = cargarArticulo();
    bool pudoGuardar = guardarArticulo(art);

    if(pudoGuardar)
    {
        cout << "El registro se guardó existosamente" << endl;
    }
    else
    {
        cout << "El registro no se pudo guardar" << endl;
    }

    system("pause");
}

void opcionListarArticulos()
{
    system("cls");

    int cant = cantidadArticulos();

    for(int i = 0; i < cant; i++)
    {
        Articulo art = leerArticulo(i);

        mostrarArticulo(art);

        cout << endl;
    }

    system("pause");
}

void opcionBuscarArticulos()
{
    system("cls");

    int cod;

    cout << "Ingrese el código a buscar: ";
    cin >> cod;

    int indice = buscarIndiceArticulo(cod);
    Articulo aux = leerArticulo(indice);

    mostrarArticulo(aux);

    system("pause");
}

void opcionModificarArticulos()
{
    system("cls");

    int cod;

    cout << "Ingrese el código a buscar: ";
    cin >> cod;

    int indice = buscarIndiceArticulo(cod);
    Articulo aux = leerArticulo(indice);

    aux.precio = 1234;

    bool pudoModificar = modificarArticulo(aux, indice);

    if(pudoModificar)
    {
        cout << "El registro se ha modficado" << endl;
    }
    else
    {
        cout << "El registro no se ha modficado" << endl;
    }

    system("pause");
}
