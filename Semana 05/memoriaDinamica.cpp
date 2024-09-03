#include <iostream>
using namespace std;

int main()
{
    int tam = 5000000;

    int* vDinamico = nullptr;

    return 0;

    for(int i = 0; i < 1000; i++)
    {
        vDinamico = new int[tam];

        if(vDinamico == nullptr)
        {
            cout << "No fue asignada" << endl;
            return 1;
        }

        cout << "Fue asignada" << endl;

        delete[] vDinamico;
    }


    cout << "Fin del programa" << endl;
    return 0;
}
