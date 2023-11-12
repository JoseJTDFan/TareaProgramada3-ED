#include "Controller.h"

string Controller::insertarPais(int codPais, string nombre) {

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		baseDeDatos.insertPais(codPais, nombre);

		return "Se ha insertado el pais.";
	}
	else {
		return "Este pais ya se encuentra registrado.";
	}
}

string Controller::insertarCiudad(int codPais,int codCiudad, string nombre) {

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";

	}
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		
		baseDeDatos.insertCiudad(codPais, codCiudad, nombre);
		return "Se ha insertado la ciudad.";
	}
	else {
		return "Esta ciudad ya se encuentra registrada.";
	}
}

string Controller::insertarRest(int codPais, int codCiudad, int codRest, string nombre) {

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";

	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas en el pais";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		
		baseDeDatos.insertRest(codPais, codCiudad, codRest, nombre);
		return "Se ha insertado el restaurante.";

	}
	else {
		return "Este codigo ya se encuentra registrado.";
	}
}

string Controller::insertarMenu(int codPais, int codCiudad, int codRest, int codMenu, string nombre) {
	
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";

	}
	if (nodoPais->getCiudad() == NULL) {
		return"No hay ciudades registradas.";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		
		baseDeDatos.insertMenu(codPais, codCiudad, codRest, codMenu, nombre);
		return "Se ha insertado el menu.";
	}
	else {
		return "Este codigo ya se encuentra registrado.";
	}
}

string Controller::insertarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd,string nombre, int kcal, int precio, int cantidad) {
	
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		return "Menu Invalido o No Registrado";
	}

	pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
	if (nodoProd == NULL) {
		
		baseDeDatos.insertProducto(codPais, codCiudad, codRest, codMenu, codProd, nombre, kcal, precio, cantidad);
		return "Se ha insertado el producto.";

	}
	else {
		return "Este codigo ya se encuentra registrado.";
	}
}

string Controller::insertarCliente(int cedula, string nombre) {
	
	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	if (Pagina_Cliente == NULL) {
		
		clientes.inserta(cedula, nombre);
		
		return "Se ha insertado el cliente.";
	}
	else {
		return "Este cliente ya se encuentra registrado.";
	}
}

string Controller::insertarAdmin(int cedula, string nombre) {
	
	puntero_Administradores Pagina_Administradores = admin.buscarAdministradores(cedula);
	if (Pagina_Administradores == NULL) {
		admin.inserta(cedula, nombre);
		
		return "Se ha insertado el administrador.";

	}
	else {
		return "Este administrador ya se encuentra registrado.";
	}
}


string Controller::buscarPais(int codPais) {
	string busqueda;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais != NULL) {
		busqueda += "Codigo del pais: ";
		busqueda += to_string(nodoPais->getcodPais());
		busqueda += "\nNombre del pais: ";
		busqueda += nodoPais->getnombre();
		return busqueda;
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
}

string Controller::buscarCiudad(int codPais, int codCiudad) {
	string busqueda;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad != NULL) {
		
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoCiudad->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoCiudad->getcodCiudad());
		busqueda += "\nNombre de la ciudad: ";
		busqueda += nodoCiudad->getnombre();
		return busqueda;
	}
	else {
		return "Este codigo no se encuentra registrado.";

	}

}

string Controller::buscarRest(int codPais, int codCiudad, int codRest) {
	string busqueda;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	system("cls");

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}
	
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest != NULL) {
		system("cls");
		pnodoR restaurante = listas.buscarR(codPais, codCiudad, codRest);
		if (restaurante == NULL) {
			listas.InsertarInicioR(codPais, codCiudad, codRest, nodoRest->getnombre(), 1);
		}
		else {
			restaurante->cantidad++;
		}

		//		nodoRest->cantBusquedas=nodoRest->cantBusquedas+1;
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoRest->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoRest->getcodCiudad());
		busqueda += "\nCodigo del restaurante: ";
		busqueda += to_string(nodoRest->getcodRest());
		busqueda += "\nNombre del restaurante: ";
		busqueda += nodoRest->getnombre();
		return busqueda;
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}

}

string Controller::buscarMenu(int codPais, int codCiudad, int codRest, int codMenu) {
	string busqueda;

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu != NULL) {
		pnodoM menus = listas.buscar(codPais, codCiudad, codRest, codMenu);
		if (menus == NULL) {
			listas.InsertarInicio(codPais, codCiudad, codRest, codMenu, nodoMenu->getNombre(), 1);
		}
		else {
			menus->cantidad++;
		}
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoMenu->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoMenu->getcodCiudad());
		busqueda += "\nCodigo del restaurante: ";
		busqueda += to_string(nodoMenu->getcodRest());
		busqueda += "\nCodigo del menu: ";
		busqueda += to_string(nodoMenu->getcodMenu());
		busqueda += "\nNombre del menu: ";
		busqueda += nodoMenu->getNombre();
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}

string Controller::buscarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd) {
	string busqueda = "";

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";

	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		return "Menu Invalido o No Registrado";
	}
	if (nodoMenu->getdirProducto() == NULL) {
		return "No hay productos registrados.";
	}

	pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
	if (nodoProd != NULL) {
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoProd->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoProd->getcodCiudad());
		busqueda += "\nCodigo del restaurante: ";
		busqueda += to_string(nodoProd->getcodRest());
		busqueda += "\nCodigo del menu: ";
		busqueda += to_string(nodoProd->getcodMenu());
		busqueda += "\nCodigo del producto: ";
		busqueda += to_string(nodoProd->getcodProducto());
		busqueda += "\nNombre del producto: ";
		busqueda += nodoProd->getNombre();
		busqueda += "\nCalorias del producto: ";
		busqueda += to_string(nodoProd->getkcal());
		busqueda += "\nPrecio del producto: ";
		busqueda += to_string(nodoProd->getprecio());
		busqueda += "\nCantidad del producto: ";
		busqueda += to_string(nodoProd->getcantidad());
		
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}

string Controller::buscarClientes(int cedula) {
	string busqueda = "";

	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	int indice = Pagina_Cliente->getIndice(cedula);
	if (Pagina_Cliente != NULL) {
		busqueda += "\nCedula del cliente: ";
		busqueda += to_string(Pagina_Cliente->getCedula(indice));
		busqueda += "\nNombre del cliente : ";
		busqueda += Pagina_Cliente->getNombre(indice);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}

string Controller::buscarAdmin(int cedula) {
	string busqueda = "";
	/*
	if (this->admin.Admin.buscarPersona(cedula) == false) {
		return "Este codigo no se encuentra registrado.";
	}*/

	puntero_Administradores Pagina_Administradores = admin.buscarAdministradores(cedula);
	int indice = Pagina_Administradores->getIndice(cedula);
	if (Pagina_Administradores != NULL) {
		busqueda += "\nCedula del administrador: ";
		busqueda += to_string(Pagina_Administradores->getCedula(indice));
		busqueda += "\nNombre del administrador : ";
		busqueda += Pagina_Administradores->getNombre(indice);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}


string Controller::modificarPais(int codPais, string nombre) {
	string modificacion = "";
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais != NULL) {
		//modificacion += "Antiguo: ";
		//modificacion += "\nCodigo del país: ";
		//modificacion += to_string(nodoPais->getcodPais());
		//modificacion += "\nNombre del pais: ";
		//modificacion += nodoPais->getnombre();
		//modificacion += "\n\n";
		if (nombre != "")
		{
			nodoPais->setnombre(nombre);
		}
		modificacion += "Modificado: ";
		modificacion += "\nCodigo del país: ";
		modificacion += to_string(nodoPais->getcodPais());
		modificacion += "\nNombre del pais: ";
		modificacion += nodoPais->getnombre();
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;
}

string Controller::modificarCiudad(int codPais, int codCiudad, string nombre) {
	string modificacion = "";

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad != NULL) {
		if (nombre != "")
		{
			nodoCiudad->setnombre(nombre);
		}
		modificacion += "Modificado: ";
		modificacion += "\nCodigo del país: ";
		modificacion += to_string(nodoCiudad->getcodPais());
		modificacion += "\nCodigo de la ciudad: ";
		modificacion += to_string(nodoCiudad->getcodCiudad());
		modificacion += "\nNombre de la ciudad: ";
		modificacion += nodoCiudad->getnombre();
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;
}

string Controller::modificarRest(int codPais, int codCiudad, int codRest, string nombre) {
	string modificacion = "";

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	
	pnodoRest nodoRest = nodoCiudad->getRest()->buscarRest(codRest);

	if (nodoRest != NULL) {
		if (nombre != "")
		{
			nodoRest->setNombre(nombre);
		}
		modificacion += "Modificado: ";
		modificacion += "\nCodigo del país: ";
		modificacion += to_string(nodoRest->getcodPais());
		modificacion += "\nCodigo de la ciudad: ";
		modificacion += to_string(nodoRest->getcodCiudad());
		modificacion += "\nCodigo del restaurante: ";
		modificacion += to_string(nodoRest->getcodRest());
		modificacion += "\nNombre del restaurante: ";
		modificacion += nodoRest->getnombre();
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;

}

string Controller::modificarMenu(int codPais, int codCiudad, int codRest, int codMenu, string nombre) {
	string modificacion = "";

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	
	pnodoRest nodoRest = nodoCiudad->getRest()->buscarRest(codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}

	pnodoMenu nodoMenu = nodoRest->getMenu()->buscarMenu(codMenu);
	if (nodoMenu != NULL) {
		if (nombre != "")
		{
			nodoMenu->setNombre(nombre);
		}
		modificacion += "Modificado: ";
		modificacion += "\nCodigo del país: ";
		modificacion += to_string(nodoMenu->getcodPais());
		modificacion += "\nCodigo de la ciudad: ";
		modificacion += to_string(nodoMenu->getcodCiudad());
		modificacion += "\nCodigo del restaurante: ";
		modificacion += to_string(nodoMenu->getcodRest());
		modificacion += "\nCodigo del menu: ";
		modificacion += to_string(nodoMenu->getcodMenu());
		modificacion += "\nNombre del menu: ";
		modificacion += nodoMenu->getNombre();
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;
}

string Controller::modificarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProducto, string nombre, string kcal, string precio, string cantidad) {
	string modificacion = "";

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	
	pnodoRest nodoRest = nodoCiudad->getRest()->buscarRest(codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	
	pnodoMenu nodoMenu = nodoRest->getMenu()->buscarMenu(codMenu);
	if (nodoMenu == NULL) {
		return "Menu Invalido o No Registrado";
	}
	
	pnodoProducto nodoProducto = nodoMenu->getdirProducto()->buscarProducto(codProducto);
	if (nodoProducto != NULL) {
		if (nombre != "") {
			nodoProducto->setnombre(nombre);
		}
		if (kcal != "") {
			nodoProducto->setkcal(stoi(kcal));
		}
		if (precio != "") {
			nodoProducto->setprecio(stoi(precio));
		}
		if (cantidad != "") {
			nodoProducto->setcantidad(stoi(cantidad));
		}
		modificacion += "Modificado: ";
		modificacion += "\nCodigo del país: ";
		modificacion += to_string(nodoProducto->getcodPais());
		modificacion += "\nCodigo de la ciudad: ";
		modificacion += to_string(nodoProducto->getcodCiudad());
		modificacion += "\nCodigo del restaurante: ";
		modificacion += to_string(nodoProducto->getcodRest());
		modificacion += "\nCodigo del menu: ";
		modificacion += to_string(nodoProducto->getcodMenu());
		modificacion += "\nCodigo del producto: ";
		modificacion += to_string(nodoProducto->getcodProducto());
		modificacion += "\nNombre del producto: ";
		modificacion += nodoProducto->getNombre();
		modificacion += "\nCalorias del producto: ";
		modificacion += to_string(nodoProducto->getkcal());
		modificacion += "\nPrecio del producto: ";
		modificacion += to_string(nodoProducto->getprecio());
		modificacion += "\nCantidad del producto: ";
		modificacion += to_string(nodoProducto->getcantidad());
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;
}

string Controller::modificarCliente(int cedula, string nombre) {
	string modificacion = "";
	
	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	int indice = Pagina_Cliente->getIndice(cedula);
	if (Pagina_Cliente != NULL) {
		if (nombre != "") {
			Pagina_Cliente->setNombre(indice, nombre);
		}
		modificacion += "\nCedula del cliente: ";
		modificacion += to_string(Pagina_Cliente->getCedula(indice));
		modificacion += "\nNombre del cliente : ";
		modificacion += Pagina_Cliente->getNombre(indice);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;
}

string Controller::modificarAdmin(int cedula, string nombre) {
	string modificacion = "";

	puntero_Administradores Pagina_Administradores = admin.buscarAdministradores(cedula);
	int indice = Pagina_Administradores->getIndice(cedula);
	if (Pagina_Administradores != NULL) {
		if (nombre != "") {
			Pagina_Administradores->setNombre(indice, nombre);
		}
		modificacion += "\nCedula del administrador: ";
		modificacion += to_string(Pagina_Administradores->getCedula(indice));
		modificacion += "\nNombre del administrador : ";
		modificacion += Pagina_Administradores->getNombre(indice);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return modificacion;
}

string Controller::modificarCompra(int cedula, int opcion, int cantidad, int codPais, int codCiudad, int codRest, int codMenu, int codProd) {
	
	pnodoFila clienteNodo = colaClientes.buscar(cedula);
	if (colaClientes.ListaVacia()) {
		return "Aún no hay compras";
	}

	
	
	if (clienteNodo == NULL) {
		return "El cliente no esta en la cola.";
	}
		switch (opcion) {
		case 1:
		{

			pnodoProductos producto;
			producto = clienteNodo->productos.buscarProducto(codProd);
			if (producto == NULL) {
				return "Producto no Registrado.";
			}
			string texto = "";
			pnodoProducto productoOriginal = baseDeDatos.buscarProducto(producto->codPais, producto->codCiudad, producto->codRest, producto->codMenu, producto->codProducto);
			
			texto += "Cantidad Anterior: " + to_string(productoOriginal->getcantidad());
			texto += "Nueva Cantidad: ";
			if (cantidad > productoOriginal->getcantidad()) {
				return "Cantidad ingresada supera a la disponible";
			}
			texto += to_string(cantidad);
			productoOriginal->setcantidad(productoOriginal->getcantidad() + (producto->cantidad - cantidad));
			producto->cantidad = cantidad;

			
			texto += "\nCantidad disponible en Inventario: " + to_string(productoOriginal->getcantidad());
			texto += "\n\nCantidad cambiada con exito.";
			return texto;
		}
		break;
		case 2:
		{
			pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
			if (nodoPais == NULL) {
				return "Pais Invalido o No Registrado";
			}
			if (nodoPais->getCiudad() == NULL) {
				return "No hay ciudades registradas.";
			}
			pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
			if (nodoCiudad == NULL) {
				return "Ciudad Invalida o No Registrada";

			}
			if (nodoCiudad->getRest() == NULL) {
				return "No hay restaurantes registrados.";
			}


			pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
			if (nodoRest == NULL) {
				return "Restaurante Invalido o No Registrado";

			}
			if (nodoRest->getMenu() == NULL) {
				return "No hay menus registrados.";
			}



			pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
			if (nodoMenu == NULL) {
				return "Menu Invalido o No Registrado";
			}
			if (nodoMenu->getdirProducto() == NULL) {
				return "No hay productos registrados.";
			}

			pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);

			if (nodoProd != NULL) {
				if (cantidad <= nodoProd->getcantidad()) {
					nodoProd->setcantidad(nodoProd->getcantidad() - cantidad);
					clienteNodo->productos.InsertarFinal(codPais, codCiudad, codRest, codMenu, codProd, nodoProd->getNombre(), cantidad, nodoProd->getprecio());
					nodoProd->setcomprado(nodoProd->getcomprado() + 1);
					if (productomasComp == NULL || productomasComp->getcomprado() > nodoProd->getcomprado()) {
						productomasComp = nodoProd;
					}

					return colaClientes.imprimir();
				}
				else {
					return "Cantidad ingresada superior a la almacenada.";
				}

			}
			else {
				return "Este codigo no se encuentra registrado.";
			}
		}
			
		break;
		case 3:
		{
			
			pnodoProductos producto;
			producto = clienteNodo->productos.buscarProducto(codProd);
			if (producto == NULL) {
				return "Producto no Registrado.";
			}
			int pos = clienteNodo->productos.getPosicion(codProd);
			pnodoProducto nodoProd = baseDeDatos.buscarProducto(producto->codPais, producto->codCiudad, producto->codRest, producto->codMenu, producto->codProducto);
			nodoProd->setcomprado(nodoProd->getcomprado() - 1);
			clienteNodo->productos.BorrarPosicion(pos);
			if (clienteNodo->productos.ListaVacia()) {
				int posCliente = colaClientes.getPosicion(cedula);
				colaClientes.borrarPosicion(posCliente);
			}
			return colaClientes.imprimir();
		}
		break;
		default:
			return "Ingrese una opcion valido";
			break;
		}
	return "hola;";
}

string Controller::eliminarPais(int codPais) {
	string busqueda;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais != NULL) {
		busqueda += "\nPAÍS ELIMINADO: \n";
		busqueda += "Codigo del pais: ";
		busqueda += to_string(nodoPais->getcodPais());
		busqueda += "\nNombre del pais: ";
		busqueda += nodoPais->getnombre();
		string nombre = nodoPais->getnombre();
		int pais = nodoPais->getcodPais();
		this->PaisesBorrados.InsertarInicio(pais, -1, -1, -1, nombre, -1);
		this->baseDeDatos.borrar_Pais(codPais);
		return busqueda;
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
}
string Controller::eliminarCiudad(int codPais, int codCiudad) {
	string busqueda;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad != NULL) {
		busqueda += "\nCIUDAD ELIMINADA: \n";
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoCiudad->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoCiudad->getcodCiudad());
		busqueda += "\nNombre de la ciudad: ";
		busqueda += nodoCiudad->getnombre();
		string nombre = nodoCiudad->getnombre();
		int pais = nodoCiudad->getcodPais();
		int ciudad = nodoCiudad->getcodCiudad();
		this->baseDeDatos.borrar_Ciudad(codPais, codCiudad);
		this->CiudadesBorrados.InsertarInicio(pais, ciudad, -1, -1, nombre, -1);
		return busqueda;
	}
	else {
		return "Este codigo no se encuentra registrado.";

	}
}

string Controller::eliminarRest(int codPais, int codCiudad, int codRest) {
	string busqueda;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	system("cls");

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest != NULL) {
		busqueda += "\nRESTAURANTE ELIMINADA: \n";
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoRest->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoRest->getcodCiudad());
		busqueda += "\nCodigo del restaurante: ";
		busqueda += to_string(nodoRest->getcodRest());
		busqueda += "\nNombre del restaurante: ";
		busqueda += nodoRest->getnombre();
		string nombre = nodoRest->getnombre();
		int pais = nodoRest->getcodPais();
		int ciudad = nodoRest->getcodCiudad();
		int rest = nodoRest->getcodRest();
		this->baseDeDatos.borrar_Rest(codPais, codCiudad, codRest);
		this->RestBorrados.InsertarInicio(pais, ciudad, rest, -1, nombre, -1);
		return busqueda;
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
}

string Controller::eliminarMenu(int codPais, int codCiudad, int codRest, int codMenu) {
	string busqueda;

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu != NULL) {
		busqueda += "\nMENÚ ELIMINADO: \n";
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoMenu->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoMenu->getcodCiudad());
		busqueda += "\nCodigo del restaurante: ";
		busqueda += to_string(nodoMenu->getcodRest());
		busqueda += "\nCodigo del menu: ";
		busqueda += to_string(nodoMenu->getcodMenu());
		busqueda += "\nNombre del menu: ";
		busqueda += nodoMenu->getNombre();
		string nombre = nodoMenu->getNombre();
		int pais = nodoMenu->getcodPais();
		int ciudad = nodoMenu->getcodCiudad();
		int rest = nodoMenu->getcodRest();
		int menu = nodoMenu->getcodMenu();
		this->baseDeDatos.borrar_Menu(codPais, codCiudad, codRest, codMenu);
		this->MenuBorrados.InsertarInicio(pais, ciudad, rest, menu, nombre, -1);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}
string Controller::eliminarProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProd) {
	string busqueda = "";

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";

	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}

	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		return "Menu Invalido o No Registrado";
	}
	if (nodoMenu->getdirProducto() == NULL) {
		return "No hay productos registrados.";
	}

	pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
	if (nodoProd != NULL) {
		busqueda += "\nPRODUCTO ELIMINADO: \n";
		busqueda += "\nCodigo de pais: ";
		busqueda += to_string(nodoProd->getcodPais());
		busqueda += "\nCodigo de la ciudad: ";
		busqueda += to_string(nodoProd->getcodCiudad());
		busqueda += "\nCodigo del restaurante: ";
		busqueda += to_string(nodoProd->getcodRest());
		busqueda += "\nCodigo del menu: ";
		busqueda += to_string(nodoProd->getcodMenu());
		busqueda += "\nCodigo del producto: ";
		busqueda += to_string(nodoProd->getcodProducto());
		busqueda += "\nNombre del producto: ";
		busqueda += nodoProd->getNombre();
		busqueda += "\nCalorias del producto: ";
		busqueda += to_string(nodoProd->getkcal());
		busqueda += "\nPrecio del producto: ";
		busqueda += to_string(nodoProd->getprecio());
		busqueda += "\nCantidad del producto: ";
		busqueda += to_string(nodoProd->getcantidad());
		string nombre = nodoProd->getNombre();
		int pais = nodoProd->getcodPais();
		int ciudad = nodoProd->getcodCiudad();
		int rest = nodoProd->getcodRest();
		int menu = nodoProd->getcodMenu();
		int prod = nodoProd->getcodProducto();
		this->baseDeDatos.borrar_Producto(codPais, codCiudad, codRest, codMenu, codProd);
		this->ProdBorrados.InsertarInicio(pais, ciudad, rest, menu, nombre, prod);

	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}

string Controller::eliminarClientes(int cedula) {
	string busqueda = "";

	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	int indice = Pagina_Cliente->getIndice(cedula);
	if (Pagina_Cliente != NULL) {
		busqueda += "\nCLIENTE ELIMINADO: \n";
		busqueda += "\nCedula del cliente: ";
		busqueda += to_string(Pagina_Cliente->getCedula(indice));
		busqueda += "\nNombre del cliente : ";
		busqueda += Pagina_Cliente->getNombre(indice);
		this->clientes.eliminar(cedula);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}
string Controller::eliminarAdmin(int cedula) {
	string busqueda = "";
	/*
	if (this->admin.Admin.buscarPersona(cedula) == false) {
		return "Este codigo no se encuentra registrado.";
	}*/
	puntero_Administradores Pagina_Administradores = admin.buscarAdministradores(cedula);
	int indice = Pagina_Administradores->getIndice(cedula);
	if (Pagina_Administradores != NULL) {
		busqueda += "\nADMINISTRADOR ELIMINADO: \n";
		busqueda += "\nCedula del administrador: ";
		busqueda += to_string(Pagina_Administradores->getCedula(indice));
		busqueda += "\nNombre del administrador : ";
		busqueda += Pagina_Administradores->getNombre(indice);
		//this->admin.Admin.eliminar(Pagina_Administradores->getCedula(indice));
		this->admin.eliminar(cedula);
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
	return busqueda;
}

string Controller::eliminarCompra(int cedula) {

	if (colaClientes.buscar(cedula) == NULL) {
		return "El cliente no está en la cola.";
	}
	pnodoFila clienteNodo = colaClientes.buscar(cedula);
	pnodoProductos aux = clienteNodo->productos.primero;
	while (aux != NULL) {
		pnodoProducto nodoProd = baseDeDatos.buscarProducto(aux->codPais, aux->codCiudad, aux->codRest, aux->codMenu, aux->codProducto);
		nodoProd->setcantidad(nodoProd->getcantidad() + aux->cantidad);
		aux = aux->siguiente;
	}
	colaClientes.borrarPosicion(colaClientes.getPosicion(cedula));
	//clienteNodo->productos.InsertarFinal(codPais, codCiudad, codRest, codMenu, codProd, nodoProd->getNombre(), cantidad, nodoProd->getprecio());
	return colaClientes.imprimir();
}

bool Controller::desicion(bool bandera) {
	bool bandera2 = true;
	do {
		system("cls");
		cout << endl << "Desea seguir comprando?" << endl;
		cout << "1.Si" << endl;
		cout << "2.No" << endl;
		cout << endl << "-->";
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1:
			bandera2 = false;
			break;
		case 2:
			bandera = false;
			bandera2 = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");

		}
	} while (bandera2 == true);
	return bandera;
}

string Controller::comprar(int cedula,int codPais, int codCiudad, int codRest, int codMenu, int codProd, int cantidad, int lugar) {

	if (colaClientes.largoLista() == 5) {
		return "La cola esta llena, no puede comprar.";
	}
	bool banderaCompro = false;

	pnodoFila clienteNodo;
	puntero_Cliente nodoClientes = clientes.buscarCliente(cedula);



	if (nodoClientes != NULL) {

		if (colaClientes.ListaVacia() == false) {
			if (colaClientes.primero->cedula != cedula && colaClientes.buscar(cedula) != NULL) {
				return "El cliente ya esta en la cola.";
			}

			if (colaClientes.primero->cedula == cedula) {
				clienteNodo = colaClientes.buscar(cedula);
				banderaCompro = true;
			}
			else {
				listaProductos productos;
				int indice = nodoClientes->getIndice(cedula);
				clienteNodo = new NodoFila();
				clienteNodo->cedula = cedula;
				clienteNodo->nombreCliente = nodoClientes->getNombre(indice);
			}
		}
		else {
			listaProductos productos;
			int indice = nodoClientes->getIndice(cedula);
			clienteNodo = new NodoFila();
			clienteNodo->cedula = cedula;
			clienteNodo->nombreCliente = nodoClientes->getNombre(indice);
		}
		
		
			
		pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
		if (nodoPais == NULL) {
			return "Pais Invalido o No Registrado";
		}
		if (nodoPais->getCiudad() == NULL) {
			return "No hay ciudades registradas.";
		}
		pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
		if (nodoCiudad == NULL) {
			return "Ciudad Invalida o No Registrada";

		}
		if (nodoCiudad->getRest() == NULL) {
			return "No hay restaurantes registrados.";
		}

			
		pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
		if (nodoRest == NULL) {
			return "Restaurante Invalido o No Registrado";

		}
		if (nodoRest->getMenu() == NULL) {
			return "No hay menus registrados.";
		}
			

				
		pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
		if (nodoMenu == NULL) {
			return "Menu Invalido o No Registrado";
		}
		if (nodoMenu->getdirProducto() == NULL) {
			return "No hay productos registrados.";
		}

		pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);

		if (nodoProd != NULL) {
			if (cantidad <= nodoProd->getcantidad()) {
				nodoProd->setcantidad(nodoProd->getcantidad() - cantidad);
				clienteNodo->productos.InsertarFinal(codPais, codCiudad, codRest, codMenu, codProd, nodoProd->getNombre(), cantidad, nodoProd->getprecio());
				nodoProd->setcomprado(nodoProd->getcomprado() + 1);
				if (productomasComp == NULL || productomasComp->getcomprado() > nodoProd->getcomprado()) {
					productomasComp = nodoProd;
				}

				//						clienteNodo->
				//						if(banderaCompra==false){
				//							
				//						}
			}
			else {
				return "Cantidad ingresada superior a la almacenada.";
			}

		}
		else {
			return "Este codigo no se encuentra registrado.";
		}
		
		clienteNodo->lugar = lugar;
		if (banderaCompro == false) {
			colaClientes.InsertarFinal(clienteNodo);
		}

		return colaClientes.imprimir();
		
	}
	else {
		return "Este cliente no se encuentra registrado.";
	}
}

string Controller::pagar(int opcion) {
	/*system("cls");
	cout << "****************************** PAGAR ******************************" << endl;
	*/
	if (colaClientes.ListaVacia()) {
		/*cout << endl << "La cola esta vacia, primero haga fila." << endl;
		system("pause");*/
		return "La cola esta vacia, primero haga fila.";
	}

/*	bool bandera = true;
	do {
		*/pnodoFila clienteFila = colaClientes.primero;
		/*system("cls");
		cout << endl << clienteFila->nombreCliente << " desea facturar?" << endl;
		cout << "1.Si" << endl;
		cout << "2.No" << endl;
		cout << endl << "-->";
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1:
		{*/
			//bool bandera2 = true;
			int desc = 0;
			//do {
				/*system("cls");
				cout << endl << "Con que desea pagar?" << endl;
				cout << "1.Tarjeta" << endl;
				cout << "2.Efectivo" << endl;
				cout << endl << "-->";
				int opcion2;
				cin >> opcion2;*/
				switch (opcion) {
				case 1:
					desc = 3;
					//bandera2 = false;
					break;
				case 2:
					desc = 1;
					//bandera2 = false;
					break;
				default:
					/*cout << "Ingrese un numero valido" << endl;
					system("pause");*/
					return "Ingrese una opcion valida";
				}
			//} while (bandera2 == true);
			string facturaTexto;
			facturaTexto = clienteFila->factura();
			facturaTexto += "	---------------------------------------------------\n	";
			if (clienteFila->lugar == 1) {
				facturaTexto += "Descuento por Llevar: 3%\n";
			}
			else {
				facturaTexto += "Descuento por Comer en el Restaurante: 1%\n";
			}
			if (desc == 3) {
				facturaTexto += "	Descuento por Tarjeta: 3%\n";
			}
			else {
				facturaTexto += "	Descuento por Efectivo: 1%\n";
			}
			facturaTexto += "	---------------------------------------------------\n	";
			float total = clienteFila->productos.total() * 1.0;
			facturaTexto += "Total sin Descuento: " + to_string(total);
			facturaTexto += "\n	---------------------------------------------------\n	";
			total -= (total * (desc / 100));
			if (clienteFila->lugar == 1) {
				total -= (total * 0.03);
			}
			else {
				total -= (total * 0.01);
			}
			facturaTexto += "Total: " + to_string(total);
			if (mayorFactura < total) {
				mayorFactura = total;
				mayorFacturastring = facturaTexto;
			}
			if (menorFactura > total) {
				menorFactura = total;
				menorFacturastring = facturaTexto;
			}
			facturas++;
			int cedulacliente = (clienteFila->cedula);

			pnodoFila nodoCompra = listaClientes.buscar(clienteFila->cedula);
			if (nodoCompra == NULL) {
				listaClientes.InsertarInicio(clienteFila->cedula, clienteFila->nombreCliente, 1);
			}
			else {
				nodoCompra->lugar++;
			}
			colaClientes.BorrarInicio();
			return guardarEnArchivo(to_string(cedulacliente) + "_" + to_string(facturas + 1) + ".txt", facturaTexto);
			//				cout<<endl<<endl<<"Se ha generado la factura en "<<to_string(clienteFila->cedula)<<"_"<<to_string(facturas+1)<<".txt"<<endl;

		/* }
		bandera = false;
		break;
		case 2:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");

		}
	} while (bandera == true);*/
}

//*************** REPORTES **************************

string Controller::guardarEnArchivo(string nombreArchivo, string texto) {
	ofstream archivo(nombreArchivo);

	if (!archivo.is_open()) {
		return "No se pudo abrir el archivo: " + nombreArchivo;
	}

	archivo << texto;

	archivo.close();

	return "Reporte realizado en el archivo: " + nombreArchivo;
}

string Controller::reportarPais() {
	return guardarEnArchivo("Arbol de Paises.txt", baseDeDatos.reportePais());
	
}

string Controller::reportarCiudad(int codPais) {
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas. \n No se ha generado el reporte.";
	}
	string nombre = nodoPais->getnombre();
	return guardarEnArchivo("Arbol de Ciudades de " + nombre + ".txt", baseDeDatos.reporteCiudad(nodoPais));
}

string Controller::reportarRest(int codPais, int codCiudad) {
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}
	string nombreCiudad = nodoCiudad->getnombre();
	return guardarEnArchivo("Arbol de Restaurantes de la ciudad " + nombreCiudad + ".txt", baseDeDatos.reporteRest(nodoCiudad));
}

string Controller::reportarCliente() {
	return guardarEnArchivo("Arbol de Clientes.txt", clientes.reporteCliente());
}

/*void Controller::reportarMenu() {
	system("cls");
	cout << "****************************** REPORTE DE MENU ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais: ";
	int codPais;
	cin >> codPais;
	cout << endl;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		cout << endl << "Pais Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	if (nodoPais->getCiudad() == NULL) {
		cout << endl << "No hay ciudades registradas." << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Ciudad(codPais);
	cout << endl << endl << "Ingrese el codigo de la ciudad: ";
	int codCiudad;
	cin >> codCiudad;
	cout << endl;
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ciudad Invalida o No Registrada" << endl;
		system("pause");
		return;
	}
	if (nodoCiudad->getRest() == NULL) {
		cout << endl << "No hay restaurantes registrados." << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
	cout << endl << endl << "Ingrese el codigo del restaurante: ";
	int codRest;
	cin >> codRest;
	cout << endl;
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		cout << endl << "Restaurante Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	if (nodoRest->getMenu() == NULL) {
		cout << endl << "No hay menus registrados." << endl;
		system("pause");
		return;
	}
	string nombreRest = nodoRest->getnombre();
	guardarEnArchivo("Arbol de Menu del restaurante " + nombreRest + ".txt", baseDeDatos.reporteMenu(nodoRest));
}*/

/*void Controller::reportarProductos() {
	system("cls");
	cout << "****************************** REPORTE DE PRODUCTOS ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais: ";
	int codPais;
	cin >> codPais;
	cout << endl;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		cout << endl << "Pais Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	if (nodoPais->getCiudad() == NULL) {
		cout << endl << "No hay ciudades registradas." << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Ciudad(codPais);
	cout << endl << endl << "Ingrese el codigo de la ciudad: ";
	int codCiudad;
	cin >> codCiudad;
	cout << endl;
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ciudad Invalida o No Registrada" << endl;
		system("pause");
		return;
	}
	if (nodoCiudad->getRest() == NULL) {
		cout << endl << "No hay restaurantes registrados." << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
	cout << endl << endl << "Ingrese el codigo del restaurante: ";
	int codRest;
	cin >> codRest;
	cout << endl;
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		cout << endl << "Restaurante Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	if (nodoRest->getMenu() == NULL) {
		cout << endl << "No hay menus registrados." << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);
	cout << endl << endl << "Ingrese el codigo del menu: ";
	int codMenu;
	cin >> codMenu;
	cout << endl;
	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoRest == NULL) {
		cout << endl << "Menu Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	if (nodoRest->getMenu() == NULL) {
		cout << endl << "No hay productos registrados." << endl;
		system("pause");
		return;
	}
	string nombreMenu = nodoMenu->getNombre();
	guardarEnArchivo("Arbol delproductos del menu " + nombreMenu + ".txt", baseDeDatos.reporteProducto(nodoMenu));
}*/

string Controller::reportarMenuMasBuscado() {
	string texto = "	MENU MAS BUSCADO\n\n	";
	texto += listas.MasBuscado();
	return guardarEnArchivo("Menu Mas Buscado.txt", texto);
}

string Controller::reportarRestMasBuscado() {
	string texto = "	RESTAURANTE MAS BUSCADO\n\n	";
	texto += listas.MasBuscadoR();
	return guardarEnArchivo("Restaurante Mas Buscado.txt", texto);
}

string Controller::reportarPrecio(int codPais, int codCiudad, int codRest, int codMenu, int codProducto) {
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}
	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoRest == NULL) {
		return "Menu Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay productos registrados.";
	}
	pnodoProducto nodoProducto = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProducto);
	if (nodoRest == NULL) {
		return "Producto Invalido o No Registrado";
	}
	string nombreProducto = nodoProducto->getNombre();
	return guardarEnArchivo("Precio del producto " + nombreProducto + ".txt", "Precio del producto: " + to_string(nodoProducto->getprecio()) + " colones");
}

string Controller::reportarDescuento() {
	system("cls");
	cout << "****************************** REPORTE DE DESCUENTO ******************************" << endl << endl;
	return guardarEnArchivo("Descuento.txt", "El descuento por pago en tarjeta es de: " + to_string(this->descuento) + "%");
}

string Controller::reportarElimPais() {
	return guardarEnArchivo("Paises Eliminados.txt", "PAISES ELIMINADOS\n " + this->PaisesBorrados.imprimir());
}
string Controller::reportarElimCiudad() {
	return guardarEnArchivo("Ciudades Eliminados.txt", "CIUDADES ELIMINADOS\n " + this->CiudadesBorrados.imprimir());
}
string Controller::reportarElimRest() {
	return guardarEnArchivo("Restaurantes Eliminados.txt", "RESTAURANTES ELIMINADOS\n " + this->RestBorrados.imprimir());
}
string Controller::reportarElimMenu() {
	return guardarEnArchivo("Menús Eliminados.txt", "MENÚS ELIMINADOS\n " + this->MenuBorrados.imprimir());
}
string Controller::reportarElimProd() {
	return guardarEnArchivo("Productos Eliminados.txt", "PRODUCTOS ELIMINADOS\n " + this->ProdBorrados.imprimir());
}

string Controller::reportarFacturaMayor() {
	if (mayorFacturastring == "") {
		cout << "No hay facturas todavia" << endl;
	}
	string texto = "FACTURA DE MAYOR MONTO\n\n";
	texto += mayorFacturastring;
	return guardarEnArchivo("Factura de Mayor Monto.txt", texto);
}

string Controller::reportarFacturaMenor() {
	if (menorFacturastring == "") {
		cout << "No hay facturas todavia" << endl;
	}
	string texto = "FACTURA DE MENOR MONTO\n\n";
	texto += menorFacturastring;
	return guardarEnArchivo("Factura de Menor Monto.txt", texto);
}

string Controller::reportarCantidadProducto(int codPais, int codCiudad, int codRest, int codMenu, int codProducto) {
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		return "Pais Invalido o No Registrado";
	}
	if (nodoPais->getCiudad() == NULL) {
		return "No hay ciudades registradas.";
	}
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		return "Ciudad Invalida o No Registrada";
	}
	if (nodoCiudad->getRest() == NULL) {
		return "No hay restaurantes registrados.";
	}
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		return "Restaurante Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay menus registrados.";
	}
	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoRest == NULL) {
		return "Menu Invalido o No Registrado";
	}
	if (nodoRest->getMenu() == NULL) {
		return "No hay productos registrados.";
	}
	pnodoProducto nodoProducto = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProducto);
	if (nodoRest == NULL) {
		return "Producto Invalido o No Registrado";
	}
	string nombreProducto = nodoProducto->getNombre();
	return guardarEnArchivo("Cantidad del producto " + nombreProducto + ".txt", "La cantidad del producto es: " + to_string(nodoProducto->getcantidad()));
}

string Controller::reportarComprasCliente(int cedula) {
	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	if (Pagina_Cliente != NULL) {
		pnodoFila cliente = listaClientes.buscar(cedula);
		if (cliente == NULL) {
			int indice = Pagina_Cliente->getIndice(cedula);
			return guardarEnArchivo("Compras de un Cliente.txt", "	COMPRAS DE UN CLIENTE\n	" + Pagina_Cliente->getNombre(indice) + " no ha comprado todavia. ");
		}
		else {
			return guardarEnArchivo("Compras de un Cliente.txt", "	COMPRAS DE UN CLIENTE\n	" + cliente->nombreCliente + " ha comprado un total de " + to_string(cliente->lugar) + " veces.");
		}
	}
	else {
		return "Este codigo no se encuentra registrado.";
	}
}

string Controller::reportarProductoMasComprado() {
	string texto = "	PRODUCTO MAS COMPRADO\t\t";
	if (productomasComp == NULL) {
		return "No han habido compras";
	}
	texto += "\n	Nombre: " + productomasComp->getNombre() + " - Codigo: " + to_string(productomasComp->getcodProducto()) + " - Cantidad: " + to_string(productomasComp->getcomprado());

	return guardarEnArchivo("Producto Mas Comprado.txt", texto);
}

/*void Controller::reportes() {
	bool bandera = true;
	do {
		system("cls");
		cout << "****************************** REPORTAR ******************************" << endl;
		cout << endl << "Ingrese que desea reportar" << endl << endl;
		cout << "1.  Arbol de todos los paises." << endl;
		cout << "2.  Ciudades de un pais." << endl;
		cout << "3.  Restaurantes de un pais y ciudad especifica." << endl;
		cout << "4.  Arbol de clientes." << endl;
		cout << "5.  Compras de un cliente. " << endl;
		cout << "6.  Restaurante mas buscado." << endl;
		cout << "7.  Menu de un restaurante. " << endl;
		cout << "8.  Productos de un menu. " << endl;
		cout << "9.  Menu mas buscado." << endl;
		cout << "10. Producto mas comprado." << endl;
		cout << "11. Factura de mayor monto. " << endl;
		cout << "12. Factura de menor monto. " << endl;
		cout << "13. Consultar el precio de un producto." << endl;
		cout << "14. Consultar el descuento aplicado por pago con tarjeta. " << endl;
		cout << "15. Consultar la cantidad de un producto. " << endl;
		cout << "16. Salir." << endl;
		cout << endl << "----> ";
		int opcion;
		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			reportarPais();
			break;
		case 2:
			reportarCiudad();
			break;
		case 3:
			reportarRest();
			break;
		case 4:
			reportarCliente();
			break;
		case 5:
			reportarComprasCliente();
			break;
		case 6:
			reportarRestMasBuscado();
			break;
		case 7:
			reportarMenu();
			break;
		case 8:
			reportarProductos();
			break;
		case 9:
			reportarMenuMasBuscado();
			break;
		case 10:
			reportarProductoMasComprado();
			break;
		case 11:
			reportarFacturaMayor();
			break;
		case 12:
			reportarFacturaMenor();
			break;
		case 13:
			reportarPrecio();
			break;
		case 14:
			reportarDescuento();
			break;
		case 15:
			reportarCantidadProducto();
			break;
		case 16:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");
			break;
		}
	} while (bandera);
}*/

bool Controller::isInteger(const string str) {
	try {
		stoi(str);
		return true;
	}
	catch (const invalid_argument& e) {
		return false;
	}
	catch (const out_of_range& e) {
		return false;
	}
}