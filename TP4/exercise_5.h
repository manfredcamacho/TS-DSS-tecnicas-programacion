#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	REALIZAR FUNCI�N QUE TOME DOS N�MEROS REALES COMO PAR�METROS Y DEVUELVA UN 
	N�MERO REAL QUE SER�A LA MEDIA DE LOS DOS N�MEROS.
*/

float calculateAvg(float, float);

extern void exercise_5() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 5      **\n");
	printf("\t\t***************************\n\n");
	
	float num1, num2, avg;
	
	printf("Ingrese un numero: ");
	scanf("%f", &num1);
	
	printf("Ingrese otro numero: ");
	scanf("%f", &num2);
	
	avg = calculateAvg(num1, num2);
	
	printf("\nLa media de los dos numeros es: %.2f", avg);
}

float calculateAvg(float num1, float num2){
	return (num1 + num2) / 2;
}
