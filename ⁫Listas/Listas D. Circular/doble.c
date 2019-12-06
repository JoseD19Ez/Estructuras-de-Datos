#include "doblec.h"


struct circd* agregar(struct circd *l, int dato){
  if(l==NULL){
		l=(struct circd*) malloc(sizeof(struct circd));
		if(l!=NULL){
			l->dato=dato;
			l->ant=l;
			l->sig=l;
			return l;
		}else{
			return NULL;
		}
	}
  struct circd *nuevo = (struct circd*) malloc(sizeof(struct circd));
	if(nuevo!=NULL){
		struct circd *temp = l;
		while(temp->sig!=l){
			temp=temp->sig;
		}
		nuevo->dato=dato;
		nuevo->sig=l;
		nuevo->ant=temp;
		l->ant=nuevo;
		temp->sig=nuevo;
		return nuevo;
	}else{
		return l;
	}
}

void mostrar(struct circd *l){
	if(l!= NULL){
		if(l->sig==l){
			printf("%d\n",l->dato);
		}else{
			struct circd*temp=l;
			while(temp->sig!=l){
				printf("%d\n",temp->dato);
				temp=temp->sig;
			}
			printf("%d\n",temp->dato);
		}
	}else{
		printf("La lista no tiene datos\n");
	}
}

struct circd* eliminar(struct circd* l) {
	if(l == NULL){
			printf("La lista está vacía");
			return l;
		}
		struct circd* temp = l;
		while(temp->sig !=l){
			temp=temp->sig;
		}
		temp->sig=l->sig,
		    free(l);
		return temp->sig;
}
