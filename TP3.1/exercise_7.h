#include <stdio.h>
#include <stdlib.h>

/* 
	INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR.
*/

extern void exercise_7() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 7      **\n");
	printf("\t\t***************************\n\n");
	
	float amount;
	
	printf("Ingrese un monto en pesos: ");
	scanf("%f", &amount);
	
	printf("\nEl 80%% de %.2f es: %.2f", amount, amount * 0.8);
	printf("\nEl 20%% de %.2f es: %.2f", amount, amount * 0.2);
	printf("\nEl 15%% de %.2f es: %.2f", amount, amount * 0.15);
}
