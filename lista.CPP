#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>

struct nodo{
  int dato;
  nodo *siguiente;
};


void main(){
 nodo *lista;


 lista = NULL;

 nodo *nuevo = new nodo();

 nuevo->dato=5;
 nuevo->siguiente = NULL;

}