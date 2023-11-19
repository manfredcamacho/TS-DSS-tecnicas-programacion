#include <stdio.h>
#include <stdlib.h>

/* 
	DADA LA NOTA Y EL LEGAJO DE UN ALUMNO. INFORMAR EL LEGAJO Y SI LA NOTA ES 
	SUPERIOR A 6.
*/

extern void exercise_1() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 1      **\n");
	printf("\t\t***************************\n\n");
	
	float grade;
	int fileNumber;
	
	printf("Ingrese la nota obtenida: ");
	scanf("%f", &grade);
	printf("Ingrese su numero de legajo: ");
	scanf("%d", &fileNumber);
	
	printf("\n\nNRO LEGAJO:	%d", fileNumber);
	if(grade < 6)
		printf("\nLa nota ingresada es menor que 6");
	else
		printf("\nLa nota ingresada es mayor a 6.");
}
