#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLE UN ALGORITMO QUE LE PERMITA DETERMINAR DE UNA LISTA DE NÚMEROS:
	a.	CUANTOS ESTÁN ENTRE  EL 50 Y EL 75, AMBOS INCLUSIVE.
	b.	CUANTOS SON MAYORES DE 80.
	c.	CUANTOS SON MENORES DE 30.
	
	EL  ALGORITMO FINALIZA CUANDO SE INGRESA EL NÚMERO  0.
*/

extern void exercise_17() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 17     **\n");
	printf("\t\t***************************\n\n");
	
	int num, countBetween50And75 = 0, countGreaterThan80 = 0, countLessThan30 = 0;
		
	printf("Ingrese un numero entero (0 para salir): ");
	scanf("%d", &num);
	
	while(num != 0){
		if(num >= 50 && num <= 75)	
			countBetween50And75++;
		else if(num > 80)
			countGreaterThan80++;
		else if(num < 30)
			countLessThan30++;
		
		printf("Ingrese un numero entero (0 para salir): ");
		scanf("%d", &num);
	}
	
	printf("\nRESULTADOS");
	printf("\n------------------");
	printf("\nNumeros entra 50 y 75:\t\t%d", countBetween50And75);
	printf("\nNumeros mayores a 80:\t\t%d", countGreaterThan80);
	printf("\nNumeros menores a 30:\t\t%d", countLessThan30);
}
