#include "cola.h"
int main(){
struct cola *cola;
  cola = (struct cola *) malloc (sizeof (struct cola));

  cola->cuantos = 0;
  cola->cabeza = 0;
  cola->final = 0;
  insertar (&cola, 1);
  insertar (&cola, 2);
  insertar (&cola, 3);
  insertar (&cola, 4);
  insertar (&cola, 5);
  insertar (&cola, 6);
  insertar (&cola, 7);
  insertar (&cola, 8);
  insertar (&cola, 9);
  insertar (&cola, 10);
  insertar (&cola, 20);
  insertar (&cola, 30);
  mostrar (cola);
  eliminar (&cola);
  eliminar (&cola);
  insertar (&cola, 40);
  insertar (&cola, 50);
  mostrar (cola);
  insertar (&cola, 5);
  return 0;
}
