#include <stdio.h>
#include <stdlib.h>
#define EXCHANGE_RATE 15.4

/* 
	REALIZAR UNA FUNCIÓN QUE RECIBA UN NÚMERO, MUESTRE LOS 5 NÚMEROS ANTERIORES
	Y LOS 5 NÚMEROS SIGUIENTES AL NÚMERO INGRESADO.
*/

void printNearbyValues(int);

extern void exercise_8() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 8      **\n");
	printf("\t\t***************************\n\n");
	
	int num;
	
	printf("Ingresar un numero entero: ");
	scanf("%d", &num);
	
	printNearbyValues(num);
}

void printNearbyValues(int num){
	int i;
	for(i = num - 5; i <= num + 5; i++)
		printf("%d ", i);
}
