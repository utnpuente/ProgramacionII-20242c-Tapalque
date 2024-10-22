#include <iostream>
#include <string>
#include "Empleado.h"

Empleado::Empleado(){}
Empleado::Empleado(int legajo, std::string nombre, std::string apellido, std::string mail)
{
    _legajo = legajo;
    _nombre = nombre;
    _apellido = apellido;
    _mail = mail;
}

std::string Empleado::toString()
{
    return "Legajo: " + std::to_string(_legajo) + "\nNombre: " + _nombre + "\nApellido: " + _apellido + "\nMail: " + _mail;
}
