#include <stdio.h>
#include <stdlib.h>

/* 
	LEER TRES NÚMEROS Y MOSTRAR UN MENSAJE SI SE ENCUENTRAN EN ORDEN ASCENDENTE.
*/

extern void exercise_3() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 3      **\n");
	printf("\t\t***************************\n\n");
	
	float nums[3];
	int i;
	
	for(i = 0; i < 3; i++){
		printf("Ingrese un numero (%d/3): ", i + 1);	
		scanf("%f", &nums[i]);
	}
	
	if(nums[2] > nums[1] && nums[1] > nums[0])
		printf("\nLos numeros se encuentran en orden ascendente");
	else
		printf("\nLos numeros no se encuentran en orden ascendente");
	
	
	
}
