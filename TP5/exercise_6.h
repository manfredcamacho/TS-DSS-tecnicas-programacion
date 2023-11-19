#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA QUE CARGUE 100 NÚMEROS ALEATORIAMENTE EN UN VECTOR. 
	UTILIZANDO LA FUNCIÓN CONTAR(), INDICAR CUANTOS NÚMEROS PARES HAY EN EL 
	VECTOR Y CUANTOS IMPARES. 
*/

int esPar(int num);
int generarNumAleatorio(int min, int max);
void cargaAleatoria(int vec[], int tam);
void contar(int vec[], int tam);

void exercise_6() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 6      **\n");
	printf("\t\t***************************\n\n");
	
	int tam = 100;
	int vector[tam];
	
	printf("\nGenerando %d valores aleatorios en el vector...\n", tam);
	cargaAleatoria(vector, tam);
	
	printf("\nContando numeros pares e impares...\n");
	contar(vector, tam);
}

void contar(int vec[], int tam){
	int i, pares = 0, impares = 0;
	
	for(i = 0; i < tam; i++)
		if(esPar(vec[i]))
			pares++;
		else
			impares++;
			
	printf("Pares:\t\t%d", pares);
	printf("\nImpares:\t%d", impares);
}

int esPar(int num){
	return num % 2 == 0 ? 1 : 0;
}

void cargaAleatoria(int vec[], int tam){
	int i;
	for(i = 0; i < tam; i++){
		vec[i] = generarNumAleatorio(5, 21);
		// printf("%d ", vec[i]);
	}
}

int generarNumAleatorio(int min, int max){
	return  (rand() % (max - min + 1)) + min;
}
