#include "cola.h"
void insertar (struct cola **cola, int dato) {
  if ((*cola)->cuantos == 10){
    printf ("\nCola llena, no se pudo añadir dato\n");
    return;
  }
  if ((*cola)->cabeza == (*cola)->final){
    (*cola)->datos[((*cola)->cabeza) % 10] = dato;
    ((*cola)->final)++;
    ((*cola)->cuantos)++;
  }else{
    (*cola)->datos[((*cola)->final) % 10] = dato;
    ((*cola)->final)++;
    ((*cola)->cuantos)++;
  }
}

void eliminar (struct cola **cola) {
  if ((*cola)->cuantos == 0){
    printf ("Cola vacia");
    return;
  }
  ((*cola)->cuantos)--;
  ((*cola)->cabeza)++;
  return;
}

void mostrar (struct cola *cola) {
  int i = 0;
  if (cola->cuantos == 0) {
    printf ("\nCola vacia\n");
    return;
  }
  printf ("\n");
  for (i = (cola->cabeza); i < (cola->final); i++){
    printf ("%d ->", cola->datos[i % 10]);
  }
}
