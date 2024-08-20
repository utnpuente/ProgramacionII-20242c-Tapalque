/*
    Un negocio de venta de libros cuenta con los siguientes lotes de información:
    Un primer lote cuenta con los datos de los libros que este negocio vende. Cada
    registro contiene:

    - Código de Libro (4 números no correlativos)
    - Tema (1 a 20)
    - Precio

    Este lote cuenta con un total de 200 registros y se ingresa desordenado.

    Un segundo lote con los datos de las ventas del último mes. Cada registro
    contiene los siguientes datos:

    - Código de Libro (4 números no correlativos)
    - Número de Vendedor (1 a 10)
    - Día de la venta (1 a 31)

    Puede haber varios registros para el mismo código de libro y para el mismo
    vendedor. Este lote finaliza con un registro con código de libro igual a cero.

    Se pide determinar e informar:
    a) Indicar por separado la recaudación total para cada uno de los 31 días.
    b) Cuál es el número de vendedor con mayor recaudación total por ventas.
    c) Cuál es el número de tema más vendido
*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCIONES
int buscarIndice(int vCods[], int tam, int cod);

int main()
{
    setlocale(LC_ALL, "spanish");

    // LIBROS
    const int LIBROS = 200;
    const int DIAS = 31;
    const int VENDEDORES = 10;
    const int TEMAS = 20;

    int libro_cod[LIBROS];
    int libro_tema[LIBROS];
    float libro_precio[LIBROS];

    for(int i = 0; i < LIBROS; i++)
    {
        cout << "Ingrese el código de libro: ";
        cin >> libro_cod[i];
        cout << "Ingrese el tema del libro (3 numeros no correlativos): ";
        cin >> libro_tema[i];
        cout << "Ingrese el precio del libro: ";
        cin >> libro_precio[i];
    }

    // VENDEDORES
    int vendedor_cod[VENDEDORES];
    string vendedor_nombre[VENDEDORES];
    string vendedor_apellido[VENDEDORES];

    for(int i = 0; i < VENDEDORES; i++)
    {
        cin >> vendedor_cod[i];
        cin.ignore();
        getline(cin, vendedor_nombre[i]);
        getline(cin, vendedor_apellido[i]);
    }

    // TEMAS
    int tema_cod[TEMAS];
    string tema_descripcion[TEMAS];

    // for

    // Lote de proceso
    int codLibro;
    int nroVendedor;
    int diaVenta;

    float recaudacionDias[DIAS] {};
    float recaudacionVendedores[VENDEDORES] {};
    int acumuladorTemas[TEMAS]{};

    // indices
    int indiceLibro;
    int indiceVendedor;

    cout << "--------------------------------------------" << endl;
    cout << endl << "LOTE DE PROCESO" << endl;

    cout << "Ingrese un código de libro: ";
    cin >> codLibro;

    while(codLibro != 0)
    {
        cout << "Ingrese el número del vendedor (3 número no correlativos): ";
        cin >> nroVendedor;
        cout << "Ingrese el día de la venta (1-31): ";
        cin >> diaVenta;

        // INDICE
        //Buscar indice del libro
        indiceLibro = buscarIndice(libro_cod, LIBROS, codLibro);
        indiceVendedor = buscarIndice(vendedor_cod, VENDEDORES, nroVendedor);

        // PROCESO
        // a) Indicar por separado la recaudación total para cada uno de los 31 días.
        recaudacionDias[ diaVenta - 1] += libro_precio[indiceLibro];

        // b) Cuál es el número de vendedor con mayor recaudación total por ventas.
        recaudacionVendedores[ indiceVendedor ] += libro_precio[indiceLibro];

        // c) Cuál es el número de tema más vendido
        int indiceTema = libro_tema[indiceLibro]; // codigo de tema 378

        acumuladorTemas[ indiceTema - 1 ]++;

        cout << "----------------------------" << endl;
        cout << "Ingrese un código de libro: ";
        cin >> codLibro;
    }

    // RESULTADOS
    cout << fixed << setprecision(2);

    // PUNTO A
    cout << "DIA\t\tRECAUDACION"<<endl;
    for(int i = 0; i < DIAS; i++)
    {
        cout << i + 1 << "\t\t$" << recaudacionDias[i] << endl;
    }

    cout << "------------" << endl;

    // PUNTO B
    cout << "NOMBRE Y APELLIDO\t\t\tRECAUDACION"<<endl;
    for(int i = 0; i < VENDEDORES; i++)
    {
        cout << vendedor_nombre[i] << " " vendedor_apellido[i] << "\t\t\t$" << recaudacionVendedores[i] << endl;
    }

    cout << "------------" << endl;

    // PUNTO C
    cout << "TEMA\t\tCANTIDAD"<<endl;
    for(int i = 0; i < TEMAS; i++)
    {
        cout << i + 1 << "\t\t" << acumuladorTemas[i] << endl;
    }

    return 0;

}

// FUNCIONES
int buscarIndice(int vCods[], int tam, int cod)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(vCods[i] == cod)
        {
            indice = i;
            break;
        }
    }

    return indice;
}
