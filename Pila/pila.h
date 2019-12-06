#ifndef __PILA_H__
#define __PILA_H__
#endif

#include<stdio.h>
#include<stdlib.h>

struct pila{
  int dato;
  struct pila *sig;
};

struct pila *crearnodo (int);
void push (struct pila **, int);
void pop (struct pila **);
int top (struct pila *);
void mostrar_top(struct pila *);
