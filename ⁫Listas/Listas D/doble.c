#include "doble.h"

struct doble* agregar(struct doble* lista ,int dato ){
	struct doble* nuevo = (struct doble*) malloc(sizeof(struct doble));
	if(lista==NULL){
		nuevo->ant=NULL;
		nuevo->sig=NULL;
		nuevo->dato=dato;
		return nuevo;
	}

	nuevo->ant=NULL;
	nuevo->dato=dato;
	nuevo->sig=lista;
	lista->ant=nuevo;
	lista=nuevo;

	return lista;
}

struct doble* eliminar(struct doble* lista){
	if(lista!=NULL){
		struct doble* temp;
		temp=lista;
		lista=lista->sig;
		lista->ant=NULL;
		free(temp);
	}
	return lista;
}

void mostrar(struct doble* lista){
	while(lista){
		printf("%d\n",lista->dato);
		lista=lista->sig;
	}
}

void mostrarInv(struct doble* lista){
	while (lista->sig){
		lista=lista->sig;
	}
	while(lista){
		printf("%d\n",lista->dato);
		lista=lista->ant;
	}
}
