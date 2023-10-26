#include <iostream>
#include <string>
using namespace std;

#pragma once
class nodoM { // Constructores
public:

    nodoM();
    nodoM(int codPais, int codCiudad, int codRest, int codMenu, string nombre, int cantidad);
    nodoM(int codPais, int codCiudad, int codRest, int codMenu, string nombre, int cantidad, nodoM* signodoM);


private:
    int codPais;
    int codCiudad;
    int codRest;
    int codMenu;
    string nombre;
    int cantidad;
    nodoM* siguiente;


    friend class lista;
    friend class Controller;
};

typedef nodoM* pnodoM; //Alias