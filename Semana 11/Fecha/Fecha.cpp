#include <iostream>
#include <string>
#include <ctime>
#include "Fecha.h"

/// constructores
Fecha::Fecha()
{
    establecerFechaDeSistema();
}

Fecha::Fecha(int dia, int mes, int anio)
{
    _dia = dia;
    _mes = mes;
    _anio = anio;

    if(mes <= 0 || mes > 12 || dia <= 0 || anio > 9999)
    {
        establecerFechaDeSistema();
    }
    else
    {
        int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        /// validación de año bisiesto
        if(esBisiesto())
        {
            dias[1]++;
        }

        if(dia > dias[mes - 1])
        {
            establecerFechaDeSistema();
        }
    }
}

/// Getters & setters


/// metodos
void Fecha::establecerFechaDeSistema()
{
    struct tm timeinfo;

    time_t rawtime;

    time(&rawtime);

    timeinfo = *(localtime(&rawtime));

    _dia = timeinfo.tm_mday;
    _mes = timeinfo.tm_mon + 1;
    _anio = timeinfo.tm_year + 1900;
//    std::cout << "Hora: " << timeinfo.tm_hour << std::endl;
//    std::cout << "Hora: " << timeinfo.tm_min << std::endl;
}

std::string Fecha::toString()
{
    std::string fechaFormato = "";
    std::string DD = std::to_string(_dia);
    std::string MM = std::to_string(_mes);
    std::string YYYY = std::to_string(_anio);

    if(_dia < 10)
    {
        DD = "0" + DD;
    }

    if(_mes < 10)
    {
        MM = "0" + MM;
    }

    fechaFormato = DD + "/" + MM + "/" + YYYY;

    return fechaFormato;
}

bool Fecha::esBisiesto()
{
    return _anio % 4 == 0 && _anio % 100 != 0 || _anio % 400 == 0;
}
