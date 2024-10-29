#pragma once
#include <string>

class Fecha
{
private:
    int _dia;
    int _mes;
    int _anio;

public:
    /// Constructor
    Fecha();
    Fecha(int dia, int mes, int anio);

    /// Getters
    int getDia();
    int getMes();
    int getAnio();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    /// Metodos
    void establecerFechaDeSistema();
    std::string toString();

private:
    bool esBisiesto();
};


