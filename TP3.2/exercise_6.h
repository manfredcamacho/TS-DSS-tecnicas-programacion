#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLE UN ALGORITMO QUE PERMITA LEER UN VALOR CUALQUIER N Y DETERMINE 
	SI DICHO NÚMERO ES PAR O IMPAR.
*/

extern void exercise_6() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 6      **\n");
	printf("\t\t***************************\n\n");
	
	int num;
	
	printf("Ingrese un valor: ");	
	scanf("%d", &num);
	
	if(num % 2 == 0)
		printf("Es un numero par");
	else
		printf("Es un numero impar");
}
