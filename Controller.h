//José Julián Brenes Garro y Gustavo Pacheco Morales
//c.2022272865
//Estructuras de Datos

#include <iostream>
#include "ArbolPais.h"
#include "ArbolClientes.h"
#include "ArbolAdministradores.h"
#include "cola.h"
#include <cstdlib>
#include <string.h>
#include "lista.h"


using namespace std;


class Controller {
	public:
		
		Controller ()
		{
			baseDeDatos.leeDocPais();
			baseDeDatos.leerDocCiudad();
			baseDeDatos.leeDocRest();
			baseDeDatos.leeDocMenu();
			baseDeDatos.leeDocProducto();
			clientes.leerDocCliente();
			admin.leerDocAdministradores();

			this->descuento = 3;
			this->facturas = 0;
			this->mayorFactura = -1;
			this->menorFactura = 100000;
			this->menorFacturastring = "";
			this->mayorFacturastring = "";
			this->productomasComp = NULL;
			
		}
		//Menu
		void lecturaArchivos();
		void menu();
		void insertar();
//		void eliminar();
		void buscar();
		void modificar();
		void reportes();
		void comprar();
		void pagar();
		
		//Insertar
		void insertarPais();
		void insertarCiudad();
		void insertarRest();
		void insertarMenu();
		void insertarProducto();
		void insertarCliente();
		void insertarAdmin();
		
		//Buscar
		void buscarPais();
		void buscarCiudad();
		void buscarRest();
		void buscarMenu();
		void buscarProducto();
		void buscarClientes();
		void buscarAdmin();
		
		//Modificar
		void modificarPais();
		void modificarCiudad();
		void modificarRest();
		void modificarMenu();
		void modificarProducto();
		void modificarCliente();
		void modificarCompra();
		void modificarAdmin();
		
		//Reportes
		void reportarPais();
		void reportarCiudad();
		void reportarRest();
		void reportarCliente();
		void reportarComprasCliente();
		void reportarRestMasBuscado();
		void reportarMenu();
		void reportarProductos();
		void reportarMenuMasBuscado();
		void reportarProductoMasComprado();
		void reportarFacturaMayor();
		void reportarFacturaMenor();
		void reportarPrecio();
		void reportarDescuento();
		void reportarCantidadProducto();
		
		//Extra
		bool desicion(bool bandera);
		void guardarEnArchivo(string nombreArchivo, string texto);
		
		ArbolClientes clientes;
		ArbolAdministradores admin;

	private:
		ArbolPais baseDeDatos;
//		listaClientes clientes; //lista de clientes
		cola colaClientes;
		cola listaClientes;
		lista listas;
		int descuento;
		int facturas;
		int mayorFactura;
		int menorFactura;
		string menorFacturastring;
		string mayorFacturastring;
		pnodoProducto productomasComp;

		friend class MyForm;
};



