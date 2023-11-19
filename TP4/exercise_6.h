#include <stdio.h>
#include <stdlib.h>

/* 
	REALIZAR UNA FUNCIÓN LLAMADA NEGATIVO, QUE TOMA UN NÚMERO ENTERO COMO 
	PARÁMETRO, Y DEVUELVE 1 SI ES NEGATIVO O 0 SI NO LO ES. 
*/

int isNegative(int);

extern void exercise_6() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 6      **\n");
	printf("\t\t***************************\n\n");
	
	int num;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	if(isNegative(num))
		printf("\n%d es negativo.", num);
	else
		printf("\n%d no es negativo", num);
	
}

int isNegative(int num){
	return num < 0 ? 1 : 0;
}
