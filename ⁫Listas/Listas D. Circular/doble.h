  
#ifndef __DOBLEC_H__
#define __DOBLEC_H__ 

#include <stdio.h>
#include <stdlib.h>

struct circd {
	int dato;
	struct circd* ant;
	struct circd* sig;
};

struct circd* agregar(struct circd *l, int dato);
void mostrar(struct circd *l);
struct circd* eliminar(struct circd* l);

#endif
