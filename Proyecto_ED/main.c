#include "conecta.h"

extern int dificultad;

int main()
{
    int i,j;
    int mem,dif,recomendada;
	system("free -h");
	printf(" ¿Cuanta memoria libre tiene tu computadora? (usa numeros enteros por favor) \n ");
	printf("  16 GB O mas escriba: 1 \n   De 14-15 GB escriba: 2 \n   De 8-13 GB escriba: 3 \n   4 GB Escriba: 4 \n   2 GB Escriba: 5 \n ");
	scanf("%d",&mem);
	switch(mem)
		{
		case 1: 
			printf("\n El maximo nivel para su computadora es de: 9 \n ");
			recomendada=9;
			dif=9;
			break;
		case 2:
			printf("\n El maximo nivel para su computadora es de: 8 \n ");
			recomendada=7;
			dif=8;
			break;
		case 3:
			printf("\n El maximo nivel para su computadora es de: 8 \n ");	
			recomendada=6;
			dif=8;
			break;
		case 4:
			printf("\n El maximo nivel para su computadora es de: 7 \n ");
			recomendada=6;
			dif=7;
			break;
		case 5:
			printf("\n El maximo nivel para su computadora es de: 5 \n ");
			recomendada=4;
			dif=5;
			break;
		default: 
			printf("\n Numero no valido. El programa se cerrara. \n \n ");
			exit (-1);
		}

    struct nodo* raiz = (struct nodo*)malloc(sizeof(struct nodo));
    char tablero[6][7];
    printf(" \n Nivel recomendado: %d \n \n Escriba el nivel de preferencia: \n ",recomendada);
    scanf("%i", &dificultad);
    if(dificultad>dif)
	{
	printf(" \n La dificultad selecciona no puede correr en su computadora. El programa se cerrara. \n \n ");
	exit(-1);
	}
    if(dificultad == 0){
        dificultad = 1;
    }
    for (i= 0; i < 6; i++){
        for(j = 0; j < 7; j++){
            raiz->tablero[i][j] = ' ';
            tablero[i][j] = ' ';
        }
    }
    bool continuar = true;
    do{
        int columna;
        printf("Elije una columna donde tirar\n");
        imprimeTablero(tablero);
        scanf("%i", &columna);
        columna--;
        if (tirar(tablero, 'A', columna)){
            if(gano(tablero, 'A')){
                imprimeTablero(tablero);
                printf("Ganaste!\n");
                break;
            }else{
                tirar(raiz->tablero, 'A', columna);
                generarJugadas(raiz->tablero, 0, 'R', raiz);
                minMax(true,raiz);
                if (tirar(tablero, 'R', raiz->siguiente)){
                    if(gano(tablero, 'R')){
                        imprimeTablero(tablero);
                        printf("Perdiste :c!\n");
                        break;
                    }
                }else{
                    printf("Que?\n");
                }
                bool empate =  true;
                for (i= 0; i < 6; i++){
                    for(j = 0; j < 7; j++){
                        if(tablero[i][j] == ' '){
                            empate = false;
                        }
                        raiz->tablero[i][j] = tablero[i][j];
                    }
                }
                if(empate){
                    printf("Nadie ha ganado! Suerte la proxima vez\n");
                    break;
                }
            }
        }else{
            printf("No se puede tirar mas en esa columna\n");
            continue;
        }
    }while(continuar);
    scanf("%i", &dificultad);
    return 0;
}
