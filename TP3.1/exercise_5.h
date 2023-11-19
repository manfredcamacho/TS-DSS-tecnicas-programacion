#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL 
	NÚMERO BASE Y EL EXPONENTE.
*/

extern void exercise_5() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 5      **\n");
	printf("\t\t***************************\n\n");
	
	int base, power;
	
	printf("Ingrese la base: ");
	scanf("%d", &base);
	printf("Ingrese el exponente: ");
	scanf("%d", &power);
	printf("\n El resultdo de %d elevado a %d es: %.2f", base, power, pow(base,power));
}
