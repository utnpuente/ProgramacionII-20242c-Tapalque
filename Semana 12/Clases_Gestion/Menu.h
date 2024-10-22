#ifndef MENU_H
#define MENU_H

#include <iostream>

class Menu
{
protected:
    int _opcion;
    bool _salir;

private:

        virtual void opciones() = 0;
public:

        Menu();

        virtual void mostrar() = 0;
};

#endif // MENU_H
