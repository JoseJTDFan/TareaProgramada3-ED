//José Julián Brenes Garro y Gustavo Pacheco Morales
//c.2022272865
//Estructuras de Datos

#include "cola.h"
using namespace std;

cola::~cola()
{
   pnodoFila aux;
   
   while(primero) {
      aux = primero;
      primero = primero->siguiente;
      delete aux;
   }
   primero= NULL;
}

int cola::largoLista(){
    int cont=0;

    pnodoFila aux= primero;
    if(ListaVacia()){
        return cont;
    }else{
        while(aux!=NULL){
        aux=aux->siguiente;
        cont++;
    }
    return cont;
    cout<< endl;
    }
    
}

void cola::InsertarInicio(pnodoFila v)
{
   if (ListaVacia())
   {
   
     primero = v;
     
   }
   else
   {
     pnodoFila aux=primero;
     primero=v;
     primero->siguiente = aux;
   }
}

void cola::InsertarInicio(int pcedula, string pnombre, int plugar, listaProductos pproductos)
{
   if (ListaVacia())
   {
   
     primero = new NodoFila (pcedula, pnombre, plugar, pproductos);
     
   }
   else
   {
     pnodoFila aux=primero;
     primero= new NodoFila (pcedula, pnombre, plugar, pproductos);
     primero->siguiente = aux;
   }
}

void cola::InsertarInicio(int pcedula, string pnombre, int plugar)
{
   if (ListaVacia())
   {
   
     primero = new NodoFila (pcedula, pnombre, plugar);
     
   }
   else
   {
     pnodoFila aux=primero;
     primero= new NodoFila (pcedula, pnombre, plugar);
     primero->siguiente = aux;
   }
} 
void cola::InsertarFinal(pnodoFila v)
{
   if (ListaVacia())
     primero = v;
   else
     { pnodoFila aux = primero;
        while ( aux->siguiente != NULL)
          aux= aux->siguiente;
        aux->siguiente=v;
      }    
}

void cola::InsertarFinal(int pcedula, string pnombre, int plugar, listaProductos pproductos)
{
   if (ListaVacia())
     primero = new NodoFila (pcedula, pnombre, plugar, pproductos);
   else
     { pnodoFila aux = primero;
        while ( aux->siguiente != NULL)
          aux= aux->siguiente;
        aux->siguiente= new NodoFila (pcedula, pnombre, plugar, pproductos);
      }    
}


void cola::InsertarPos(pnodoFila v,int pos)
{
   if (ListaVacia())
     primero = v;
   else{
        if(pos <=1)
		{
        	//OPcion1
         // pnodoFila nuevo = v;
          //nuevo->siguiente= primero;
          //primero= nuevo;     
          //OPcion 2
          InsertarInicio(v);
        }      
        else{
             NodoFila *aux= primero;
             int i =2;
             while((i != pos )&&(aux->siguiente!= NULL)){
                   i++;
                   aux=aux->siguiente;
             }
             pnodoFila nuevo= v;
             nuevo->siguiente=aux->siguiente;
             aux->siguiente=nuevo;
             
        }
        }
}
      
void cola::BorrarFinal()
{
    if (ListaVacia()){
     cout << "No hay elementos en la cola:" << endl;
    
   }else{
        
        if (primero->siguiente == NULL) 
		{   pnodoFila temp=primero;
		    primero= NULL;
		    delete temp;;
            } else {

                pnodoFila aux = primero;
                while (aux->siguiente->siguiente != NULL) {
                    aux = aux->siguiente;

                }
                
              pnodoFila temp = aux->siguiente;
              aux->siguiente= NULL;

                
                delete temp;
            }
        }
}

void cola::BorrarInicio()
{
    if (ListaVacia()){
     cout << "No hay elementos en la cola:" << endl;
    
   }else{
        if (primero->siguiente == NULL) 
		{   pnodoFila temp=primero;
		    primero= NULL;
		    delete temp;
        } 
		else 
		{

                pnodoFila aux = primero;
                primero=primero->siguiente;                
                delete aux;
        }
        }
}



void cola:: borrarPosicion(int pos){
     if(ListaVacia()){
              cout << "cola vacia" <<endl;
    }else{
         if((pos>largoLista())||(pos<0)){
        cout << "Error en posicion" << endl;
        }else{
        if(pos==1)
		{
        	pnodoFila temp=primero;
        	primero=primero->siguiente;
        	delete temp; //BorrarInicio();
        }
		else{
          int cont=2;
            pnodoFila aux=  primero;
            while(cont<pos){
             aux=aux->siguiente;
             cont++;
            }
            pnodoFila temp=aux->siguiente;
            aux->siguiente=aux->siguiente->siguiente;
            delete temp;
            }
        }
     }

}
 

void cola::imprimir()
{
   NodoFila *aux = primero;
   if (primero== NULL)
       return;
   else
   {
   		while(aux){
   			 if (aux->lugar==1){
			cout<<aux->cedula<<" -> "<<aux->nombreCliente<<" -> Para llevar."<<endl;
			}
			else{
				cout<<aux->cedula<<" -> "<<aux->nombreCliente<<" -> Para comer dentro."<<endl;
			}
	        aux->productos.MostrarCompra();
	        aux=aux->siguiente;
		}
  		
   }
}

pnodoFila cola::buscar(int cedula)
{
   NodoFila *aux;
   if (primero== NULL)
       return NULL;
   else
   {
   		aux = primero;
		while(aux) 
		{
		    if (aux->cedula== cedula){
		    	return aux;
			}
			aux=aux->siguiente;
		}
		cout << endl;
		
   }
   return NULL;
}
int cola::getPosicion(int cedula){
	if (primero==NULL){
		return 0;
	}
	NodoFila *aux=primero;
	int cont=1;
	while(aux){
		if (aux->cedula==cedula){
			return cont;
		}
		aux = aux->siguiente;
		cont++;
	}
	return 0;
}

void cola::Siguiente()
{
   if(actual) actual = actual->siguiente;
}

void cola::Primero()
{
   actual = primero;
}

void cola::Ultimo()
{
   actual = primero;  
   if(!ListaVacia()) 
      while(actual->siguiente) Siguiente();
}
