#include "lista.h"

lista::~lista()
{
    pnodoM aux;

    while (primero) {
        aux = primero;
        primero = primero->siguiente;
        delete aux;
    }
    primero = NULL;
}

int lista::largoLista() {
    int cont = 0;

    pnodoM aux = primero;
    if (ListaVacia()) {
        return cont;
    }
    else {
        while (aux != NULL) {
            aux = aux->siguiente;
            cont++;
        }
        return cont;
        cout << endl;
    }

} 

void lista::InsertarInicio(int codPais, int codCiudad, int codRest, int codMenu, string nombre, int cantidad)
{
    if (ListaVacia())
    {

        primero = new nodoM(codPais, codCiudad, codRest, codMenu, nombre, cantidad);

    }
    else
    {

        primero = new nodoM(codPais, codCiudad, codRest, codMenu, nombre, cantidad, primero);




    }
}

void lista::eliminar(int cedula) {
        pnodoM actual = primero;
        pnodoM anterior = nullptr;

        // Buscar el nodo con el valor deseado
        while (actual && actual->codCiudad != cedula) {
            anterior = actual;
            actual = actual->siguiente;
        }

        // Verificar si se encontró el nodo
        if (actual != nullptr) {
            // Si el nodo a eliminar es el primero
            if (anterior == nullptr) {
                primero = actual->siguiente;
            }
            else {
                // Si el nodo a eliminar no es el primero
                anterior->siguiente = actual->siguiente;
            }

            // Liberar la memoria del nodo eliminado
            delete actual;
        }
}

string lista::imprimir() {
    if (primero == NULL) {
        return "No hay nodos eliminados";
    }
    pnodoM aux = primero;
    string texto;
    while (aux) {
        if (aux->codCiudad == -1 && aux->codRest == -1 && aux->codMenu == -1 && aux->cantidad == -1) {
            texto += to_string(aux->codPais)+ " - ";
            texto += aux->nombre + "\n";
        }
        else if (aux->codRest == -1 && aux->codMenu == -1 && aux->cantidad == -1) {
            texto += to_string(aux->codPais) + " - ";
            texto += to_string(aux->codCiudad) + " - ";
            texto += aux->nombre + "\n";
        }
        else if (aux->codMenu == -1 && aux->cantidad == -1) {
            texto += to_string(aux->codPais) + " - ";
            texto += to_string(aux->codCiudad) + " - ";
            texto += to_string(aux->codRest) + " - ";
            texto += aux->nombre + "\n";
        }
        else if (aux->cantidad == -1) {
            texto += to_string(aux->codPais) + " - ";
            texto += to_string(aux->codCiudad) + " - ";
            texto += to_string(aux->codRest) + " - ";
            texto += to_string(aux->codMenu) + " - ";
            texto += aux->nombre + "\n";
        }
        else {
            texto += to_string(aux->codPais) + " - ";
            texto += to_string(aux->codCiudad) + " - ";
            texto += to_string(aux->codRest) + " - ";
            texto += to_string(aux->codMenu) + " - ";
            texto += to_string(aux->cantidad) + " - ";
            texto += aux->nombre + "\n";
        }
        aux = aux->siguiente;
    }
    return texto;

}

pnodoM lista::buscar(int codPais, int codCiudad, int codRest, int codMenu)
{
    nodoM* aux;
    if (primero == NULL)
        return NULL;
    else
    {
        aux = primero;
        while (aux)
        {
            if (aux->codPais == codPais && aux->codCiudad == codCiudad && aux->codRest == codRest && aux->codMenu == codMenu) {
                return aux;
            }
            aux = aux->siguiente;
        }
        cout << endl;

    }
    return NULL;
}

bool  lista::buscarPersona(int cedula) {
    nodoM* aux;
    if (primero == NULL)
        return false;
    else
    {
        aux = primero;
        while (aux)
        {
            if (aux->codCiudad == cedula) {
                return true;
            }
            aux = aux->siguiente;
        }
    }
    return false;
}

string  lista::imprimirPersona() {
    nodoM* aux;
    string texto = "khe\n";
    if (primero == NULL)
        return texto;
    else
    {

        aux = primero;
        while (aux)
        {
            texto += to_string(aux->codPais) + " - ";
            texto += to_string(aux->codCiudad) + " - ";
            texto += to_string(aux->codRest) + " - ";
            texto += to_string(aux->codMenu) + " - ";
            texto += aux->nombre + " - ";
            texto += to_string(aux->cantidad) + "\n";
            aux = aux->siguiente;
        }
    }
    return texto;
}

string lista::MasBuscado()
{
    nodoM* temp = primero;
    nodoM* aux;
    if (primero == NULL)
        return "No se han buscado menus";
    else
    {
        aux = primero;
        while (aux)
        {
            if (temp->cantidad < aux->cantidad) {
                temp = aux;
            }
            aux = aux->siguiente;
        }
        cout << endl;

    }
    return "El menu mas buscado es: " + temp->nombre + " con " + to_string(temp->cantidad) + " busquedas";;
}
string lista::MasBuscadoR()
{
    nodoR* temp = primeroR;
    nodoR* aux;
    if (primeroR == NULL)
        return "No se han buscado restaurantes";
    else
    {
        aux = primeroR;
        while (aux)
        {
            if (temp->cantidad > aux->cantidad) {
                temp = aux;
            }
            aux = aux->siguiente;
        }
        cout << endl;

    }
    return "El restaurante mas buscado es: " + temp->nombre + " con " + to_string(temp->cantidad) + " busquedas";;
}


void lista::InsertarInicioR(int codPais, int codCiudad, int codRest, string nombre, int cantidad)
{
    if (ListaVacia())
    {

        primeroR = new nodoR(codPais, codCiudad, codRest, nombre, cantidad);

    }
    else
    {

        primeroR = new nodoR(codPais, codCiudad, codRest, nombre, cantidad, primeroR);




    }
}

pnodoR lista::buscarR(int codPais, int codCiudad, int codRest)
{
    nodoR* aux;
    if (primero == NULL)
        return NULL;
    else
    {
        aux = primeroR;
        while (aux)
        {
            if (aux->codPais == codPais && aux->codCiudad == codCiudad && aux->codRest == codRest) {
                return aux;
            }
            aux = aux->siguiente;
        }
        cout << endl;

    }
    return NULL;
}