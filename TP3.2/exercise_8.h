#include <stdio.h>
#include <stdlib.h>
#define EXCHANGE_RATE 15.4

/* 
	REALIZAR UN PROGRAMA QUE PIDA EL INGRESO DE 2 NÚMEROS Y LA OPERACIÓN A 
	REALIZAR ENTRE ELLOS Y MUESTRE EL RESULTADO DE LA OPERACIÓN.
*/

extern void exercise_8() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 8      **\n");
	printf("\t\t***************************\n\n");
	
	float num1, num2, res;
	int operation;
	
	printf("Ingrese el primer numero: ");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &num2);
	
	printf("\n[1] -> Suma");
	printf("\n[2] -> Resta");
	printf("\n[3] -> Multiplicacion");
	printf("\n[4] -> Division");
	printf("\nSeleccione la operacion a realizar: ");
	scanf("%d", &operation);
	
	switch(operation){
		case 1:
			printf("\nEl resultado de la suma es: %.2f", num1 + num2);
			break;
		case 2: 
			printf("\nEl resultado de la resta es: %.2f", num1 - num2);
			break;
		case 3:
			printf("\nEl resultado de la multiplicacion es: %.2f", num1 * num2);
			break;	
		case 4:
			if(num2 == 0)
				printf("\nNo se puede dividir por cero");
			else
				printf("\nEl resultado de la division es: %.2f", num1 / num2);
			break;
		default:
			printf("\nOperacion invalida");
	};
	
		
}
