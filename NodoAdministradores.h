#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pagina_Administradores {
	private:
		int cedula [5];
		std::string nombre [5];
		Pagina_Administradores* rama1; 
		Pagina_Administradores* rama2; 
		Pagina_Administradores* rama3; 
		Pagina_Administradores* rama4; 
		Pagina_Administradores* rama5;
		
	public:
		Pagina_Administradores ();
		Pagina_Administradores (int pCedula, string pNombre);
		
		int getCuentas ();
		int getCedula (int pIndice);
		string getNombre (int pCedula);
		Pagina_Administradores* getRama (int & pIndice);
		
		void setCedula (int pIndice, int pCedula);
		void setNombre (int pIndice, string pNombre);
		void setRama (int pIndice, Pagina_Administradores* pRama);
		
		Pagina_Administradores* buscar (int pCedula);
		int getIndice (int pCedula);
		
		void imprimir ();
		string imprimirReporte();
		void imprimir_Pagina ();
};

typedef Pagina_Administradores* puntero_Administradores;
