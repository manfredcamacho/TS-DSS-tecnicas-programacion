#include <stdio.h>
#include <stdlib.h>
#define EXCHANGE_RATE 15.4

/* 
	ESCRIBIR UN ALGORITMO QUE PIDA UNA CANTIDAD EN PESOS ARGENTINOS Y LA 
	CONVIERTA EN DÓLARES ESTADOUNIDENSES
	(1 DÓLAR ESTADOUNIDENSE = 15.40 PESOS ARGENTINOS).
*/

extern void exercise_8() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 8      **\n");
	printf("\t\t***************************\n\n");
	
	float amount;
	
	printf("Ingrese al cantidad en pesos: ");
	scanf("%f", &amount);
	
	printf("\n%.2f pesos al tipo de cambio de hoy [%.2f] son %.2f dolares.", 
		amount, EXCHANGE_RATE, amount / EXCHANGE_RATE);
	
	
}
