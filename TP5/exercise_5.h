#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA EN C QUE PERMITA REALIZAR LA CARGA DE UN VECTOR DESDE 
	LA FUNCIÓN CARGA(), Y LUEGO MOSTRAR CUAL ES EL MAYOR NUMERO DEL VECTOR, 
	UTILIZANDO PARA ENCONTRARLO LA FUNCIÓN ENCONTRARMAX(), QUE NO DEBERÁ 
	DEVOLVER NINGÚN VALOR. EL VALOR MAXIMO DEBERA SER INFORMADO EN EL CUERPO 
	PRINCIPAL. 
*/

void encontrarMax(int *, int, int *);

void exercise_5() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 5      **\n");
	printf("\t\t***************************\n\n");
	
	int tam, max;
	
	printf("Ingrese la cantidad de elementos del vector: ");
	scanf("%d", &tam);
	
	int vector[tam];
	
	carga(vector, tam);
	encontrarMax(vector, tam, &max);
	
	printf("\nEl mayor numero del vector es: %d", max);
	
}

void encontrarMax(int vec[], int tam, int * max){
	int i;
	*max = INT_MIN; //Seteo variable max con el menor valor posible para int
	 
	for(i = 0; i < tam; i++)
		if(vec[i] > *max)
			*max = vec[i];
}


