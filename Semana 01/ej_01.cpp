/*
    Cargar las notas de 10 alumnos en 5 materias de la TUP.

    El programa debe listar:

    - Por cada materia: La cantidad de alumnos aprobados.
    - Los números de alumnos que hayan aprobado todas las materias.
*/


#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "spanish");

    const int ALUMNOS = 10;
    const int MATERIAS = 5;

    int notas[ALUMNOS][MATERIAS];

    cout << "CARGAR NOTAS" << endl;

    //Cargar
    for(int alumno = 0; alumno < ALUMNOS; alumno++)
    {
        cout << "Alumno N°" << alumno + 1 << endl;

        for(int materia = 0; materia < MATERIAS; materia++)
        {
            cout << "Materia " << materia + 1 << ": ";
            cin >> notas[alumno][materia];
        }
        cout << "-------------------" << endl;
    }

    //Mostrar
//    for(int alumno = 0; alumno < ALUMNOS; alumno++)
//    {
//        cout << "Alumno N°" << alumno + 1 << endl;
//
//        for(int materia = 0; materia < MATERIAS; materia++)
//        {
//            cout << "Materia " << materia + 1 << ": " << notas[alumno][materia] << endl;
//        }
//        cout << "-------------------" << endl;
//    }

    cout << endl;

    // PUNTO A
    for(int materia = 0; materia < MATERIAS; materia++)
    {
        int contAlumAprobados = 0;

        for(int alumno = 0; alumno < ALUMNOS; alumno++)
        {
            if(notas[alumno][materia] >= 6)
            {
                contAlumAprobados++;
            }

        }

        // Resultado
        cout << "La materia " << materia + 1 << " tuvo " << contAlumAprobados << " alumnos aprobados." << endl;
    }



    return 0;
}
