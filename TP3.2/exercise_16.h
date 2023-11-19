#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLE UN DIAGRAMA DE FLUJO QUE PERMITA CALCULAR EL PROMEDIO DE LAS 
	NOTAS DE UN CURSO.
	EL ALGORITMO TERMINA CUANDO SE INGRESA LA NOTA 0.
*/

extern void exercise_16() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 16     **\n");
	printf("\t\t***************************\n\n");
	
	int count = 0;
	float grade, sumGrades;
	
	printf("Ingrese una nota (0 para salir): ");
	scanf("%f", &grade);
	
	while(grade != 0){
		count++;
		sumGrades += grade;		
		
		printf("Ingrese una nota (0 para salir): ");
		scanf("%f", &grade);
	}
	
	if(count == 0)
		printf("\nNo se ingreso ninguna nota.");
	else{
		printf("\nRESULTADOS");
		printf("\n------------------");
		printf("\nCantidad Notas:	%d", count);
		printf("\nNota promedio:	%.2f", sumGrades / count);
	}
}
