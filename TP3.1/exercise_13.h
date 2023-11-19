#include <stdio.h>
#include <stdlib.h>

/* 
	INGRESAR TRES VALORES AMBIENTALES DE TEMPERATURAS Y CALCULAR E INFORMAR LA 
	SUMA Y EL PROMEDIO DE DICHOS VALORES.
*/

extern void exercise_13() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 13     **\n");
	printf("\t\t***************************\n\n");
	
	float temp;
	float sum = 0;
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Ingrese una temperatura en C (%d / 3): ", i + 1);
		scanf("%f", &temp);
		sum += temp;
	}
	
	printf("\nLa suma de las temperaturas es de: %.2f C", sum);
	printf("\nEl promedio de las temperaturas es de: %.2f C", sum / 3);
	
	
	
}
