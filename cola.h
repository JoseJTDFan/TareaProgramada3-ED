//José Julián Brenes Garro y Gustavo Pacheco Morales
//c.2022272865
//Estructuras de Datos

#include <iostream>
#include <string>
#include "NodoFila.h"
using namespace std;

class cola 
{
public:
    cola() { primero =  NULL; }
    ~cola();
    
    void InsertarInicio(pnodoFila v);//No retornan nada
    void InsertarInicio(int pcedula, string pnombre, int plugar, listaProductos pproductos);
    void InsertarInicio(int pcedula, string pnombre, int plugar);
    void InsertarFinal(pnodoFila v);
    void InsertarFinal(int pcedula, string pnombre, int plugar, listaProductos pproductos);
    void InsertarPos (pnodoFila v, int pos);
    void EliminarInicio();
    void EliminarFinal();
    void EliminarPos(int pos);
    bool ListaVacia() { return primero == NULL; } //retorna True o False
    void Borrar(pnodoFila v);
    string imprimir();
    void Siguiente();
    void Primero();
    void Ultimo();
    void BorrarFinal();
    void BorrarInicio();
    void borrarPosicion(int pos);
    int getPosicion(int codigo);
    void Sumanum(int num);
    pnodoFila buscar(int cedula);
    int largoLista();// retorno un valor numerico
    
   private:
    pnodoFila primero;
    pnodoFila actual;
    
    friend class Controller;
};


