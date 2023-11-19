#include <stdio.h>
#include <stdlib.h>

/* 
	DADA UNA CANTIDAD EXPRESADA EN PIES, Y OTRA EN METROS. DETERMINAR LA SUMA 
	PERO CONVERTIDA A PULGADAS, A YARDAS, A METROS Y A MILLAS POR SEPARADO. 
	CONSIDERE LAS SIGUIENTES EQUIVALENCIAS: 

	1 MILLA = 1609 METROS
	1 PULGADA  = 0.0254 METROS
	1 YARDA = 3 PIES
	1 PIE = 12 PULGADAS
*/

extern void exercise_12() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 12     **\n");
	printf("\t\t***************************\n\n");
	
	float feet, meters, sum_inches, sum_yards, sum_meters, sum_miles;
	
	printf("Ingrese la cantidad medida en pies: ");
	scanf("%f", &feet);
	printf("Ingrese la cantidad medida en metros: ");
	scanf("%f", &meters);
	
	sum_meters = meters + (feet * 12 * 0.0254);
	sum_inches = sum_meters / 0.0254;
	sum_yards =  (sum_inches / 12) / 3;
	sum_miles = sum_meters / 1609;
	
	printf("\n\nLa suma en pulgadas es: %.2f", sum_inches);
	printf("\nLa suma en yardas es: %.2f", sum_yards);
	printf("\nLa suma en metros es: %.2f", sum_meters);
	printf("\nLa suma en millas es: %.2f", sum_miles);
}
