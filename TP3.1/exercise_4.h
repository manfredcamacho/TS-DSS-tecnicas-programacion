#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE PIDA 2 VALORES Y REALIZA EL 
	CÁLCULO (A+B)*(A-B).
*/

extern void exercise_4() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 4      **\n");
	printf("\t\t***************************\n\n");
	
	int a, b;
	
	printf("Ingrese el valor a: ");
	scanf("%d", &a);
	printf("Ingrese el valor b: ");
	scanf("%d", &b);
	
	printf("\n\nEl calculo (a+b)*(a-b) es: %d", (a+b)*(a-b));
}
