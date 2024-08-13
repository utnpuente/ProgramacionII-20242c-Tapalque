/*
    Una empresa que fabricar 20 art�culos tiene la siguiente informaci�n para
    cada uno de ellos:

        - Cod de Art (4 N�meros no correlativos)
        - Precio Unitario

    Este Lote no se encuentra ordenado.

    Cuenta por otro lado con un lote de registros:

        - Nro cliente (1 al 300)
        - Cod Art (4 digitos no correaltivos)
        - Mes (1 al 12)
        - Dia (1 al 31)
        - Cantidad vendida

    Puede haber m�s de un registro para el mismo art�culo.
    El Lote finaliza con un n�mero de cliente igual a cero.

    - Se necesita un listado con el siguiente formato:

		codigo articulo - cantidad total vendida

*/


#include <iostream>
using namespace std;

int buscarIndiceArticulo(int cods[], int tam, int cod);

int main()
{
    setlocale(LC_ALL, "spanish");

    // LOTE DE CARGA
    const int ARTICULOS = 20;

    int     codArts[ARTICULOS];
    float   precioArts[ARTICULOS];

    for(int i = 0; i < ARTICULOS; i++)
    {
        cin >> codArts[i];
        cin >> precioArts[i];
    }

    // LOTE DE PROCESO
    int nroCliente;
    int codArt;
    int mes;
    int dia;
    int cant;
    int indiceArticulo;

    int cantArtsVendidos[ARTICULOS] {};

    cout << "Ingrese el n�mero de cliente: ";
    cin >> nroCliente;

    while(nroCliente != 0)
    {
        cout << "Ingrese el c�digo del art�culo: ";
        cin >> codArt;

        cout << "Ingrese el mes (1-12): ";
        cin >> mes;

        cout << "Ingrese el d�a (1-31): ";
        cin >> dia;

        cout << "Ingrese la cantidad: ";
        cin >> cant;

        indiceArticulo = buscarIndiceArticulo(codArts, ARTICULOS, codArt);

        if(indiceArticulo == -1)
        {
            cout << "------------------------------" << endl;
            cout << "Ingrese el n�mero de cliente: ";
            cin >> nroCliente;
            continue;
        }

        cantArtsVendidos[indiceArticulo]+=cant;

        cout << "El total es " << cant * precioArts[indiceArticulo] << endl;

        cout << "------------------------------" << endl;
        cout << "Ingrese el n�mero de cliente: ";
        cin >> nroCliente;
    }

    return 0;
}

int buscarIndiceArticulo(int cods[], int tam, int cod)
{
    for(int i = 0; i < cantidad; i++)
    {
        if(cods[i] == cod)
        {
            return i;
        }
    }

    return -1;
}
