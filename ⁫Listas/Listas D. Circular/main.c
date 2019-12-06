#include "doblec.h"

int main(){
	struct circd * L = NULL;

	L=agregar(L, 1);
	L=agregar(L, 2);
 	L=agregar(L, 3);
 	L=agregar(L, 4);
 	L=agregar(L, 5);

	mostrar(L);
  printf("\n");
	L=eliminar(L);
	mostrar(L);
	return 0;
}
