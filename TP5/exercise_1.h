#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA EN C QUE RECIBA DOS NÚMEROS DEL USUARIO REALICE LA SUMA
	Y LA MUESTRE POR PANTALLA. LA SUMA DEBERÁ HACERSE EN LA FUNCIÓN SUMA(), QUE 
	RECIBIRÁ COMO PARÁMETROS POR REFERENCIA LOS NUM1 Y NUM2. EL RESULTADO DEBE 
	IMPRIMIRSE DESDE LA FUNCIÓN

*/

void suma(int *, int *);

void exercise_1() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 1      **\n");
	printf("\t\t***************************\n\n");
	
	int num1, num2;
	
	printf("Ingrese el primer numero: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: ");
	scanf("%d", &num2);
	
	suma(&num1, &num2);
}

void suma(int *num1, int *num2){
	int res = *num1 + *num2;
	printf("\nLa suma entre %d y %d es: %d",*num1, *num2, res);
}
