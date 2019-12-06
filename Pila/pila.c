#include "pila.h"

struct pila *crearnodo (int dato){
  struct pila *nodo;
  nodo = NULL;
  nodo = (struct pila *) malloc (sizeof (struct pila));
  if (nodo == NULL){
    return nodo;
  }else{
    nodo->dato = dato;
    nodo->sig = NULL;
    return nodo;
  }
}

void push (struct pila **cima, int dato){
  struct pila *nodo;
  nodo = crearnodo (dato);
  if (nodo == NULL){
    return;
  }
  nodo->sig = *cima;
  *cima = nodo;
}

void pop (struct pila **cima){
  if (*cima == NULL){
    return;
  }
  struct pila *pop;
  pop = *cima;
  *cima = (*cima)->sig;
  free (pop);
  return;
}

int top (struct pila *cima){
  if (cima == NULL){
    printf ("\n ***** La pila esta vacia *****  \n");
    return -1;
  }else{
    return cima->dato;
  }
}

void mostrar_top (struct pila *cima){
  int dato;
  dato = top (cima);
  if (dato != -1){
    printf ("  \n  %d \n ", dato);
  }
}
