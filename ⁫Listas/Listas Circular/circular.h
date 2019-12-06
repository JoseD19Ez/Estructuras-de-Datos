#ifndef __CIRCULAR_H__
#define __CIRCULAR_H__

#include <stdio.h>
#include <stdlib.h>

struct circ{
	int dato;
	struct circ* sig;
};

struct circ* agregar(struct circ* , int );
void mostrar(struct circ* );
struct circ* eliminar(struct circ* );

#endif
