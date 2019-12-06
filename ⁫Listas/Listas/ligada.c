#include "ligada.h"

struct lista* eliminar(struct lista* lista){
 struct lista* temp;
 if(lista!=NULL){
  temp=lista;
  lista=lista->sig;
  free(temp);
 }
 return lista;
}

struct lista* agregar(struct lista* lista, int dato){
 struct lista* nuevo=(struct lista*)malloc(sizeof(struct lista));
 if(nuevo!=NULL){
  nuevo->dato=dato;
  nuevo->sig=lista;
  lista=nuevo;
  return lista;
  }
}

void mostrar(struct lista* lista){
 while(lista->sig!=NULL){
  printf("%d\n",lista->dato);
  lista=lista->sig;
 }
}
