#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	DESARROLLE UN ALGORITMO QUE CALCULE LA HIPOTENUSA DE UN TRIÁNGULO RECTÁNGULO 
	CONOCIDAS LAS LONGITUDES DE SUS CATETOS.
*/

extern void exercise_10() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 10     **\n");
	printf("\t\t***************************\n\n");
	
	float side_a, side_b, hypotenuse;
	
	printf("Ingrese el primer cateto: ");
	scanf("%f", &side_a);
	printf("Ingrese el segundo cateto: ");
	scanf("%f", &side_b);
	
	hypotenuse = sqrt(pow(side_a, 2) + pow(side_b, 2));
	
	printf("\nLa hipotenusa del triangulo rectangulo es: %.2f", hypotenuse);
}
