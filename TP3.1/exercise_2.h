#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA QUE LEA EXACTAMENTE  3 NÚMEROS Y LUEGO ESCRIBA LA SUMA
	DE TODOS ELLOS. 
*/

extern void exercise_2() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	printf("Ingrese el tercer numero: ");
	scanf("%d", &num3);	
	
	printf("La suma de los 3 numeros es: %d", num1 + num2 + num3);	
}
