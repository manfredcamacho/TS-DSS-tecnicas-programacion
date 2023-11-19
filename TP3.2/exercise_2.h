#include <stdio.h>
#include <stdlib.h>

/* 
	DADOS 2 NÚMEROS SI EL PRIMERO ES MAYOR QUE EL SEGUNDO RESTARLOS SINO 
	MULTIPLICARLOS. INFORMAR EL RESULTADO.
*/

extern void exercise_2() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	float num1, num2;
	
	printf("Ingrese el primer numero: ");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &num2);
	
	if(num1 > num2)
		printf("\nEL primer numero es mayor.\nLa resta es %.2f", num1 - num2);
	else
		printf("\nEl segundo numero es mayor.\nLa multiplicacion es %.2f", num1 * num2);
}
