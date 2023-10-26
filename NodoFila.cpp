#include "NodoFila.h"

NodoFila::NodoFila()
{
	this->cedula = 0;
	this->nombreCliente = "";
	this->lugar = 0;
	this->siguiente = NULL;
}
NodoFila::NodoFila(int cedula, string nombreCliente, int lugar)
{
	this->cedula = cedula;
	this->nombreCliente = nombreCliente;
	this->lugar = lugar;
	this->siguiente = NULL;
}

NodoFila::NodoFila(int cedula, string nombreCliente, int lugar, listaProductos pproductos)
{
	this->cedula = cedula;
	this->nombreCliente = nombreCliente;
	this->lugar = lugar;
	this->productos = pproductos;
	this->siguiente = NULL;
}

string NodoFila::factura() {
	string texto = "	---------------------------------------------------\n	";
	texto += nombreCliente;
	texto += " - ";
	texto += to_string(cedula);
	texto += "\n	---------------------------------------------------\n	";
	texto += productos.facturar();
	return texto;
}

void NodoFila::facturaImprimir() {
	cout << "	---------------------------------------------------\n	";
	cout << nombreCliente;
	cout << " - ";
	cout << to_string(cedula);
	cout << "\n	---------------------------------------------------\n	";
	productos.MostrarCompra();
}