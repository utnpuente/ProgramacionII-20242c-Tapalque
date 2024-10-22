#include <iostream>
#include <string>
#include "Asalariado.h"
#include "Empleado.h"

Asalariado::Asalariado(int legajo, std::string nombre, std::string apellido, std::string mail, float salario)
: Empleado(legajo, nombre, apellido, mail)
{
    _salario = salario;
}

std::string Asalariado::toString()
{
    std::string datos = "";
//    datos = Empleado::toString();

//    datos = datos + "\nSalario: $" + std::to_string(_salario);
    datos = "Nombre: " + _nombre  + "\nSalario: $" + std::to_string(_salario);


    return datos;
}
