#include <stdio.h>
#include <stdlib.h>

/* 
	INGRESAR 3 NÚMEROS E IMPRIMIR EL DOBLE, EL TRIPLE Y LA MITAD DE CADA UNO.
*/

extern void exercise_6() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 6      **\n");
	printf("\t\t***************************\n\n");
	
	int nums[3];
	int i,j;
	
	for(i = 0; i < 3; i++){
		printf("Ingrese un numero entero (%d/3): ", i + 1);
		scanf("%d", &nums[i]);
	}
	
	for(j = 0; j < 3; j++){
		printf("\nEl doble de %d es: %d", nums[j], nums[j] * 2);
		printf("\nEl triple de %d es: %d", nums[j] , nums[j] * 3);			
		printf("\nLa mitad de %d es: %.2f\n", nums[j], (float)nums[j] / 2);
	}
		
	

	
	
}
