#pragma once
#include <iostream>
#include <string>

using namespace std;

class NodoProducto { //AVL

	private:
		
		int FB;
		int codPais;
		int codCiudad;
		int codRest;
		int codMenu;
		int codProducto;
		string nombre;
		int kcal;
		int precio;
		int cantidad;
		int comprado;
		NodoProducto * hDer;
		NodoProducto * hIzq;
		
	public:
		
		NodoProducto ();
		NodoProducto (int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, int kcal, int precio, int cantidad);
		void insertProducto (NodoProducto * &nodo, bool & Hh, int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, int kcal, int precio, int cantidad);
		NodoProducto * buscarProducto (int &codProducto);
		string toString ();
		
		void setFB(int FB);
		void setHDer (NodoProducto * hijoDer);
		void setHIzq (NodoProducto * hijoIzq);
		
		void setcodProducto(int pcodProducto);
		void setnombre (string nombre);
		void setkcal (int pkcal);
		void setprecio (int pprecio);
		void setcantidad (int pcantidad);
		void setcomprado (int pcomprado);
		void inOrdenProducto();
		string preOrdenProducto();
		void imprimir_Arbol ();
		
		int getFB();
		NodoProducto * getHDer ();
		NodoProducto * getHIzq ();
		
		int getcodPais();
		int getcodCiudad();
		int getcodRest();
		int getcodMenu();
		int getcodProducto ();
		string getNombre ();
		int getkcal();
		int getprecio();
		int getcantidad();
		int getcomprado();
};

typedef NodoProducto * pnodoProducto;

void rotSimpleDer_Cur (pnodoProducto &nodo, pnodoProducto &n1);
void rotSimpleIzq_Cur (pnodoProducto &nodo, pnodoProducto &n1);
void rotDobleDer_Cur (pnodoProducto &nodo, pnodoProducto &n1);
void rotDobleIzq_Cur (pnodoProducto &nodo, pnodoProducto &n1);

void equilibrar_Uno_Vent(NodoProducto*& pNodo, bool& pHh);
void equilibrar_Dos_Vent(NodoProducto*& pNodo, bool& pHh);
void borrar_Vent(NodoProducto*& pProducto_Sustituto, NodoProducto*& pNodo, bool& pHh);
void borrarProducto_Vent(NodoProducto*& pNodo, bool& pHh, int& pCodProducto);
