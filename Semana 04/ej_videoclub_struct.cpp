/*
Un local de Blockbuster dispone de los Registros de Alquileres de sus socios. Cada registro est� dado por los siguientes datos:

    Nro de Socio (1 a 1000)
    Nombre del Socio
    Nro. de Pel�cula (1 a 50)
    D�as de Alquiler
    D�a
    Mes

Este lote finaliza con un registro de Socio igual a cero.

Se dispone adem�s de un Cat�logo de las Pel�culas disponibles. Cada Registro consta de los siguientes datos:

    Nro. de Pel�cula (1 a 50)
    Categor�a ('E' Estreno, 'C', Cl�sica, 'I' Infantil, 'T' Terror)
    T�tulo
    Duraci�n
    A�o Lanzamiento
    Precio Alquiler

El Precio del Alquiler es por d�a.

Se pide resolver.

    a) Total recaudado por cada Categor�a de Pel�cula.
    b) Cantidad de pel�culas alquiladas por Socio.
    c) La Pel�cula que estuvo m�s d�as alquilada.
    d) Cantidad de Pel�culas alquiladas por Categor�a por cada socio
 */

#include <iostream>
using namespace std;

struct Categoria
{
    int cod;
    string descripcion;
    char letra;

};

struct Pelicula
{
    int numero;
    char categoria;
    string titulo;
    int duracion;
    int anio;
    float precio;
};

int indiceCategoria(char l);
int buscarIndice(Pelicula pelis[], int tam, int cod);

int main()
{
    setlocale(LC_ALL, "spanish");

    const int PELICULAS = 50;
    const int CATEGORIAS = 4;

//    int peliculas_nros[PELICULAS];
//    char peliculas_cat[PELICULAS];
//    string peliculas_titulo[PELICULAS];
//    int peliculas_duracion[PELICULAS];
//    int peliculas_anios[PELICULAS];
//    float peliculas_precio[PELICULAS];

    Pelicula peliculas[PELICULAS];

    for(int i = 0; i < PELICULAS; i++)
    {
        cin >> peliculas[i].numero;
        cin >> peliculas[i].categoria;
        cin.ignore();
        getline(cin, peliculas[i].titulo);
        cin >> peliculas[i].duracion;
        cin >> peliculas[i].anio;
        cin >> peliculas[i].precio;
        cout << "-----------------" << endl;
    }

    int nroSocio;
    string nombreSocio;
    int nroPelicula;
    int diasAlquiler;
    int dia;
    int mes;

    int indicePelicula;
    float recaudacionPelicula;
    char categoriaPelicula;
    int iCategoria;

    float recaudacionCategorias[CATEGORIAS] {};

    cout << "Ingrese el numero de socio: ";
    cin >> nroSocio;

    while (nroSocio != 0)
    {
        cin.ignore();
        cout << "Ingrese el nombre del socio: ";
        getline(cin, nombreSocio);
        cout << "Ingrese el numero de la pelicula: ";
        cin >> nroPelicula;
        cout << "Ingrese los dias de alquiler: ";
        cin >> diasAlquiler;
        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese el mes: ";
        cin >> mes;

        // PROCESO
        // a) Total recaudado por cada Categor�a de Pel�cula.

        // Buscar el indice de la pel�cula
        indicePelicula = buscarIndice(peliculas, PELICULAS, nroPelicula);

        // Buscar precio en el vector de peliculas precio
        recaudacionPelicula = diasAlquiler * peliculas[indicePelicula].precio;

        // Buscar categoria en el vector de peliculas categorias
        categoriaPelicula = peliculas[indicePelicula].categoria;

        // Transformar la categoria en un indice
        iCategoria = indiceCategoria(categoriaPelicula);

        // Acumular recaudaciones
        recaudacionCategorias[iCategoria] += recaudacionPelicula;


        cout << "------------" << endl;
        cout << "Ingrese el numero de socio: ";
        cin >> nroSocio;
    }

    // MOSTRAR PUNTO A
    char catLetras[4] = {'E', 'C', 'I', 'T'};

    cout << "CATEGORIA\t\tRECAUDACION" << endl;
    for(int i = 0; i < CATEGORIAS; i++)
    {
        cout << catLetras[i]<< "\t\t$" << recaudacionCategorias[i] << endl;
    }

    return 0;
}


int buscarIndice(Pelicula pelis[], int tam, int cod)
{
    int indice = -1;

    for(int i = 0; i < tam; i++)
    {
        if(pelis[i].numero == cod)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int indiceCategoria(char l)
{
    switch(l)
    {
    case 'E':
        return 0;
        break;
    case 'C':
        return 1;
        break;
    case 'I':
        return 2;
        break;
    case 'T':
        return 3;
        break;
    }

    return -1;
}
