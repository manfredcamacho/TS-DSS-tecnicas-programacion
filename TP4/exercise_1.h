#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA QUE CALCULE LA POTENCIA DE UN NÚMERO INTRODUCIENDO EL 
	NÚMERO BASE Y EL EXPONENTE.
	EFECTUAR EL EJERCICIO CON UNA FUNCIÓN QUE RECIBA LA BASE Y EL EXPONENTE Y 
	DEVUELVA EL RESULTADO A LA FUNCIÓN PRINCIPAL DEL PROGRAMA.

*/

float customPow(float base, float exponent);

extern void exercise_1() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 1      **\n");
	printf("\t\t***************************\n\n");
	
	float base, exponent, result;
	
	printf("Ingrese la base : ");
	scanf("%f", &base);
	printf("Ingrese la potencia: ");
	scanf("%f", &exponent);
	
	result = customPow(base, exponent);
	
	printf("\n %.2f elevado a %.2f es: %.2f", base, exponent, result);
}

float customPow(float base,float exponent){
	int i;
	float accum = 1;
	int isNegative = 0;
	
	if(exponent < 0){
		exponent *= -1;
		isNegative = 1;
	}
	
	for(i = 0; i < exponent; i++)
		accum *= base;
	
	if(isNegative)
		return 1 / accum;
	else
		return accum;
}
