#include "contigua.h"
#include <stdlib.h>
void insertar(struct contigua **L, int dato){

	if(*L==NULL){
		*L=(struct contigua *) malloc(sizeof(struct contigua));
		(*L)->dato=(int *) malloc (sizeof(int));
		(*L)->count=1;
		(*L)->actual=0;
		return;
	}
	if((*L)->count == (*L)->actual + 1){
		int *temp=NULL;
		int i=0;
		temp = (int *) malloc (sizeof (int) * (*L)->count * 2);
    for (i = 0; i < (*L)->count; i++){
	  	*(temp + i) = *((*L)->dato + i);
		}
    free ((*L)->dato);
    (*L)->dato = temp;
    (*L)->count = (*L)->count * 2;
  }
  (*L)->actual = (*L)->actual + 1;
  *((*L)->dato + (*L)->actual) = dato;
}

void eliminar (struct contigua **L, int dato){
  int i = 0;
  int *temp = NULL;
  if ((*L) == NULL)
      return;
  if ((*L)->dato == NULL)
      return;
  for (i = 0; i <= (*L)->actual; i++){
    if (*((*L)->dato + i) == dato){
	  	(*L)->actual--;
	  	break;
			}
  }
  for (; i <= (*L)->actual; i++)
      *((*L)->dato + i) = *((*L)->dato + i + 1);

  if ((*L)->actual < (*L)->count / 2){
      temp = (int *) malloc (sizeof (int) * (*L)->count / 2);
      if (temp == NULL)
	  		return;
      for (i = 0; i <= (*L)->actual; i++)
	  		*(temp + i) = *((*L)->dato + i);
      free ((*L)->dato);
      (*L)->dato = temp;
      (*L)->count = (*L)->count / 2;
  }

}

void mostrar (struct contigua *L){
  int i = 0;
  if (L == NULL){
  	printf ("\n");
    return;
  }
  for (i = 0; i < L->actual; i++){
  	printf ("%d,", *(L->dato + i));
  }
  printf ("%d\n", *(L->dato + L->actual));
}
