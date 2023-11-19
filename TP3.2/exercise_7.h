#include <stdio.h>
#include <stdlib.h>

/* 
	DADO UN NÚMERO VERIFICAR SI ES POSITIVO, NEGATIVO O NULO.
*/

extern void exercise_7() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 7      **\n");
	printf("\t\t***************************\n\n");
	
	int num;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	if(num > 0)
		printf("\nEl numero es Positivo");
	else if(num < 0)
		printf("\nEl numero es Negativo");
	else
		printf("\nEl numero es Nulo");
}
