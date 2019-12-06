#include "ligada.h"

int main(){
 struct lista* L;
 L=(struct lista*)malloc(sizeof(struct lista));

 L= agregar (L,0);
 L= agregar (L,13);
 L= agregar (L,50);
 L= agregar (L,40);
 L= agregar (L,13);
 L= agregar (L,12);
 L= agregar (L,20);
 L= agregar (L,1);
 mostrar (L);
 printf("\n");
 L= eliminar(L);
 L= eliminar(L);
 mostrar (L);

 return 0;
}
