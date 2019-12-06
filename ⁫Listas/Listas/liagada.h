#ifndef __LIGADA_H__
#define __LIGADA_H__

#include <stdio.h>
#include <stdlib.h>

struct lista{
 int dato;
 struct lista *sig;
};

struct lista* eliminar(struct lista* lista);
struct lista* agregar(struct lista* lista, int dato);
void mostrar(struct lista* lista);
#endif
