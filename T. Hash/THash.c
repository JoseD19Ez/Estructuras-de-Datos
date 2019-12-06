#include "THasha.h"

struct Lista * crearnodo (int dato){
  struct Lista *nuevo;
  nuevo = NULL;
  nuevo = (struct Lista *) malloc (sizeof (struct Lista));
  nuevo->dato = dato;
  nuevo->siguiente = NULL;
  return nuevo;
}

void insertar (struct hash **tabla, int dato){
  int p = 0;
  struct Lista *nuevo;
  p = hash (dato);
  nuevo = crearnodo (dato);
  struct Lista *aux;
  aux = NULL;
  if (*((*tabla)->dato + p) == NULL){
    *((*tabla)->dato + p) = nuevo;
    printf("%d insertado en la posicion numero %d de la tabla. \n",dato, p);
  }else{
    aux = *((*tabla)->dato + p);
    if (aux->siguiente == NULL){
      aux->siguiente = crearnodo (dato);
      printf("%d insertado en  %d  \n",dato, p);
      return;
    }else{
      while (aux->siguiente != NULL){
        aux = aux->siguiente;
      }
      aux->siguiente = crearnodo (dato);
      printf("%d insertado en %d \n",dato, p);
    }
  }
}

int hash (int dato){
  int p;
  p = (((dato+5) * 5) / 8) % 10;
  return p;
}

int buscar (struct hash *tabla, int dato){
  int p = 0, contador = 0, i = 0;
  p = hash (dato);
  struct Lista *aux;
  aux = (*(tabla->dato + p));
  if ((*(tabla->dato + p)) == NULL){
    printf ("\t\tNO EXISTE EL DATO\n");
    return -1;
  }
  if (aux->siguiente == NULL){
    if (aux->dato == dato){
      printf("%d se encuentra en %d de la tabla %d \n",aux->dato, i + 1, p);
      return p;
    }
  }
  while (aux != NULL){
    if (aux->dato == dato){
      printf("E%d se encuentra en %d de la tabla %d \n",aux->dato, i + 1, p);
      contador++;
      return p;
    }
    aux = aux->siguiente;
    i++;
  }
  if (contador == 0){
    printf("\t\tNO EXISTE EL DATO\n");
    return -1;
  }
}


void eliminar (struct hash **tabla, int dato){
  int p = 0;
  struct Lista *aux, *aux2;
  aux = NULL;
  aux2 = NULL;
  p = buscar (*tabla, dato);
  aux = ((*tabla)->dato[p]);
  if (-1 == p){
    printf ("ELIMINANDO %d\n", dato);
    return;
  }else{
    if (((*tabla)->dato[p])->dato == dato){
      (*tabla)->dato[p] = ((*tabla)->dato[p])->siguiente;
      free (aux);
      printf ("ELIMINANDO %d\n", dato);
      return;
    }else{
      while (aux->siguiente->dato != dato){
        aux = aux->siguiente;
      }
      aux2 = aux;
	    aux = aux->siguiente;
      aux2->siguiente = aux->siguiente;
	    free (aux);
	    printf ("ELIMINANDO %d\n", dato);
      return;
    }
  }
}
