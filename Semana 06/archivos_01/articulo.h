#pragma once

//struct Marca
//{
//    int cod;
//    std::string descripcion; // A
//
//};

struct Articulo
{
    int cod;
    char descripcion[50];
    float precio;
};



void mostrarArticulo(const Articulo& art);


//void cargarArticulos();
//void listarArticulos();
