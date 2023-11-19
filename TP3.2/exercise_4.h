#include <stdio.h>
#include <stdlib.h>
#define COST_PER_STUDENT 55 

/* 
	DADOS LA CANTIDAD DE VARONES Y EL DE MUJERES DE UN CURSO, CALCULAR EL TOTAL 
	DE ALUMNOS. SI EL TOTAL SUPERA LOS 35 ALUMNOS INFORMAR CURSO NUMEROSO.
	EN CASO CONTRARIO, CALCULAR E INFORMAR LO QUE SE DEBERÁ PAGAR PARA REALIZAR 
	UNA SALIDA CON TODOS, SI CADA ALUMNO PAGA  $55.
*/

extern void exercise_4() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 4      **\n");
	printf("\t\t***************************\n\n");
	
	int maleQty, femaleQty, total;
	
	printf("Ingrese la cantidad de varones: ");
	scanf("%d", &maleQty);
	printf("Ingrese la cantidad de mujeres: ");
	scanf("%d", &femaleQty);
	
	total = maleQty + femaleQty;
	
	if(total > 35)
		printf("\nCURSO NUMEROSO");
	else
		printf("\nTOTAL SALIDA GRUPAL: $%d", total * COST_PER_STUDENT);
}
