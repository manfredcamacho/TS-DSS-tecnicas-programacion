#include <stdio.h>
#include <stdlib.h>

/* 
 	DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS 
	PARES COMPRENDIDOS ENTRE EL 1 Y EL 200, IMPRIMA LOS NÚMEROS Y SU SUMATORIA.
	EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO 
	ES PAR O NO.
*/

extern void exercise_13() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 13     **\n");
	printf("\t\t***************************\n\n");
	
	int i, sum = 0;
	
	// isDivisibleBy was define on exercise 4
	for(i = 1; i <= 200; i++){
		if(isEven(i)){
			sum += i;
			printf("%d, ", i);
		}
	}
	
	printf("\nLa sumatoria es: %d", sum);
	
}
