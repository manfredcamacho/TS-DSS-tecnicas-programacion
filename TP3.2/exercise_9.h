#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	DADO LOS 3 LADOS DE UN TRIÁNGULO DETERMINAR QUÉ TIPO DE TRIANGULO ES.
*/

extern void exercise_9() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 9      **\n");
	printf("\t\t***************************\n\n");
	
	float side1, side2, side3;
	
	printf("Ingrese el primer lado: ");
	scanf("%f", &side1);
	printf("Ingrese el segundo lado: ");
	scanf("%f", &side2);
	printf("Ingrese el tercer lado: ");
	scanf("%f", &side3);
	
	if(side1 == side2 && side2 == side3)
		printf("\nEs un triangulo equilatero");
	else if(side1 != side2 && side1 != side3 && side2 != side3)
		printf("\nEs un triangulo escaleno");
	else
		printf("\nEs un triangulo isosceles");
}
