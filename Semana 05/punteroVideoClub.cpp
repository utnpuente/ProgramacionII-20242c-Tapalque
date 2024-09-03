#include <iostream>
using namespace std;

struct Socio
{
    int cod;
    string nombre;
    string apellido;
};

int main()
{
    Socio* vSocios = nullptr;
    int cantSocios;

    cout << "Ingrese la cantidad de socios: ";
    cin >> cantSocios;

    vSocios = new Socio[cantSocios];

    if(vSocios == nullptr)
    {
        cout << "No se asigno memoria dinamica";
        return 1;
    }

    for(int i = 0; i < cantSocios; i++)
    {
        cout << "Ingrese el Nro: ";
        cin >> vSocios[i].cod;

        cin.ignore();

        cout << "Ingrese el nombre: ";
        getline(cin, vSocios[i].nombre);

        cout << "Ingrese el apellido: ";
        getline(cin, vSocios[i].apellido);

        cout << "-------------------------" << endl;

    }

    cout << "NRO\t\tNOMBRE\t\tAPELLIDO" << endl;
    for(int i = 0; i < cantSocios; i++)
    {
        cout << vSocios[i].cod << "\t\t" << vSocios[i].nombre << "\t\t" << vSocios[i].apellido << endl;
    }

    delete[] vSocios;

    return 0;
}
