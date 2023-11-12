//José Julián Brenes Garro y Gustavo Pacheco Morales
//c.2022272865
//Estructuras de Datos

#include <iostream>
#include "ArbolPais.h"
#include "ArbolClientes.h"
#include "lista.h"
#include "ArbolAdministradores.h"
#include "cola.h"
#include <cstdlib>
#include <string.h>



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
		//void reportes();
		string comprar(int cedula, int codPais, int codCiudad, int codRest, int codMenu, int codProd, int cantidad, int lugar);
		string pagar(int opcion);
		
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
		string modificarPais(int codPais, string nombre);
		string modificarCiudad(int codPais, int codCiudad, string nombre);
		string modificarRest(int codPais, int codCiudad, int codRest, string nombre);
		string modificarMenu(int codPais, int codCiudad, int codRest, int codMenu, string nombre);
		string modificarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd, string nombre, string kcal, string precio, string cantidad);
		string modificarCliente(int cedula, string nombre);
		string modificarAdmin(int cedula, string nombre);
		string modificarCompra(int cedula, int opcion, int cantidad, int codPais, int codCiudad, int codRest, int codMenu, int codProd);
		
		//Eliminar

		string eliminarPais(int codPais);
		string eliminarCiudad(int codPais, int codCiudad);
		string eliminarRest(int codPais, int codCiudad, int codRest);
		string eliminarMenu(int codPais, int codCiudad, int codRest, int codMenu);
		string eliminarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd);
		string eliminarClientes(int cedula);
		string eliminarAdmin(int cedula);
		string eliminarCompra(int cedula);
		
		
		//Reportes
		string reportarPais();
		string reportarCiudad(int codPais);
		string reportarRest(int codPais, int codCiudad);
		string reportarCliente();
		string reportarComprasCliente(int cedula);
		string reportarRestMasBuscado();
		//string reportarMenu();
		//string reportarProductos();
		string reportarMenuMasBuscado();
		string reportarProductoMasComprado();
		string reportarFacturaMayor();
		string reportarFacturaMenor();
		string reportarPrecio(int codPais, int codCiudad, int codRest, int codMenu, int codProd);
		string reportarDescuento();
		string reportarCantidadProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd);
		string reportarElimPais();
		string reportarElimCiudad();
		string reportarElimRest();
		string reportarElimMenu();
		string reportarElimProd();



		//Extra
		bool desicion(bool bandera);
		string guardarEnArchivo(string nombreArchivo, string texto);
		bool isInteger(const string str);
		
		ArbolClientes getClientes() { return this->clientes; }
		ArbolAdministradores getAdmin() { return this->admin; }
		cola getColaClientes() { return this->colaClientes; }

		lista PaisesBorrados;
		lista CiudadesBorrados;
		lista RestBorrados;
		lista MenuBorrados;
		lista ProdBorrados;

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



