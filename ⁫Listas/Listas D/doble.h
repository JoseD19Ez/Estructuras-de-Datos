#ifndef __DOBLE_H__
#define __DOBLE_H__

#include<stdio.h>
#include<stdlib.h>

struct doble{
	int dato;
	struct doble* ant;
	struct doble* sig;
};

struct doble* agregar(struct doble* lista ,int dato );

struct doble* eliminar(struct doble* lista);

void mostrar(struct doble* lista);

void mostrarInv(struct doble* lista);

#endif
