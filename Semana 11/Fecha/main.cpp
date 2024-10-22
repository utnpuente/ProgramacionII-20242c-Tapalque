#include <iostream>
#include "Fecha.h"
using namespace std;

int main()
{

    Fecha fecha(29, 2, 2023);

    cout << fecha.toString() << endl;

    return 0;
}
