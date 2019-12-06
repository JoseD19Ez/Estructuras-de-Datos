#define __COLAS_H__

#include <stdio.h>
#include <stdlib.h>
struct cola{
  int cabeza;
  int final;
  int cuantos;
  int datos[10];
};

void insertar (struct cola**, int);
void eliminar (struct cola**);
void mostrar (struct cola *);
