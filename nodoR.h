#pragma once
#include <iostream>
#include <string>
using namespace std;

class nodoR { // Constructores
public:

    nodoR();
    nodoR(int codPais, int codCiudad, int codRest, string nombre, int cantidad);
    nodoR(int codPais, int codCiudad, int codRest, string nombre, int cantidad, nodoR* signodoM);


private:
    int codPais;
    int codCiudad;
    int codRest;
    string nombre;
    int cantidad;
    nodoR* siguiente;


    friend class lista;
    friend class Controller;
};

typedef nodoR* pnodoR; //Alias
