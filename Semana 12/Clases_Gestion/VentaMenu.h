#ifndef VENTAMENU_H
#define VENTAMENU_H

#include "Menu.h"


class VentaMenu : public Menu
{
    private:

        void opciones();

    public:
        VentaMenu();
        void mostrar();
};

#endif // VENTAMENU_H
