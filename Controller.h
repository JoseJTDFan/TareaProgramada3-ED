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
		void reportes();
		string comprar(int cedula, int codPais, int codCiudad, int codRest, int codMenu, int codProd, int cantidad, int lugar);
		void pagar();
		
		//Insertar
		string insertarPais(int codPais, string nombre);
		string insertarCiudad(int codPais, int codCiudad, string nombre);
		string insertarRest(int codPais, int codCiudad, int codRest, string nombre);
		string insertarMenu(int codPais, int codCiudad, int codRest, int codMenu, string nombre);
		string insertarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd, string nombre, int kcal, int precio, int cantidad);
		string insertarCliente(int cedula, string nombre);
		string insertarAdmin(int cedula, string nombre);
		
		//Buscar
		string buscarPais(int codPais);
		string buscarCiudad(int codPais, int codCiudad);
		string buscarRest(int codPais, int codCiudad, int codRest);
		string buscarMenu(int codPais, int codCiudad, int codRest, int codMenu);
		string buscarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd);
		string buscarClientes(int cedula);
		string buscarAdmin(int cedula);
		
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
		bool isInteger(const string str);
		
		ArbolClientes getClientes() { return this->clientes; }
		ArbolAdministradores getAdmin() { return this->admin; }
		cola getColaClientes() { return this->colaClientes; }

	private:
		ArbolClientes clientes;
		ArbolAdministradores admin;
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



