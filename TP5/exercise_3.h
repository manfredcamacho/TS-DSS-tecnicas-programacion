#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR DESDE 
	LA FUNCIÓN CARGA(), Y LUEGO MUESTRE LOS VALORES IMPRIMIÉNDOLOS DESDE EL 
	CUERPO PRINCIPAL. 
	
*/

void carga(int [], int); 
void imprimirVector(int [], int);

void exercise_3() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 3      **\n");
	printf("\t\t***************************\n\n");
	
	int tam;
	
	printf("Ingrese la cantidad de elementos del vector: ");
	scanf("%d", &tam);
	
	int vector[tam];
		
	carga(vector, tam);	
	
	printf("\nLos valores ingresados son: \n");
	imprimirVector(vector, tam);
}

void carga(int vector[], int tam){
	int i;
	
	for(i = 0; i < tam; i++){
		printf("Ingresar un numero (%d/%d): ", i + 1, tam);
		scanf("%d", &vector[i]);
	}
}

void imprimirVector(int vector[], int tam){
	int i;
	for(i = 0; i < tam; i++)
		printf("%d ", vector[i]);
}

