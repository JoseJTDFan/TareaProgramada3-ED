#pragma once
#include <iostream>
#include "listaProductos.h"
#include <string>

using namespace std;

class NodoFila { //AVL

	private:
		int cedula;
		string nombreCliente;
		int lugar;
		listaProductos productos;
		NodoFila * siguiente;
		
	public:
		
		NodoFila();
		NodoFila(int cedula, string nombreCliente, int lugar);
		NodoFila(int cedula, string nombreCliente, int lugar, listaProductos pproductos);
		string factura();
		void facturaImprimir();
		
		
	friend class cola;
	friend class Controller;
};

typedef NodoFila * pnodoFila;



