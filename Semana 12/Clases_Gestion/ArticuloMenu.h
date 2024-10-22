#ifndef ARTICULOMENU_H
#define ARTICULOMENU_H

#include "Menu.h"

class ArticuloMenu : public Menu
{
    private:
        void opciones() override;

    public:
        ArticuloMenu();

        void mostrar() override;

};

#endif // ARTICULOMENU_H
