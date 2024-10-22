#pragma once
#include <string>

class Fecha
{
private:
    int _dia;
    int _mes;
    int _anio;

public:
    /// constructores
    Fecha();
    Fecha(int dia, int mes, int anio);

    /// Getters & setters


    /// metodos
    void establecerFechaDeSistema();
    std::string toString();

private:
    bool esBisiesto();
};

