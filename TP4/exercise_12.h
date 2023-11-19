#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLE UN ALGORITMO QUE PERMITA LEER UN VALOR CUALQUIER N Y ESCRIBA SI 
	DICHO NÚMERO ES PAR O IMPAR.
	EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO 
	ES PAR O NO.
*/

extern void exercise_12() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 12     **\n");
	printf("\t\t***************************\n\n");
	
	int number;
	
	printf("ingrese un valor entero: ");
	scanf("%d", &number);
	
	// isEven was defined on exercise 4
	if(isEven(number))
		printf("\nEs un numero Par");
	else
		printf("\nNo es un numero Par");
	
}
