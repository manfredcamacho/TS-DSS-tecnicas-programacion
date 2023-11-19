#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UNA FUNCIÓN QUE PERMITA CALCULAR EL FACTORIAL DE UN NÚMERO.
*/

int calculateFactorial(int);

extern void exercise_14() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 14     **\n");
	printf("\t\t***************************\n\n");
		
	int number, result;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &number);
	
	result = calculateFactorial(number);
	
	printf("\nEl factorial de %d! es %d", number, result);
	
}

int calculateFactorial(int number){
	int i, res = 1;
	for(i = number; i > 0; i--){
		res *= i;
	}
}
