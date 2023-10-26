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