#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pagina_Cliente {
	private:
		int cedula [5];
		std::string nombre [5];
		int compras [5];
		Pagina_Cliente* rama1; 
		Pagina_Cliente* rama2; 
		Pagina_Cliente* rama3; 
		Pagina_Cliente* rama4; 
		Pagina_Cliente* rama5;
		
	public:
		Pagina_Cliente ();
		Pagina_Cliente (int pCedula, string pNombre);
		
		int getCuentas ();
		int getCedula (int pIndice);
		string getNombre (int pCedula);
		Pagina_Cliente* getRama (int & pIndice);
		int getCompras(int pIndice);
		
		void setCedula (int pIndice, int pCedula);
		void setNombre (int pIndice, string pNombre);
		void setRama (int pIndice, Pagina_Cliente* pRama);
		void setCompras (int pIndice, int pCompras);
		
		Pagina_Cliente* buscar (int pCedula);
		int getIndice (int pCedula);
		string imprimirReporte();
		
		void imprimir ();
		void imprimir_Pagina ();
};

typedef Pagina_Cliente* puntero_Cliente;
