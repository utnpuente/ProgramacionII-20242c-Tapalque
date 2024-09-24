#include <iostream>
#include "archivoArticulo.h"
#include "articulo.h"

using namespace std;

// Funcion que retorna cantidad de registros
int cantidadArticulos()
{
    FILE*p;

    p = fopen("articulo.dat", "rb");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return -1;
    }

    fseek(p, 0,SEEK_END);

    int bytes = ftell(p);
    int cantReg = bytes / sizeof(Articulo);

    fclose(p);

    return cantReg;
}

// Funcion que guardar un registro en archivo
bool guardarArticulo(Articulo &art)
{

    FILE* p;

    p = fopen("articulo.dat", "ab");

    if(p == NULL)
    {
        cout << "No se pudo abrir el archivo" << endl;
        return false;
    }

    bool pudoEscribir = fwrite(&art, sizeof(Articulo), 1, p);

    fclose(p);

    return pudoEscribir;
}

// Funcion que retorna un registro a partir de un indice
Articulo leerArticulo(int indice)
{
    FILE* p;

    p = fopen("articulo.dat", "rb");

    if(p == NULL)
    {
        return {};
    }

    fseek(p, indice * sizeof(Articulo), SEEK_SET);

    Articulo aux;

    fread(&aux, sizeof(Articulo), 1, p);

    fclose(p);

    return aux;
}

//Funcion que retorne indice a partir de codigo
int buscarIndiceArticulo(int cod)
{
    int indice = - 1;

    int cant = cantidadArticulos();

    for(int i = 0; i < cant; i++)
    {
        Articulo art = leerArticulo(i);

        if(art.cod == cod)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

// Funcion que modifica registro
bool modificarArticulo(Articulo &art, int indice)
{
    FILE*p;
    p = fopen("articulo.dat", "rb+");

    if(p==NULL)
    {
        cout << "No se pudo abrir el archivo" <<endl;
        return false;
    }

    fseek(p, indice * sizeof(Articulo), SEEK_SET);

    bool pudoEscribir = fwrite(&art, sizeof(Articulo), 1, p);

    fclose(p);

    return pudoEscribir;
}


