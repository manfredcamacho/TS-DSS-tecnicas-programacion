#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
	ESCRIBIR UN ALGORITMO QUE SOLICITE UNA NOTA E IMPRIMA POR PANTALLA LA 
	CALIFICACI�N EN FORMATO "APROB�" O "NO APROB�" SEG�N SI LA NOTA ES MAYOR O 
	IGUAL QUE 7 O MENOR QUE 7.
*/

extern void exercise_5() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 5      **\n");
	printf("\t\t***************************\n\n");
	
	int grade;
	
	printf("Ingrese la nota obtenida: ");
	scanf("%d", &grade);
	
	if(grade >= 7)
		printf("APROBO");
	else
		printf("NO APROBO");
}
