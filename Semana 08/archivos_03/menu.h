#pragma once

// Menu principal
void mostrarMenu();
bool opcionMenu(int opcion);

// Sub men� Art�culo
void mostrarMenuArticulo();
bool opcionMenuArticulo(int opcion);

// Sub men� Venta
void mostrarMenuVenta();
bool opcionMenuVenta(int opcion);

// Opciones de Art�culos
void opcionCargarArticulos();
void opcionListarArticulos();
void opcionBuscarArticulos();
void opcionModificarArticulos();
void opcionCantidadArticulos();

// Opciones de Ventas
void opcionProcesarVenta();
void opcionLeerVentas();
