#include "THasha.h"

int main (){
  struct hash *tabla;
  tabla = NULL;
  tabla = (struct hash *) calloc (1, sizeof (struct hash));

  insertar (&tabla, 1);
  insertar (&tabla, 4);
  insertar (&tabla, 2);
  insertar (&tabla, 3);
  insertar (&tabla, 4);
  insertar (&tabla, 5);
  insertar (&tabla, 4);
  insertar (&tabla, 6);
  buscar (tabla, 4);
  buscar (tabla, 8);
  buscar (tabla, 3);
  eliminar (&tabla, 5);
  buscar (tabla, 5);

  return 0;
}
