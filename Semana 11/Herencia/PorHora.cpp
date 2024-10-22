#include <iostream>
#include "Empleado.h"
#include "PorHora.h"
#include <string>

PorHora::PorHora(int legajo, std::string nombre, std::string apellido, std::string mail, float valorHora)
: Empleado(legajo, nombre, apellido, mail)
{
    _valorHora = valorHora;
}

//std::string PorHora::toString()
//{
//    std::string datos = "";
//    datos = Empleado::toString();
//
//    datos = datos + "\nSalario: $" + std::to_string(_valorHora * 40);
//
//    return datos;
//}
