#pragma once
#include <string>

/// Base
class Empleado
{
protected:
    int _legajo;
    std::string _nombre;
    std::string _apellido;
    std::string _mail;

public:
    Empleado();
    Empleado(int legajo, std::string nombre, std::string apellido, std::string mail);

    std::string toString();
};


