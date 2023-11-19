#include <stdio.h>
#include <stdlib.h>
#define COST_PER_STUDENT 55 

/* 
	REALIZAR UNA FUNCIÓN QUE ME PERMITA ESTABLECER SI UN NÚMERO ES PAR O NO 
	UTILIZANDO FUNCIONES.
*/

int isEven(int);

extern void exercise_4() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 4      **\n");
	printf("\t\t***************************\n\n");
	
	int num;
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	if(isEven(num))
		printf("\n%d es un numero par.", num);
	else
		printf("\n%d no es un numero par.", num);
}

int isEven(int number){
	return number % 2 == 0 ? 1 : 0;
}
