#include <stdio.h>
#include <stdlib.h>

/* 
	REALIZAR UNA FUNCIÓN PARA INGRESAR DOS NÚMEROS Y OTRA PARA MOSTRAR POR 
	PANTALLA LOS VALORES INTERCAMBIANDO LAS VARIABLES.
*/

void readNumbers(int *, int *);
void printExchangedNumbers(int, int);

extern void exercise_2() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	int num1, num2;
	
	readNumbers(&num1, &num2);
	printExchangedNumbers(num1, num2);
}

void readNumbers(int *num1, int *num2){
	printf("Ingrese un numero entero: ");
	scanf("%d", num1);
	printf("Ingrese otro numero entero: ");
	scanf("%d", num2);
}

void printExchangedNumbers(int num1, int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("\nEl primer numero ingresado ahora es: %d", num1);
	printf("\nEl segundo numero ingresado ahora es: %d", num2);
}
