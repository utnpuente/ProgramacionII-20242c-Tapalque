#pragma once

// Menu principal
void mostrarMenu();
bool opcionMenu(int opcion);

// Sub menú Artículo
void mostrarMenuArticulo();
bool opcionMenuArticulo(int opcion);

// Sub menú Venta
void mostrarMenuVenta();
bool opcionMenuVenta(int opcion);

// Opciones de Artículos
void opcionCargarArticulos();
void opcionListarArticulos();
void opcionBuscarArticulos();
void opcionModificarArticulos();
void opcionCantidadArticulos();

// Opciones de Ventas
void opcionProcesarVenta();
void opcionLeerVentas();
