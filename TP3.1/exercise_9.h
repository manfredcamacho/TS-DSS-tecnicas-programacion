#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	DESARROLLE UN ALGORITMO QUE PERMITA DETERMINAR EL ÁREA Y VOLUMEN DE UN 
	CILINDRO DADO SU RADIO Y SU ALTURA.
*/

extern void exercise_9() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 9      **\n");
	printf("\t\t***************************\n\n");
	
	float radius, height, areaBase, areaBody, areaCylinder, volumeCylinder;
	
	printf("Ingrese el radio del cilindro: ");
	scanf("%f", &radius);
	printf("Ingrese la altura del cilindro: ");
	scanf("%f", &height);
	
	areaBase = M_PI * pow(radius, 2);
	areaBody = 2 * M_PI * radius * height;
	areaCylinder = 2 * areaBase + areaBody;
	volumeCylinder = areaBase * height;
	
	printf("\nEl area del cilindro es: %.2f", areaCylinder);
	printf("\nEl volumen del cilindro es: %.2f", volumeCylinder);
	
	
}
