#pragma once
#include "fecha.h"

struct Venta
{
    Fecha fecha;
    int nro;
    int codArt;
    int cantidad;
    float monto;
};

void mostrarVenta(Venta &venta);
