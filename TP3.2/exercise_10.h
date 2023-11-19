#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	EN UNA OLIMPIADA DE TIRO AL BLANCO SE LLEGA A UN ACUERDO ENTRE LOS 
	PARTICIPANTES PARA QUE EL PUNTAJE OBTENIDO SEA CALCULADO EN BASE AL PUNTAJE 
	ORIGINAL (0 A 10) ALCANZADO EN EL TIRO EFECTUADO, MULTIPLICADO POR UN FACTOR
	SEGÚN LA SIGUIENTE TABLA:
	
	0 		-> 0
	1..5	-> 6
	6..8	-> 9
	9..10	-> 10
	
	PARA UN TIRO REALIZADO DETERMINE EL PUNTAJE ALCANZADO APLICANDO EL FACTOR 
	QUE LE CORRESPONDE.
*/

extern void exercise_10() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 10     **\n");
	printf("\t\t***************************\n\n");
	
	int baseScore, finalScore;
	
	printf("Ingrese el puntaje obtenido: ");
	scanf("%d", &baseScore);
	
	if(baseScore <= 0)
		finalScore = 0;
	else if(baseScore >= 1 && baseScore <= 5)
		finalScore = 6;
	else if(baseScore >= 6 && baseScore <= 8)
		finalScore = 9;
	else if(baseScore >= 9)
		finalScore = 10;
	
	printf("\nEl puntaje final obtenido es: %d", finalScore);
}
