#include <stdio.h>
#include <stdlib.h>
#define EXCHANGE_RATE 15.4

/* 
	REALIZAR UNA FUNCI�N QUE RECIBA UN N�MERO, MUESTRE LOS 5 N�MEROS ANTERIORES
	Y LOS 5 N�MEROS SIGUIENTES AL N�MERO INGRESADO.
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
