#include <iostream>
#include "venta.h"
#include "fecha.h"
using namespace std;

void mostrarVenta(Venta &venta)
{
    mostrarFecha(venta.fecha);
    cout << "N�mero de venta: " << venta.nro << endl;
    cout << "C�digo de Art�culo: " << venta.codArt << endl;
    cout << "Cantidad de vendida: " << venta.cantidad << endl;
    cout << "Monto de la venta: $" << venta.monto << endl;
}
