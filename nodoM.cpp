#include "nodoM.h"

nodoM::nodoM()
{
    this->codPais = 0;
    this->codCiudad = 0;
    this->codRest = 0;
    this->codMenu = 0;
    this->nombre = "";
    this->cantidad = 0;
    this->siguiente;
}

nodoM::nodoM(int codPais, int codCiudad, int codRest, int codMenu, string nombre, int cantidad)
{
    this->codPais = codPais;
    this->codCiudad = codCiudad;
    this->codRest = codRest;
    this->codMenu = codMenu;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->siguiente = NULL;
}

nodoM::nodoM(int codPais, int codCiudad, int codRest, int codMenu, string nombre, int cantidad, nodoM* signodoM)
{
    this->codPais = codPais;
    this->codCiudad = codCiudad;
    this->codRest = codRest;
    this->codMenu = codMenu;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->siguiente = signodoM;
}