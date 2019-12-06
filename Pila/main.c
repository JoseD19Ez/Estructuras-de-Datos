#include "pila.h"
int main (){
  int dato;
  struct pila *cima ;
  cima = NULL;
  push (&cima, 20);
  push (&cima, 30);
  push (&cima, 40);
  push (&cima, 50);
  mostrar_top(cima);
  pop(&cima);
  mostrar_top(cima);
  pop(&cima);
  mostrar_top(cima);
}
