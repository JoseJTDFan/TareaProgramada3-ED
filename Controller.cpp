#include "Controller.h"

void Controller::insertarPais() {
	system("cls");
	cout << "****************************** INSERTAR PAIS ******************************" << endl;
	cout << endl << "Ingrese el codigo del pais a agregar: ";

	int codPais;
	string nombre;

	cin >> codPais;
	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		cout << endl << "Ingrese el nombre del pais a agregar: ";
		cin.ignore();
		getline(cin, nombre);
		baseDeDatos.insertPais(codPais, nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Pais();
		cout << endl << endl << "Se ha insertado el pais." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo ya se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::insertarCiudad() {
	system("cls");
	cout << "****************************** INSERTAR CIUDAD ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere insertar una ciudad: ";

	int codPais;
	string nombre;
	cin >> codPais;
	cout << endl;

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		cout << endl << "Pais Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << endl << "Ingrese el codigo de la ciudad a agregar: ";
	int codCiudad;
	cin >> codCiudad;

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ingrese el nombre de la ciudad a agregar: ";
		cin.ignore();
		getline(cin, nombre);
		baseDeDatos.insertCiudad(codPais, codCiudad, nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Ciudad(codPais);
		cout << endl << endl << "Se ha insertado la ciudad." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo ya se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::insertarRest() {
	system("cls");
	cout << "****************************** INSERTAR RESTAURANTE ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere insertar un restaurante: ";

	int codPais;
	string nombre;
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

	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere insertar un restaurante: ";
	int codCiudad;
	cin >> codCiudad;
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ciudad Invalida o No Registrada" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << endl << "Ingrese el codigo del restaurante a agregar: ";
	int codRest;
	cin >> codRest;
	bool bandera = nodoCiudad->getRest()->verificarMarca(false, codRest);
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (bandera == false) {
		cout << endl << "Ingrese el nombre del restaurante a agregar: ";
		cin.ignore();
		getline(cin, nombre);
		baseDeDatos.insertRest(codPais, codCiudad, codRest, nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
		cout << endl << endl << "Se ha insertado el restaurante." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo ya se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::insertarMenu() {
	system("cls");
	cout << "****************************** INSERTAR MENU ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere insertar un menu: ";

	int codPais;
	string nombre;
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

	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere insertar un menu: ";
	int codCiudad;
	cin >> codCiudad;
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

	cout << endl << endl << "Ingrese el codigo del restaurante que quiere insertar un menu: ";
	int codRest;
	cin >> codRest;
	pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
	if (nodoRest == NULL) {
		cout << endl << "Restaurante Invalido o No Registrado" << endl;
		system("pause");
		return;
	}

	system("cls");
	cout << endl << "Ingrese el codigo del menu a agregar: ";
	int codMenu;
	cin >> codMenu;

	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		cout << endl << "Ingrese el nombre del menu a agregar: ";
		cin.ignore();
		getline(cin, nombre);
		baseDeDatos.insertMenu(codPais, codCiudad, codRest, codMenu, nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);
		cout << endl << endl << "Se ha insertado el menu." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo ya se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::insertarProducto() {
	system("cls");
	cout << "****************************** INSERTAR PRODUCTO ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere insertar un producto: ";

	int codPais;
	string nombre;
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

	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere insertar un producto: ";
	int codCiudad;
	cin >> codCiudad;
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

	cout << endl << endl << "Ingrese el codigo del restaurante que quiere insertar un producto: ";
	int codRest;
	cin >> codRest;
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

	cout << endl << endl << "Ingrese el codigo del menu que quiere insertar un producto: ";
	int codMenu;
	cin >> codMenu;
	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		cout << endl << "Menu Invalido o No Registrado" << endl;
		system("pause");
		return;
	}

	system("cls");
	cout << endl << "Ingrese el codigo del producto a agregar: ";
	int codProd;
	cin >> codProd;

	pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
	if (nodoProd == NULL) {
		int kcal, precio, cantidad;
		cout << endl << "Ingrese el nombre del producto a agregar: ";
		cin.ignore();
		getline(cin, nombre);
		cout << endl << endl << "Ingrese las calorias del producto a agregar: ";
		cin >> kcal;
		cout << endl << endl << "Ingrese el precio del producto a agregar: ";
		cin >> precio;
		cout << endl << endl << "Ingrese la cantidad del producto a agregar: ";
		cin >> cantidad;
		baseDeDatos.insertProducto(codPais, codCiudad, codRest, codMenu, codProd, nombre, kcal, precio, cantidad);
		system("cls");
		baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
		cout << endl << endl << "Se ha insertado el producto." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo ya se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::insertarCliente() {
	system("cls");
	cout << "****************************** INSERTAR CLIENTE ******************************" << endl;
	cout << endl << "Ingrese la cedula del cliente a agregar: ";

	int cedula;
	string nombre;

	cin >> cedula;
	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	if (Pagina_Cliente == NULL) {
		cout << endl << "Ingrese el nombre del cliente a agregar: ";
		cin.ignore();
		getline(cin, nombre);
		clientes.inserta(cedula, nombre);
		system("cls");
		clientes.imprimir_Arbol();
		cout << endl << endl << "Se ha insertado el cliente." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo ya se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::insertar() {
	bool bandera = true;
	do {
		system("cls");
		cout << "****************************** INSERTAR ******************************" << endl;
		cout << endl << "Ingrese que desea insertar" << endl << endl;
		cout << "1. Un pais." << endl;
		cout << "2. Una ciudad." << endl;
		cout << "3. Un restaurante." << endl;
		cout << "4. Un menu." << endl;
		cout << "5. Un producto." << endl;
		cout << "6. Un cliente." << endl;
		cout << "7. Salir." << endl;
		cout << endl << "----> ";
		int opcion;

		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			insertarPais();
			break;
		case 2:
			insertarCiudad();
			break;
		case 3:
			insertarRest();
			break;
		case 4:
			insertarMenu();
			break;
		case 5:
			insertarProducto();
			break;
		case 6:
			insertarCliente();
			break;
		case 7:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");
			break;
		}
	} while (bandera);

}

void Controller::buscarPais() {

	system("cls");
	cout << "****************************** BUSCAR PAIS ******************************" << endl;
	//baseDeDatos.Mostrar();
	cout << endl << "Ingrese el codigo del pais a buscar: ";
	int codPais;
	cin >> codPais;

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais != NULL) {
		system("cls");
		cout << endl << "		* El codigo del pais es: " << nodoPais->getcodPais() << endl;
		cout << endl << "		* El nombre del pais es: " << nodoPais->getnombre() << endl << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::buscarCiudad() {
	system("cls");
	cout << "****************************** BUSCAR CIUDAD ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere buscar una ciudad: ";

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
	//nodoPais->ciudades.Mostrar();
	cout << endl << "Ingrese el codigo de la ciudad a buscar: ";
	int codCiudad;
	cin >> codCiudad;

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad != NULL) {
		system("cls");
		cout << endl << "		* El codigo de pais de la ciudad es: " << nodoCiudad->getcodPais() << endl;
		cout << endl << "		* El codigo de la ciudad es: " << nodoCiudad->getcodCiudad() << endl;
		cout << endl << "		* El nombre de la ciudad es: " << nodoCiudad->getnombre() << endl << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}

}

void Controller::buscarRest() {
	system("cls");
	cout << "****************************** BUSCAR RESTAURANTE ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere buscar un restaurante: ";

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
	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere buscar un restaurante: ";
	int codCiudad;
	cin >> codCiudad;
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
	//nodoCiudad->restaurantes.Mostrar();
	cout << endl << "Ingrese el codigo del restaurante a buscar: ";
	int codRest;
	cin >> codRest;

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
		cout << endl << "		* El codigo de pais del restaurante es: " << nodoRest->getcodPais() << endl;
		cout << endl << "		* El codigo de ciudad del restaurante es: " << nodoRest->getcodCiudad() << endl;
		cout << endl << "		* El codigo del restaurante es: " << nodoRest->getcodRest() << endl;
		cout << endl << "		* El nombre del restaurante es: " << nodoRest->getnombre() << endl << endl;
		system("pause");

	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}

}

void Controller::buscarMenu() {
	system("cls");
	cout << "****************************** BUSCAR MENU ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais en el que quiere buscar un menu: ";

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

	cout << endl << endl << "Ingrese el codigo de la ciudad en el que quiere buscar un menu: ";
	int codCiudad;
	cin >> codCiudad;
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

	cout << endl << endl << "Ingrese el codigo del restaurante en el que quiere buscar un menu: ";
	int codRest;
	cin >> codRest;
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
	//nodoRest->menus.Mostrar();
	cout << endl << "Ingrese el codigo del menu a buscar: ";
	int codMenu;
	cin >> codMenu;


	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu != NULL) {
		system("cls");
		pnodoM menus = listas.buscar(codPais, codCiudad, codRest, codMenu);
		if (menus == NULL) {
			listas.InsertarInicio(codPais, codCiudad, codRest, codMenu, nodoMenu->getNombre(), 1);
		}
		else {
			menus->cantidad++;
		}
		cout << endl << "		* El codigo de pais del menu es: " << nodoMenu->getcodPais() << endl;
		cout << endl << "		* El codigo de ciudad del menu es: " << nodoMenu->getcodCiudad() << endl;
		cout << endl << "		* El codigo de restaurante del menu es: " << nodoMenu->getcodRest() << endl;
		cout << endl << "		* El codigo del menu es: " << nodoMenu->getcodMenu() << endl;
		cout << endl << "		* El nombre del menu es: " << nodoMenu->getNombre() << endl << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::buscarProducto() {
	system("cls");
	cout << "****************************** BUSCAR PRODUCTO ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais en el que quiere buscar un producto: ";

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

	cout << endl << endl << "Ingrese el codigo de la ciudad en el que quiere buscar un producto: ";
	int codCiudad;
	cin >> codCiudad;
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

	cout << endl << endl << "Ingrese el codigo del restaurante en el que quiere buscar un producto: ";
	int codRest;
	cin >> codRest;
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

	cout << endl << endl << "Ingrese el codigo del menu en el que quiere buscar un producto: ";
	int codMenu;
	cin >> codMenu;
	pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
	if (nodoMenu == NULL) {
		cout << endl << "Menu Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	if (nodoMenu->getdirProducto() == NULL) {
		cout << endl << "No hay productos registrados." << endl;
		system("pause");
		return;
	}


	system("cls");
	//nodoMenu->productos.Mostrar();
	cout << endl << "Ingrese el codigo del producto a buscar: ";
	int codProd;
	cin >> codProd;


	pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
	if (nodoProd != NULL) {
		system("cls");
		cout << endl << "		* El codigo de pais del producto es: " << nodoProd->getcodPais() << endl;
		cout << endl << "		* El codigo de ciudad del producto es: " << nodoProd->getcodCiudad() << endl;
		cout << endl << "		* El codigo de restaurante del producto es: " << nodoProd->getcodRest() << endl;
		cout << endl << "		* El codigo de menu del producto es: " << nodoProd->getcodMenu() << endl;
		cout << endl << "		* El codigo  del producto es: " << nodoProd->getcodProducto() << endl;
		cout << endl << "		* El nombre del producto es: " << nodoProd->getNombre() << endl;
		cout << endl << "		* Las calorias del producto son: " << nodoProd->getkcal() << endl;
		cout << endl << "		* El precio del producto es: " << nodoProd->getprecio() << endl;
		cout << endl << "		* La cantidad del producto es: " << nodoProd->getcantidad() << endl << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::buscarClientes() {

	system("cls");
	cout << "****************************** BUSCAR CLIENTE ******************************" << endl;
	cout << endl << "Ingrese la cedula del cliente a buscar: ";
	int cedula;
	cin >> cedula;

	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	int indice = Pagina_Cliente->getIndice(cedula);
	if (Pagina_Cliente != NULL) {
		system("cls");
		cout << endl << "		* La cedula del cliente es: " << Pagina_Cliente->getCedula(indice) << endl;
		cout << endl << "		* El nombre del cliente es: " << Pagina_Cliente->getNombre(indice) << endl << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::buscar() {
	bool bandera = true;
	do {
		system("cls");
		cout << "****************************** BUSCAR ******************************" << endl;
		cout << endl << "Ingrese que desea buscar" << endl << endl;
		cout << "1. Un pais." << endl;
		cout << "2. Una ciudad." << endl;
		cout << "3. Un restaurante." << endl;
		cout << "4. Un menu." << endl;
		cout << "5. Un producto." << endl;
		cout << "6. Un cliente." << endl;
		cout << "7. Salir." << endl;
		cout << endl << "----> ";
		int opcion;

		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			buscarPais();
			break;
		case 2:
			buscarCiudad();
			break;
		case 3:
			buscarRest();
			break;
		case 4:
			buscarMenu();
			break;
		case 5:
			buscarProducto();
			break;
		case 6:
			buscarClientes();
			break;
		case 7:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");
			break;
		}
	} while (bandera);

}

void Controller::modificarPais() {

	system("cls");
	cout << "****************************** MODIFICAR PAIS ******************************" << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais a modificar: ";
	int codPais;
	cin >> codPais;

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais != NULL) {
		system("cls");
		string nombre;
		cout << endl << "Ingrese el nuevo nombre del pais: ";
		cin.ignore();
		getline(cin, nombre);
		nodoPais->setnombre(nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Pais();
		cout << endl << endl << "Se ha modificado el pais." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::modificarCiudad() {
	system("cls");
	cout << "****************************** MODIFICAR CIUDAD ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere modificar una ciudad: ";

	int codPais;
	cin >> codPais;
	cout << endl;

	pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
	if (nodoPais == NULL) {
		cout << endl << "Pais Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Ciudad(codPais);
	cout << endl << endl << "Ingrese el codigo de la ciudad a modificar: ";
	int codCiudad;
	cin >> codCiudad;

	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad != NULL) {
		system("cls");
		string nombre;
		cout << endl << "Ingrese el nuevo nombre de la ciudad: ";
		cin.ignore();
		getline(cin, nombre);
		nodoCiudad->setnombre(nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Ciudad(codPais);
		cout << endl << endl << "Se ha modificado la ciudad." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::modificarRest() {
	system("cls");
	cout << "****************************** MODIFICAR RESTAURANTE ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere modificar un restaurante: ";

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
	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere modificar un restaurante: ";
	int codCiudad;
	cin >> codCiudad;
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ciudad Invalida o No Registrada" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
	cout << endl << endl << "Ingrese el codigo del restaurante a modificar: ";
	int codRest;
	cin >> codRest;

	pnodoRest nodoRest = nodoCiudad->getRest()->buscarRest(codRest);

	if (nodoRest != NULL) {
		system("cls");
		string nombre;
		cout << endl << "Ingrese el nuevo nombre del restaurante: ";
		cin.ignore();
		getline(cin, nombre);
		nodoRest->setNombre(nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
		cout << endl << endl << "Se ha modificado el restaurante." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}

}

void Controller::modificarMenu() {
	;
	system("cls");
	cout << "****************************** MODIFICAR MENU ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere modificar un menu: ";
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
	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere modificar un menu: ";
	int codCiudad;
	cin >> codCiudad;
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ciudad Invalida o No Registrada" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
	cout << endl << endl << "Ingrese el codigo del restaurante que quiere modificar un menu: ";
	int codRest;
	cin >> codRest;
	pnodoRest nodoRest = nodoCiudad->getRest()->buscarRest(codRest);
	if (nodoRest == NULL) {
		cout << endl << "Restaurante Invalido o No Registrado" << endl;
		system("pause");
		return;
	}

	system("cls");
	cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);
	cout << endl << endl << "Ingrese el codigo del menu a modificar: ";
	int codMenu;
	cin >> codMenu;
	pnodoMenu nodoMenu = nodoRest->getMenu()->buscarMenu(codMenu);
	if (nodoMenu != NULL) {
		system("cls");
		string nombre;
		cout << endl << "Ingrese el nuevo nombre del menu: ";
		cin.ignore();
		getline(cin, nombre);
		nodoMenu->setNombre(nombre);
		system("cls");
		cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);
		cout << endl << endl << "Se ha modificado el menu" << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}

}

void Controller::modificarProducto() {
	;
	system("cls");
	cout << "****************************** MODIFICAR PRODUCTO ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais que quiere modificar un producto: ";
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
	cout << endl << endl << "Ingrese el codigo de la ciudad que quiere modificar un producto: ";
	int codCiudad;
	cin >> codCiudad;
	pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
	if (nodoCiudad == NULL) {
		cout << endl << "Ciudad Invalida o No Registrada" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);
	cout << endl << endl << "Ingrese el codigo del restaurante que quiere modificar un producto: ";
	int codRest;
	cin >> codRest;
	pnodoRest nodoRest = nodoCiudad->getRest()->buscarRest(codRest);
	if (nodoRest == NULL) {
		cout << endl << "Restaurante Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	system("cls");
	cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);
	cout << endl << endl << "Ingrese el codigo del menu que quiere modificar un producto: ";
	int codMenu;
	cin >> codMenu;
	pnodoMenu nodoMenu = nodoRest->getMenu()->buscarMenu(codMenu);
	if (nodoMenu == NULL) {
		cout << endl << "Menu Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	system("cls");
	baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
	cout << endl << endl << "Ingrese el codigo del producto a modificar: ";
	int codProducto;
	cin >> codProducto;
	pnodoProducto nodoProducto = nodoMenu->getdirProducto()->buscarProducto(codProducto);
	if (nodoProducto != NULL) {
		system("cls");
		bool bandera = true;
		do {
			system("cls");
			cout << "****************************** MODIFICAR PRODUCTO ******************************" << endl;
			cout << endl << "Ingrese el numero de la opcion que desea modificar" << endl << endl;
			cout << "1. El nombre." << endl;
			cout << "2. Las calorias." << endl;
			cout << "3. El precio." << endl;
			cout << "4. Insertar mas cantidad. " << endl;
			cout << "5. Salir." << endl;
			cout << endl << "----> ";
			int opcion;
			cin >> opcion;
			cout << endl;
			switch (opcion) {
			case 1: {
				system("cls");
				string nombreNuevo;
				cout << endl << "Ingrese el nuevo nombre del producto: ";
				cin.ignore();
				getline(cin, nombreNuevo);
				nodoProducto->setnombre(nombreNuevo);
				system("cls");
				baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
				cout << endl << "Se ha modificado el nombre del producto." << endl;
				system("pause");
				break;
			}
			case 2: {
				system("cls");
				int kcalNuevo;
				cout << endl << "Ingrese las nuevas calorias del producto: ";
				cin >> kcalNuevo;
				nodoProducto->setkcal(kcalNuevo);
				system("cls");
				baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
				cout << endl << "Se han modificado las calorias del producto." << endl;
				system("pause");
				break;
			}
			case 3: {
				system("cls");
				int precioNuevo;
				cout << endl << "Ingrese el nuevo precio del producto: ";
				cin >> precioNuevo;
				nodoProducto->setprecio(precioNuevo);
				system("cls");
				baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
				cout << endl << "Se ha modificado el precio del producto." << endl;
				system("pause");
				break;
			}
			case 4: {
				system("cls");
				int cantidad = nodoProducto->getcantidad();
				int cantidadExtra;
				cout << endl << "Ingrese la cantidad que se va a insertar: ";
				cin >> cantidadExtra;
				nodoProducto->setcantidad(cantidad + cantidadExtra);
				system("cls");
				baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
				cout << endl << "Se ha insertado mas cantidad del producto." << endl;
				system("pause");
				break;
			}
			case 5:
				bandera = false;
				break;
			default:
				cout << "Ingrese un numero valido" << endl;
				system("pause");
				break;
			}
		} while (bandera);
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
		return;
	}
}

void Controller::modificarCliente() {

	system("cls");
	cout << "****************************** MODIFICAR CLIENTE ******************************" << endl;
	clientes.imprimir_Arbol();
	cout << endl << "Ingrese la cedula del cliente a modificar: ";
	int cedula;
	cin >> cedula;
	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	int indice = Pagina_Cliente->getIndice(cedula);
	if (Pagina_Cliente != NULL) {
		system("cls");
		cout << endl << "Ingrese el nuevo nombre del cliente: ";
		string nombre;
		cin.ignore();
		getline(cin, nombre);
		Pagina_Cliente->setNombre(indice, nombre);
		system("cls");
		clientes.imprimir_Arbol();
		cout << endl << endl << "Se ha modificado el cliente." << endl;
		system("pause");
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::modificarCompra() {
	system("cls");
	cout << "****************************** MODIFICAR COMPRA ******************************" << endl;

	cout << endl << "Ingrese su numero de cedula: ";
	int cedula;
	cin >> cedula;

	puntero_Cliente nodoClientes = clientes.buscarCliente(cedula);

	pnodoFila clienteNodo = colaClientes.buscar(cedula);

	if (clienteNodo == NULL) {
		cout << endl << "El cliente no esta en la cola." << endl;
		system("pause");
		return;
	}



	bool bandera = true;
	do {
		system("cls");
		cout << endl << "Que desea modificar?" << endl;
		cout << "1.Cantidad de un producto" << endl;
		cout << "2.Agregar un producto" << endl;
		cout << "3.Eliminar un producto." << endl;
		cout << endl << "--> ";
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1:
		{

			system("cls");
			int prod, cantidad;
			clienteNodo->productos.MostrarCompra();
			cout << endl << "Que cantidad desea modificar? (Ingrese Codigo de Producto): ";
			cin >> prod;
			pnodoProductos producto;
			producto = clienteNodo->productos.buscarProducto(prod);
			if (producto == NULL) {
				cout << endl << "Producto no Registrado." << endl;
				system("pause");
				return;
			}
			pnodoProducto productoOriginal = baseDeDatos.buscarProducto(producto->codPais, producto->codCiudad, producto->codRest, producto->codMenu, producto->codProducto);
			cout << endl << "Cantidad disponible: " << to_string(productoOriginal->getcantidad());
			cout << endl << endl << "Nueva Cantidad: ";
			cin >> cantidad;
			if (cantidad > productoOriginal->getcantidad()) {
				cout << endl << "Cantidad ingresada supera a la disponible" << endl;
				system("pause");
				return;
			}

			productoOriginal->setcantidad(productoOriginal->getcantidad() + (producto->cantidad - cantidad));
			producto->cantidad = cantidad;

			system("cls");
			clienteNodo->productos.MostrarCompra();
			cout << endl << "Cantidad disponible en Inventario: " << to_string(productoOriginal->getcantidad());
			cout << endl << "Cantidad cambiada con exito." << endl;
			system("pause");
			bandera = false;
		}
		break;
		case 2:
		{
			do {

				system("cls");
				cout << endl << endl;
				cout << baseDeDatos.imprimir_Pais();
				cout << endl << endl << "Ingrese el codigo del pais en el que quiere comprar: ";

				int codPais;
				cin >> codPais;
				cout << endl;

				pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
				if (nodoPais == NULL) {
					cout << endl << "Pais Invalido o No Registrado" << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				if (nodoPais->getCiudad() == NULL) {
					cout << endl << "No hay ciudades registradas." << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				system("cls");
				cout << baseDeDatos.imprimir_Ciudad(codPais);

				cout << endl << endl << "Ingrese el codigo de la ciudad en el que quiere comprar: ";
				int codCiudad;
				cin >> codCiudad;
				pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
				if (nodoCiudad == NULL) {
					cout << endl << "Ciudad Invalida o No Registrada" << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				if (nodoCiudad->getRest() == NULL) {
					cout << endl << "No hay restaurantes registrados." << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}

				system("cls");
				cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);

				cout << endl << endl << "Ingrese el codigo del restaurante en el que quiere comprar: ";
				int codRest;
				cin >> codRest;
				pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
				if (nodoRest == NULL) {
					cout << endl << "Restaurante Invalido o No Registrado" << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				if (nodoRest->getMenu() == NULL) {
					cout << endl << "No hay menus registrados." << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				do {

					system("cls");
					cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);

					cout << endl << endl << "Ingrese el codigo del menu en el que quiere comprar: ";
					int codMenu;
					cin >> codMenu;
					pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
					if (nodoMenu == NULL) {
						cout << endl << "Menu Invalido o No Registrado" << endl;
						system("pause");
						bandera = desicion(bandera);
						continue;
					}
					if (nodoMenu->getdirProducto() == NULL) {
						cout << endl << "No hay productos registrados." << endl;
						system("pause");
						bandera = desicion(bandera);
						continue;
					}


					system("cls");
					baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
					cout << endl << endl << "Ingrese el codigo del producto a comprar: ";
					int codProd;
					cin >> codProd;


					pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
					if (nodoProd != NULL) {
						int cantidad;

						cout << endl << "�Cuantas unidades desea comprar de " << nodoProd->getNombre() << "?: ";
						cin >> cantidad;
						if (cantidad <= nodoProd->getcantidad()) {
							nodoProd->setcantidad(nodoProd->getcantidad() - cantidad);
							clienteNodo->productos.InsertarFinal(codPais, codCiudad, codRest, codMenu, codProd, nodoProd->getNombre(), cantidad, nodoProd->getprecio());
							system("cls");
							nodoProd->setcomprado(nodoProd->getcomprado() + 1);
							//						clienteNodo->
							clienteNodo->productos.MostrarCompra();
							cout << endl << "Se ha insertado el producto a su carrito." << endl;
							//						if(banderaCompra==false){
							//							
							//						}
						}
						else {
							cout << endl << "Cantidad ingresada superior a la almacenada." << endl;
						}
						system("pause");
						bandera = desicion(bandera);
						continue;
					}
					else {
						cout << endl << "Este codigo no se encuentra registrado." << endl;
						system("pause");
						bandera = desicion(bandera);
						continue;
					}
				} while (bandera == true);
			} while (bandera == true);
			bandera = false;
		}
		break;
		case 3:
		{
			system("cls");
			int prod, cantidad;
			clienteNodo->productos.MostrarCompra();
			cout << endl << "Que producto desea eliminar? (Ingrese Codigo de Producto): ";
			cin >> prod;
			pnodoProductos producto;
			producto = clienteNodo->productos.buscarProducto(prod);
			if (producto == NULL) {
				cout << endl << "Producto no Registrado." << endl;
				system("pause");
				return;
			}
			int pos = clienteNodo->productos.getPosicion(prod);
			pnodoProducto nodoProd = baseDeDatos.buscarProducto(producto->codPais, producto->codCiudad, producto->codRest, producto->codMenu, producto->codProducto);
			nodoProd->setcomprado(nodoProd->getcomprado() - 1);
			clienteNodo->productos.BorrarPosicion(pos);
			if (clienteNodo->productos.ListaVacia()) {
				int posCliente = colaClientes.getPosicion(cedula);
				colaClientes.borrarPosicion(posCliente);
			}
		}
		break;
		bandera = false;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");
		}
	} while (bandera == true);
}

void Controller::modificar() {
	bool bandera = true;
	do {
		system("cls");
		cout << "****************************** MODIFICAR ******************************" << endl;
		cout << endl << "Ingrese que desea modificar" << endl << endl;
		cout << "1. Un pais." << endl;
		cout << "2. Una ciudad." << endl;
		cout << "3. Un restaurante." << endl;
		cout << "4. Un menu." << endl;
		cout << "5. Un producto." << endl;
		cout << "6. Un cliente." << endl;
		cout << "7. Una compra" << endl;
		cout << "8. Salir." << endl;
		cout << endl << "----> ";
		int opcion;

		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			modificarPais();
			break;
		case 2:
			modificarCiudad();
			break;
		case 3:
			modificarRest();
			break;
		case 4:
			modificarMenu();
			break;
		case 5:
			modificarProducto();
			break;
		case 6:
			modificarCliente();
			break;
		case 7:
			modificarCompra();
			break;
		case 8:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");
			break;
		}
	} while (bandera);
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

void Controller::comprar() {
	system("cls");
	cout << "****************************** COMPRAR ******************************" << endl;

	if (colaClientes.largoLista() == 5) {
		cout << endl << "La cola esta llena, no puede comprar." << endl;
		system("pause");
		return;
	}

	cout << endl << "Ingrese su numero de cedula: ";
	int cedula;
	cin >> cedula;

	puntero_Cliente nodoClientes = clientes.buscarCliente(cedula);

	if (colaClientes.buscar(cedula) != NULL) {
		cout << endl << "El cliente ya esta en la cola." << endl;
		system("pause");
		return;
	}

	if (nodoClientes != NULL) {
		listaProductos productos;
		int indice = nodoClientes->getIndice(cedula);
		pnodoFila clienteNodo = new NodoFila();
		clienteNodo->cedula = cedula;
		clienteNodo->nombreCliente = nodoClientes->getNombre(indice);
		bool bandera = true, banderaCompra = false;
		banderaCompra = false;
		do {
			system("cls");
			cout << endl << endl;
			cout << baseDeDatos.imprimir_Pais();
			cout << endl << endl << "Ingrese el codigo del pais en el que quiere comprar: ";

			int codPais;
			cin >> codPais;
			cout << endl;

			pnodoPais nodoPais = baseDeDatos.buscarPais(codPais);
			if (nodoPais == NULL) {
				cout << endl << "Pais Invalido o No Registrado" << endl;
				system("pause");
				bandera = desicion(bandera);
				continue;
			}
			if (nodoPais->getCiudad() == NULL) {
				cout << endl << "No hay ciudades registradas." << endl;
				system("pause");
				bandera = desicion(bandera);
				continue;
			}
			system("cls");
			cout << baseDeDatos.imprimir_Ciudad(codPais);

			cout << endl << endl << "Ingrese el codigo de la ciudad en el que quiere comprar: ";
			int codCiudad;
			cin >> codCiudad;
			pnodoCiudad nodoCiudad = baseDeDatos.buscarCiudad(codPais, codCiudad);
			if (nodoCiudad == NULL) {
				cout << endl << "Ciudad Invalida o No Registrada" << endl;
				system("pause");
				bandera = desicion(bandera);
				continue;
			}
			if (nodoCiudad->getRest() == NULL) {
				cout << endl << "No hay restaurantes registrados." << endl;
				system("pause");
				bandera = desicion(bandera);
				continue;
			}

			system("cls");
			cout << baseDeDatos.imprimir_Rest(codPais, codCiudad);

			cout << endl << endl << "Ingrese el codigo del restaurante en el que quiere comprar: ";
			int codRest;
			cin >> codRest;
			pnodoRest nodoRest = baseDeDatos.buscarRest(codPais, codCiudad, codRest);
			if (nodoRest == NULL) {
				cout << endl << "Restaurante Invalido o No Registrado" << endl;
				system("pause");
				bandera = desicion(bandera);
				continue;
			}
			if (nodoRest->getMenu() == NULL) {
				cout << endl << "No hay menus registrados." << endl;
				system("pause");
				bandera = desicion(bandera);
				continue;
			}
			do {

				system("cls");
				cout << baseDeDatos.imprimir_Menu(codPais, codCiudad, codRest);

				cout << endl << endl << "Ingrese el codigo del menu en el que quiere comprar: ";
				int codMenu;
				cin >> codMenu;
				pnodoMenu nodoMenu = baseDeDatos.buscarMenu(codPais, codCiudad, codRest, codMenu);
				if (nodoMenu == NULL) {
					cout << endl << "Menu Invalido o No Registrado" << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				if (nodoMenu->getdirProducto() == NULL) {
					cout << endl << "No hay productos registrados." << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}


				system("cls");
				baseDeDatos.imprimir_Producto(codPais, codCiudad, codRest, codMenu);
				cout << endl << endl << "Ingrese el codigo del producto a comprar: ";
				int codProd;
				cin >> codProd;


				pnodoProducto nodoProd = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProd);
				if (nodoProd != NULL) {
					int cantidad;

					cout << endl << "�Cuantas unidades desea comprar de " << nodoProd->getNombre() << "?: ";
					cin >> cantidad;
					if (cantidad <= nodoProd->getcantidad()) {
						nodoProd->setcantidad(nodoProd->getcantidad() - cantidad);
						clienteNodo->productos.InsertarFinal(codPais, codCiudad, codRest, codMenu, codProd, nodoProd->getNombre(), cantidad, nodoProd->getprecio());
						nodoProd->setcomprado(nodoProd->getcomprado() + 1);
						if (productomasComp == NULL || productomasComp->getcomprado() > nodoProd->getcomprado()) {
							productomasComp = nodoProd;
						}

						system("cls");
						//						clienteNodo->
						clienteNodo->productos.MostrarCompra();
						cout << endl << "Se ha insertado el producto a su carrito." << endl;
						//						if(banderaCompra==false){
						//							
						//						}
						banderaCompra = true;
					}
					else {
						cout << endl << "Cantidad ingresada superior a la almacenada." << endl;
					}
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
				else {
					cout << endl << "Este codigo no se encuentra registrado." << endl;
					system("pause");
					bandera = desicion(bandera);
					continue;
				}
			} while (bandera == true && banderaCompra == true);
		} while (bandera == true);
		system("cls");
		if (banderaCompra == true) {
			bool bandera2 = true;
			//			int lugar=0;
			do {
				system("cls");
				cout << endl << "Llevar o comer en el restaurante?" << endl;
				cout << "1.Llevar." << endl;
				cout << "2.Comer en el restaurante." << endl;
				cout << endl << "-->";
				int opcion;
				cin >> opcion;
				switch (opcion) {
				case 1:
					clienteNodo->lugar = 1;
					bandera2 = false;
					break;
				case 2:
					clienteNodo->lugar = 2;
					bandera2 = false;
					break;
				default:
					cout << "Ingrese un numero valido" << endl;
					system("pause");
				}
			} while (bandera2 == true);
			system("cls");
			colaClientes.InsertarFinal(clienteNodo);
			colaClientes.imprimir();

			//			int indice = nodoClientes->getIndice(cedula);
			pnodoFila nodoCompra = listaClientes.buscar(cedula);
			if (nodoCompra == NULL) {
				listaClientes.InsertarInicio(cedula, clienteNodo->nombreCliente, 1);
			}
			else {
				nodoCompra->lugar++;
			}
			//			nodoClientes->setCompras(indice, nodoClientes->getCompras(indice)+1);
			//			
			//			colaClientes.InsertarFinal(nodoClientes->getCedula(indice), nodoClientes->getNombre(indice), lugar, productos);
			system("pause");
		}
	}
	else {
		cout << endl << "Este cliente no se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::pagar() {
	system("cls");
	cout << "****************************** PAGAR ******************************" << endl;

	if (colaClientes.ListaVacia()) {
		cout << endl << "La cola esta vacia, primero haga fila." << endl;
		system("pause");
		return;
	}
	//	
	//	cout<<endl<<"Ingrese su numero de cedula: ";
	//	int cedula;
	//	cin>>cedula;
	//	
	//	puntero_Cliente nodoClientes = clientes.buscarCliente(cedula);
	//	
	//	if(colaClientes.buscar(cedula)==NULL){
	//		cout<<endl<<"El cliente no esta en la cola."<<endl;
	//		system("pause");
	//		return;
	//	}
	//	
	bool bandera = true;
	do {
		pnodoFila clienteFila = colaClientes.primero;
		system("cls");
		cout << endl << clienteFila->nombreCliente << " desea facturar?" << endl;
		cout << "1.Si" << endl;
		cout << "2.No" << endl;
		cout << endl << "-->";
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1:
		{
			bool bandera2 = true;
			int desc = 0;
			do {
				system("cls");
				cout << endl << "Con que desea pagar?" << endl;
				cout << "1.Tarjeta" << endl;
				cout << "2.Efectivo" << endl;
				cout << endl << "-->";
				int opcion2;
				cin >> opcion2;
				switch (opcion2) {
				case 1:
					desc = 3;
					bandera2 = false;
					break;
				case 2:
					desc = 1;
					bandera2 = false;
					break;
				default:
					cout << "Ingrese un numero valido" << endl;
					system("pause");

				}
			} while (bandera2 == true);
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
			guardarEnArchivo(to_string(clienteFila->cedula) + "_" + to_string(facturas + 1) + ".txt", facturaTexto);
			//				cout<<endl<<endl<<"Se ha generado la factura en "<<to_string(clienteFila->cedula)<<"_"<<to_string(facturas+1)<<".txt"<<endl;
			facturas++;
			colaClientes.BorrarInicio();
		}
		bandera = false;
		break;
		case 2:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");

		}
	} while (bandera == true);
}

//*************** REPORTES **************************

void Controller::guardarEnArchivo(string nombreArchivo, string texto) {
	ofstream archivo(nombreArchivo);

	if (!archivo.is_open()) {
		cerr << "No se pudo abrir el archivo: " << nombreArchivo << endl;
		return;
	}

	archivo << texto;

	archivo.close();

	cout << "Reporte realizado en el archivo: " << nombreArchivo << endl;
	system("pause");
}

void Controller::reportarPais() {
	system("cls");
	cout << "****************************** REPORTE DE PAISES ******************************" << endl << endl;
	guardarEnArchivo("Arbol de Paises.txt", baseDeDatos.reportePais());
}

void Controller::reportarCiudad() {
	system("cls");
	cout << "****************************** REPORTE DE CIUDADES ******************************" << endl << endl;
	cout << baseDeDatos.imprimir_Pais();
	cout << endl << endl << "Ingrese el codigo del pais: ";
	int codPais;
	string nombre;
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
		cout << endl << "No se ha generado el reporte." << endl;
		system("pause");
		return;
	}
	nombre = nodoPais->getnombre();
	guardarEnArchivo("Arbol de Ciudades de " + nombre + ".txt", baseDeDatos.reporteCiudad(nodoPais));
}

void Controller::reportarRest() {
	system("cls");
	cout << "****************************** REPORTE DE RESTAURANTES ******************************" << endl << endl;
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
	string nombreCiudad = nodoCiudad->getnombre();
	guardarEnArchivo("Arbol de Restaurantes de la ciudad " + nombreCiudad + ".txt", baseDeDatos.reporteRest(nodoCiudad));
}

void Controller::reportarCliente() {
	system("cls");
	cout << "****************************** REPORTE DE CLIENTES ******************************" << endl << endl;
	guardarEnArchivo("Arbol de Clientes.txt", clientes.reporteCliente());
}

void Controller::reportarMenu() {
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
}

void Controller::reportarProductos() {
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
}

void Controller::reportarMenuMasBuscado() {
	system("cls");
	cout << "****************************** MENU MAS BUSCADO ******************************" << endl << endl;
	string texto = "	MENU MAS BUSCADO\n\n	";
	texto += listas.MasBuscado();
	guardarEnArchivo("Menu Mas Buscado.txt", texto);
}

void Controller::reportarRestMasBuscado() {
	system("cls");
	cout << "****************************** RESTAURANTE MAS BUSCADO ******************************" << endl << endl;
	string texto = "	RESTAURANTE MAS BUSCADO\n\n	";
	texto += listas.MasBuscadoR();
	guardarEnArchivo("Restaurante Mas Buscado.txt", texto);
}

void Controller::reportarPrecio() {
	system("cls");
	cout << "****************************** REPORTE DE PRECIO ******************************" << endl << endl;
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
	system("cls");
	//baseDeDatos.imprimir_Producto(codPais,  codCiudad, codRest, codMenu);
	cout << endl << endl << "Ingrese el codigo del producto: ";
	int codProducto;
	cin >> codProducto;
	cout << endl;
	pnodoProducto nodoProducto = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProducto);
	if (nodoRest == NULL) {
		cout << endl << "Producto Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	string nombreProducto = nodoProducto->getNombre();
	guardarEnArchivo("Precio del producto " + nombreProducto + ".txt", "Precio del producto: " + to_string(nodoProducto->getprecio()) + " colones");
}

void Controller::reportarDescuento() {
	system("cls");
	cout << "****************************** REPORTE DE DESCUENTO ******************************" << endl << endl;
	guardarEnArchivo("Descuento.txt", "El descuento por pago en tarjeta es de: " + to_string(this->descuento) + "%");
}

void Controller::reportarFacturaMayor() {
	system("cls");
	cout << "****************************** FACTURA DE MAYOR MONTO ******************************" << endl << endl;
	if (mayorFacturastring == "") {
		cout << "No hay facturas todavia" << endl;
	}
	string texto = "FACTURA DE MAYOR MONTO\n\n";
	texto += mayorFacturastring;
	guardarEnArchivo("Factura de Mayor Monto.txt", texto);
}

void Controller::reportarFacturaMenor() {
	system("cls");
	cout << "****************************** FACTURA DE MENOR MONTO ******************************" << endl << endl;
	if (menorFacturastring == "") {
		cout << "No hay facturas todavia" << endl;
	}
	string texto = "FACTURA DE MENOR MONTO\n\n";
	texto += menorFacturastring;
	guardarEnArchivo("Factura de Menor Monto.txt", texto);
}

void Controller::reportarCantidadProducto() {
	system("cls");
	cout << "****************************** REPORTE DE CANTIDAD ******************************" << endl << endl;
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
	system("cls");
	//baseDeDatos.imprimir_Producto(codPais,  codCiudad, codRest, codMenu);
	cout << endl << endl << "Ingrese el codigo del producto: ";
	int codProducto;
	cin >> codProducto;
	cout << endl;
	pnodoProducto nodoProducto = baseDeDatos.buscarProducto(codPais, codCiudad, codRest, codMenu, codProducto);
	if (nodoRest == NULL) {
		cout << endl << "Producto Invalido o No Registrado" << endl;
		system("pause");
		return;
	}
	string nombreProducto = nodoProducto->getNombre();
	guardarEnArchivo("Cantidad del producto " + nombreProducto + ".txt", "Cantidad del producto: " + to_string(nodoProducto->getcantidad()));
}

void Controller::reportarComprasCliente() {
	system("cls");
	cout << "****************************** COMPRAS DE UN CLIENTE ******************************" << endl << endl;
	cout << endl << "Ingrese la cedula del cliente a buscar: ";
	int cedula;
	cin >> cedula;

	puntero_Cliente Pagina_Cliente = clientes.buscarCliente(cedula);
	if (Pagina_Cliente != NULL) {
		system("cls");

		pnodoFila cliente = listaClientes.buscar(cedula);
		if (cliente == NULL) {
			int indice = Pagina_Cliente->getIndice(cedula);
			guardarEnArchivo("Compras de un Cliente.txt", "	COMPRAS DE UN CLIENTE\n	" + Pagina_Cliente->getNombre(indice) + " no ha comprado todavia. ");
		}
		else {
			guardarEnArchivo("Compras de un Cliente.txt", "	COMPRAS DE UN CLIENTE\n	" + cliente->nombreCliente + " ha comprado un total de " + to_string(cliente->lugar) + " veces.");
		}
	}
	else {
		cout << endl << "Este codigo no se encuentra registrado." << endl;
		system("pause");
	}
}

void Controller::reportarProductoMasComprado() {
	system("cls");
	cout << "****************************** PRODUCTO MAS COMPRADO ******************************" << endl << endl;
	string texto = "	PRODUCTO MAS COMPRADO\t\t";
	if (productomasComp == NULL) {
		cout << "No han habido compras" << endl;
		system("pause");
		return;
	}
	texto += "\n	Nombre: " + productomasComp->getNombre() + " - Codigo: " + to_string(productomasComp->getcodProducto()) + " - Cantidad: " + to_string(productomasComp->getcomprado());

	guardarEnArchivo("Producto Mas Comprado.txt", texto);
}

void Controller::reportes() {
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
}

void Controller::menu() {
	bool bandera = true;
	do {
		system("cls");
		cout << "			       $$$    $$$" << endl;
		cout << "			      $   $  $   $" << endl;
		cout << "			     $     $$     $" << endl;
		cout << "		   	    $$     $$     $$" << endl;
		cout << "			    $$     $$     $$" << endl;
		cout << "			    $$     $$     $$" << endl;
		cout << "****************************** MC'DONALD'S ******************************" << endl;
		cout << endl << "�Bienvenido a la base de datos de McDonald's! �Que desea realizar?" << endl << endl;
		cout << "1. Insertar." << endl;
		cout << "2. Buscar." << endl;
		cout << "3. Modificar" << endl;
		cout << "4. Registrar Compra" << endl;
		cout << "5. Pagar" << endl;
		cout << "6. Reportar" << endl;
		cout << "7. Salir" << endl;
		cout << endl << "----> ";
		int opcion;
		cin >> opcion;
		cout << endl;
		switch (opcion) {
		case 1:
			insertar();
			menu();
			break;
		case 2:
			buscar();
			break;
		case 3:
			modificar();
			break;
		case 4:
			comprar();
			break;
		case 5:
			pagar();
			break;
		case 6:
			reportes();
			break;
		case 7:
			bandera = false;
			break;
		default:
			cout << "Ingrese un numero valido" << endl;
			system("pause");
			break;
		}
	} while (bandera);


}