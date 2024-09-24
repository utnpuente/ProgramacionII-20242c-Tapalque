#include <iostream>
#include "menu.h"
#include "archivoArticulo.h"
#include "archivoVenta.h"
#include "articulo.h"
#include "venta.h"
#include "fecha.h"
using namespace std;

void mostrarMenu()
{
    int opcion;
    bool salir;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - ARTICULOS" << endl;
        cout << "2 - VENTAS" << endl;
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

    switch(opcion)
    {
    case 1:
        mostrarMenuArticulo();
        break;
    case 2:
        mostrarMenuVenta();
        break;
    case 0:
        system("cls");
        cout << "¿Seguro quiere salir?";
        cin >> salir;
    }

    return salir;
}

void mostrarMenuArticulo()
{

    int opcion;
    bool volver;

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
        cin >> opcion;

        volver = opcionMenuArticulo(opcion);

    }
    while (!volver);
}

bool opcionMenuArticulo(int opcion)
{
    bool volver = false;

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
        volver = true;
        break;
    }

    return volver;
}

void mostrarMenuVenta()
{
    int opcion;
    bool volver;

    do
    {
        system("cls");
        cout << "-----------------" << endl;
        cout << "1 - PROCESAR VENTA" << endl;
        cout << "2 - LISTAR VENTAS" << endl;
        cout << "0 - VOLVER" << endl;
        cout << "-----------------" << endl;
        cout << "OPCION: ";
        cin >> opcion;

        volver = opcionMenuVenta(opcion);

    }
    while (!volver);
}

bool opcionMenuVenta(int opcion)
{
    bool volver = false;

    switch(opcion)
    {
    case 1:
        opcionProcesarVenta();
        break;
    case 2:
        opcionLeerVentas();
        break;
    case 0:
        volver = true;
        break;
    }

    return volver;
}

//--------------------------------------------------
// OPCIONES ARTICULOS
//--------------------------------------------------

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

//--------------------------------------------------
// OPCIONES VENTAS
//--------------------------------------------------

void opcionProcesarVenta()
{
    system("cls");
    int codArt, cantidad;
    float montoTotal = 0;

    // Iniciamos objeto venta
    Venta auxVenta;

    auxVenta.nro = generadorNroArt();

    Fecha auxFecha = cargarFecha();
    auxVenta.fecha = auxFecha;

    cout << "Ingrese el código del artículo: ";
    cin >> codArt;

    while(codArt != 0)
    {
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        // buscar el artículo. Validar que exista
        int indice = buscarIndiceArticulo(codArt);
        Articulo aux = leerArticulo(indice);

        // consultamos precio
        float precio = aux.precio;

        // acumulo en monto total. Validar que la cantida exista
        float monto = cantidad * precio;

        montoTotal += monto;

        // Actualizar stock
        aux.stock -= cantidad;
        modificarArticulo(aux, indice);

        // Guardar la venta
        auxVenta.codArt = codArt;
        auxVenta.cantidad = cantidad;
        auxVenta.monto = monto;
        guardarVenta(auxVenta);

        cout << endl << "---------------------------------" << endl;
        cout << "Subtotal: $" << montoTotal << endl << endl;
        cout << "---------------------------------" << endl;
        cout << "Ingrese el cóidigo del artículo: " << endl;
        cin >> codArt;
    }

    // Mostrar total
        cout << endl << "---------------------------------" << endl;
        cout << "Monto total: $" << montoTotal << endl << endl;
        cout << "---------------------------------" << endl;

        system("pause > nul");

}

void opcionLeerVentas()
{
    system("cls");

    int cantidad = cantidadventas();

    for(int i = 0; i < cantidad; i++)
    {
        Venta aux = leerVenta(i);
        mostrarVenta(aux);
        cout << endl;
    }
    system("pause > nul");
}
