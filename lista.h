#include <iostream>
#include "nodoM.h"
#include "nodoR.h"

using namespace std;


class lista {
   public:
    lista() { primeroR =  NULL; primero =  NULL; }
    ~lista();
    
    void InsertarInicio(int codPais, int codCiudad, int codRest, int codMenu, string nombre, int cantidad);//No retornan nada
    bool ListaVacia() { return primero == NULL; } //retorna True o False
    int largoLista();// retorno un valor numerico
    pnodoM buscar(int codPais, int codCiudad, int codRest, int codMenu);
    string MasBuscado();
    
    void InsertarInicioR(int codPais, int codCiudad, int codRest, string nombre, int cantidad);//No retornan nada
    pnodoR buscarR(int codPais, int codCiudad, int codRest);
    string MasBuscadoR();
    
   private:
    pnodoM primero;
    pnodoM actual;
    pnodoR primeroR;
    
    friend class Controller;
};


