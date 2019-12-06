#include "circular.h"

int main(){
	struct circ* L= NULL;
	L=agregar(L,10);
	L=agregar(L,50);
	L=agregar(L,20);
	mostrar(L);
	L=eliminar(L);
	mostrar(L);

	printf("Funciona\n" );
	return 0;
}
