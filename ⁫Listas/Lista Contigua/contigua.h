#define __CONTIGUA_H__

#include <stdio.h>
#include <stdlib.h>
struct contigua{
	int *dato;
	int actual;
	int count;
};

void insertar(struct contigua **, int);
void eliminar(struct contigua **, int);
void mostrar(struct contigua *);
