#pragma once
#include "ArticuloMenu.h"
#include "VentaMenu.h"
#include "Menu.h"

class PrincipalMenu : public Menu
{
private:

    ArticuloMenu _articuloMenu; // Composici�n
    VentaMenu _ventaMenu;

    void opciones();

public:
    PrincipalMenu();
    void mostrar();
};


