#include <iostream>
#include <string.h>
#include <cstdio>
#include "articulo.h"
#include "menu.h"
using namespace std;

int main()
{

//    Articulo art;
//    art.cod = 123;
//    art.precio = 1500;
//    strcpy(art.descripcion, "Manzana");

    // ESCRITURA

//    FILE* p;
//    p = fopen("articulo.dat", "ab");
//
//    if(p == NULL)
//    {
//        cout << "No se pudo abrir" << endl;
//        return 1;
//    }
//
//    fwrite(&art, sizeof(Articulo), 1, p);
//
//    fclose(p);

    Articulo artL;

    // Apertura
    FILE*p = fopen("articulo.dat", "rb");

    if(p == NULL)
    {
        cout << "No se pudo abrir";
        return 1;
    }

    // Leer
    while(fread(&artL, sizeof(Articulo), 1, p) != 0)
    {
        mostrarArticulo(artL);
        cout << endl;
    }

    // Cierre
    fclose(p);


    return 0;
}


////    mostrarMenu();
//
//    char a[6] = "Pedro"; // 'p', 'e', 'd', 'r', 'o', '\0'
//    char X = 'X';
//
//    //cin.getline(a, 6);
//
//    //cin >> a;
//
//    cout  << a << endl;
//   // cout << X << endl;
