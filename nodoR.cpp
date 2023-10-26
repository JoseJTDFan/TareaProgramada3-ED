#include "nodoR.h"

nodoR::nodoR()
{
    this->codPais = 0;
    this->codCiudad = 0;
    this->codRest = 0;
    this->nombre = "";
    this->cantidad = 0;
    this->siguiente=NULL;
}
nodoR::nodoR(int codPais, int codCiudad, int codRest, string nombre, int cantidad)
{
    this->codPais = codPais;
    this->codCiudad = codCiudad;
    this->codRest = codRest;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->siguiente = NULL;
}

nodoR::nodoR(int codPais, int codCiudad, int codRest, string nombre, int cantidad, nodoR* signodoM)
{
    this->codPais = codPais;
    this->codCiudad = codCiudad;
    this->codRest = codRest;
    this->nombre = nombre;
    this->cantidad = cantidad;
    this->siguiente = signodoM;
}