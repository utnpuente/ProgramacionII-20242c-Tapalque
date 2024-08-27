#include <iostream>
using namespace std;

struct Curso
{
    int cod;
    string descripcion;
};

struct Docente
{
    string nombre;
    string apellido;
    Curso curso;
    float sueldo;
    bool activo = true;
};

void mostrarDatos(Docente d)
{
    cout << d.nombre << endl;
}

Docente cargarDocente()
{
    Docente dAux;

    dAux.nombre = "Jorge";

    return dAux;
}


int main()
{
    setlocale(LC_ALL, "spanish");

   Docente d1;

   d1.curso.descripcion;


//    d1 = cargarDocente();
//
//    mostrarDatos(d1);

//    cout << "Nombre: " << d1.nombre << endl;
//    cout << d1.curso << endl;
//    cout << d1.sueldo << endl;

//    int numeros[5];
//
//    Docente docentes[5]{};
//
//
//    docentes[0].nombre;
//    docentes[1].apellido;

    return 0;
}











