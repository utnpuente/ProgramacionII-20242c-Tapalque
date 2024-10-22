#include "Empleado.h"
#include <string>

/// Derivada (de Empleado)
class PorHora : public Empleado
{
private:
    float _valorHora;
    int _cantHoras;

public:
    PorHora(int legajo, std::string nombre, std::string apellido, std::string mail, float valorHora);

//    std::string toString();

};

