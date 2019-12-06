#include "circular.h"

struct circ* agregar(struct circ* l, int dato){
	if(l==NULL){
		l=(struct circ*) malloc(sizeof(struct circ));
		if(l!=NULL){
			l->dato=dato;
			l->sig=l;
			return l;
		}else{
			return NULL;
		}
	}else{
		struct circ* nuevo=(struct circ*) malloc (sizeof(struct circ));
		struct circ *temp = l;
		while(1){
			if(temp->sig==l)
				break;
			temp=temp->sig;
		}
		nuevo->dato=dato;
		nuevo->sig=l;
		temp->sig=nuevo;
		return nuevo;
	}
}

void mostrar(struct circ* l){
	if(l->sig==l){
		printf("%d\n",l->dato);
	}else{
		struct circ* temp=l;
		while(temp->sig!=l){
			printf("%d\n",temp->dato);
			temp=temp->sig;
		}
		printf("%d\n",temp->dato);
	}
}


struct circ* eliminar(struct circ* l) {
	if(l == NULL){
			printf("La lista está vacía");
			return l;
		}
		struct circ* temp = l;
		while(temp->sig !=l){
			temp=temp->sig;
		}
		temp->sig=l->sig,
		    free(l);
		return temp->sig;

}
