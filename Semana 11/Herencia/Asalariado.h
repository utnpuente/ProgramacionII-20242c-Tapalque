#pragma once
#include "Empleado.h"
#include <string>


/// Derivada (de Empleado)
class Asalariado : public Empleado
{
private:
    float _salario;
public:
    /// CTO
    Asalariado(int legajo, std::string nombre, std::string apellido, std::string mail, float salario);

    /// Metodos
    std::string toString();
};

