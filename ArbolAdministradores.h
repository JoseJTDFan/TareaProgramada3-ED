#pragma once

#include <fstream>
#include <cstdlib>
#include <string>

#include "NodoAdministradores.h"
#include "lista.h"


using namespace std;

class ArbolAdministradores {
	private:
		puntero_Administradores raiz;

	public:
		//lista Admin;

		ArbolAdministradores ();
		bool arbol_Vacio ();
		puntero_Administradores getRaiz ();
		
		void buscar_Dato (int & pCedula, puntero_Administradores & pRaiz, bool & pEsta, int & pIndice_Rama);
		void inserta (int pCedula, string pNombre);
		void meter_Dato (int & pCedulaAux, string & pNombreAux, puntero_Administradores & pPaginaXr, puntero_Administradores & pRaiz, int & pIndice_Rama);
		void empujar_Arriba (int & pCedula, string & pNombre, puntero_Administradores & pRaiz, bool & pEmpujar_Arriba, int & pCedula_Aux, string & pNombre_Aux, puntero_Administradores & pPaginaXr);
		void dividir_Pagina (int & pCedula_Aux, string & pNombre_Aux, puntero_Administradores & pPaginaXr, puntero_Administradores & pRaiz, int & pIndice_Rama, int & pCedula_Aux2, string & pNombre_Aux2, puntero_Administradores & pPaginaXr2);
		void imprimir_Arbol ();
		string reporteAdministradores();
		
		void eliminar (int pCedula);
		void quitar (puntero_Administradores & pRaiz, int & pIndice_Rama);
		void sucesor (puntero_Administradores & pRaiz, int & pIndice_Rama);
		void eliminar_Registro (int & pCedula, puntero_Administradores & pRaiz, bool & pEncontrado);
		void mover_Derecha (puntero_Administradores & pRaiz, int & pIndice_Rama);
		void mover_Izquierda (puntero_Administradores & pRaiz, int & pIndice_Rama);
		void combinar (puntero_Administradores & pRaiz, int & pIndice_Rama);
		void restablecer (puntero_Administradores & pRaiz, int & pIndice_Rama);
		
		puntero_Administradores buscarAdministradores (int pCedula);
		bool esta_Administradores (int pCedula);
		void agregar_Datos_lectura (string & pDatosLinea);
		void leerDocAdministradores();
};
