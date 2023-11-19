#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UN PROGRAMA EN C QUE MUESTRE UN MENÚ CON LAS OPCIONES SUMAR, RESTAR, 
	MULTIPLICAR Y DIVIDIR, EL PROGRAMA SOLICITARÁ UNA OPCIÓN Y REALIZARÁ LA 
	TAREA ELEGIDA, SE DEBE USAR UNA FUNCIÓN PARA MOSTRAR EL MENÚ, PEDIR LOS 
	DATOS EN EL MAIN Y DESPUÉS USAR FUNCIONES PARA REALIZAR LOS CÁLCULOS. 
*/

int showMenu();
float add(float, float);
float sub(float, float);
float mul(float, float);
float division(float, float);


extern void exercise_18() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 18     **\n");
	printf("\t\t***************************\n\n");
	
	float num1, num2, res;
	int operation;
	
	printf("Ingrese el primer numero: ");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%f", &num2);
	
	operation = showMenu();
	
	switch(operation){
		case 1:
			printf("\nEl resultado de la suma es: %.2f", add(num1, num2));
			break;
		case 2: 
			printf("\nEl resultado de la resta es: %.2f", sub(num1, num2));
			break;
		case 3:
			printf("\nEl resultado de la multiplicacion es: %.2f", mul(num1, num2));
			break;	
		case 4:
			if(num2 == 0)
				printf("\nNo se puede dividir por cero");
			else
				printf("\nEl resultado de la division es: %.2f", division(num1, num2));
			break;
		default:
			printf("\nOperacion invalida");
	};
}

int showMenu(){
	int option;
	printf("\n[1] -> Suma");
	printf("\n[2] -> Resta");
	printf("\n[3] -> Multiplicacion");
	printf("\n[4] -> Division");
	printf("\nSeleccione la operacion a realizar: ");
	scanf("%d", &option);
	return option;
};

float add(float a, float b){
	return a + b;
};

float sub(float a, float b){
	return a - b;
};

float mul(float a, float b){
	return a * b;
};

float division(float a, float b){
	return a / b;
};

