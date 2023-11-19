#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UN PROGRAMA QUE CONTENGA UNA FUNCIÓN LLAMADA COPIARVECTOR() QUE RECIBA
	DOS VECTORES Y EL TAMAÑO DE LOS MISMOS (DEBEN SER DEL MISMO TAMAÑO) Y QUE 
	CONSIGA COPIAR EN EL SEGUNDO VECTOR EL CONTENIDO DEL PRIMERO. 
*/

void copiarVector(int [], int [], int);

void exercise_4() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 4      **\n");
	printf("\t\t***************************\n\n");
	
	int tam;
	
	printf("Ingrese la cantidad de elementos de los vectores: ");
	scanf("%d", &tam);
	
	int vecA[tam], vecB[tam];
	
	printf("\nCargando valores para el primer vector...\n");
	carga(vecA, tam);
	
	printf("\nCopiando valores del primer vector al segundo...\n");
	copiarVector(vecA, vecB, tam);
	
	printf("\nImprimiendo valores cargados en el primer vector...\n");
	imprimirVector(vecA, tam);
	printf("\nImprimiendo valores copiados en el segundo vector...\n");
	imprimirVector(vecB, tam);
}

void copiarVector(int vecA[], int vecB[], int tam){	
	int i;
	for(i = 0; i < tam; i++)
		vecB[i] = vecA[i];
}
