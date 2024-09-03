#include <iostream>
using namespace std;

int main()
{
    int numero = 10;
    int* puntero;
    int& referencia = numero;

    puntero = &numero;

    cout << "El contenido de la variable numero es: " << numero << endl;
    cout << "La direccion de memoria de la variable numero es: " << &numero << endl;
    cout << "El contenido de la variable puntero es: " << puntero << endl;
    cout << "La direccion de memooria de la variable puntero: " << &puntero << endl;
    cout << "El contenido de la variable a la que apunta el puntero es: "<< *puntero <<endl;

    *puntero = 34;

    cout << "El contenido de la variable a la que apunta el puntero es: "<< *puntero <<endl;
    cout << "El contenido de la variable numero es: " << numero << endl;
    cout << "El valor de la variable referencia: " << referencia << endl;
    //cout << "La direccion de memoria de la variable referencia es: " << &referencia << endl;



    return 0;
}
