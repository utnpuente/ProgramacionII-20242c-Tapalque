#ifndef PRINCIPALMENU_H
#define PRINCIPALMENU_H
#include "ArticuloMenu.h"
#include "VentaMenu.h"
#include "Menu.h"

class PrincipalMenu : public Menu
{
private:
    ArticuloMenu _articuloMenu; // Composición
    VentaMenu _ventaMenu;

   void opciones();

public:
    PrincipalMenu();
   void mostrar();

};

#endif // PRINCIPALMENU_H
