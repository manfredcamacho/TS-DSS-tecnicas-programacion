#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLE UN ALGORITMO QUE REALICE LA SUMATORIA DE LOS NÚMEROS ENTEROS 
	MÚLTIPLOS DE 5, COMPRENDIDOS ENTRE EL 1 Y EL 100, IMPRIMA LOS NÚMEROS Y SU 
	SUMATORIA.
	EFECTUAR EL EJERCICIO UTILIZANDO UNA FUNCIÓN PARA DETERMINAR SI EL NÚMERO 
	ES MÚLTIPLO DE 5 O NO.
*/

int isDivisibleBy(int, int);

extern void exercise_11() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 11     **\n");
	printf("\t\t***************************\n\n");
	
	int i, sum = 0;
	
	
	for(i = 1; i <= 100; i++){
		if(isDivisibleBy(i, 5)){
			sum += i;
			printf("%d, ", i);
		}
	}
	
	printf("\nLa sumatoria es: %d", sum);
	
}

int isDivisibleBy(int number, int divisor){
	return number % divisor == 0 ? 1 : 0;
}
