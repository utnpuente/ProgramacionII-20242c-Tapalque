#include <iostream>
#include "venta.h"
#include "fecha.h"
using namespace std;

void mostrarVenta(Venta &venta)
{
    mostrarFecha(venta.fecha);
    cout << "Número de venta: " << venta.nro << endl;
    cout << "Código de Artículo: " << venta.codArt << endl;
    cout << "Cantidad de vendida: " << venta.cantidad << endl;
    cout << "Monto de la venta: $" << venta.monto << endl;
}
