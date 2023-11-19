#include <stdio.h>
#include <stdlib.h>

/* 
	DADA LAS EDADES Y ESTATURAS DE 6 ALUMNOS. SE PIDE DETERMINAR: LA EDAD 
	PROMEDIO, LA ESTATURA PROMEDIO, LA CANTIDAD DE ALUMNOS MAYORES A 10 AÑOS Y 
	LA CANTIDAD DE ALUMNOS QUE MIDEN MÁS DE 1.40 MT. 
*/

extern void exercise_13() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 13     **\n");
	printf("\t\t***************************\n\n");
	
	int i, age, over10 = 0, tallerThan140 = 0;
	float height,  sumHeight, sumAge = 0;
	int STUDENT_QUANTITY = 2;
	
	for(i = 0; i < STUDENT_QUANTITY; i++){
		printf("\nIngresando datos del alumno (%d/%d):", i + 1, STUDENT_QUANTITY);
		printf("\nEdad: ");
		scanf("%d", &age);
		printf("Estatura (mts): ");
		scanf("%f", &height);
		
		sumAge += age;
		sumHeight += height;
		
		if(age > 10)
			over10++;
		
		if(height > 1.4)
			tallerThan140++;
	}
	
	printf("\nRESULTADOS");
	printf("\n------------------------------");
	printf("\nEdad Promedio:\t\t%.2f", sumAge / STUDENT_QUANTITY);
	printf("\nEstatura Promedio:\t%.2f", sumHeight / STUDENT_QUANTITY);
	printf("\nMayores de 10:\t\t%d", over10);
	printf("\nMiden mas de 1.40m\t%d", tallerThan140);
	
}
