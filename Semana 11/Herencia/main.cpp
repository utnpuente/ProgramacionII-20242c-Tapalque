#include <iostream>
#include "Asalariado.h"
#include "PorHora.h"
#include "Empleado.h"
using namespace std;

int main()
{
    Asalariado a1(1, "Pedro", "Perez", "pedro@mail.com", 500000);
    PorHora e1(2, "Raul", "Lopez", "raul@mail.com", 15000);
    cout<< a1.toString() << endl;
    cout << endl;
    cout << e1.toString() << endl;



//    Empleado empleados[2];
//    empleados[0] = a1;
//    empleados[1] = e1;
//
//    cout<< empleados[0].toString() << endl;
//    cout << endl;
//    cout << empleados[1].toString() << endl;

    return 0;
}
