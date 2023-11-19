#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES A Y B.REALICE LA
	SUMA, LA RESTA, LA DIVISIÓN Y LA MULTIPLICACIÓN DE A CON B. MUESTRE LOS 
	CUATRO RESULTADOS POR PANTALLA.  LUEGO INTERCAMBIE EL VALOR DE LAS DOS 
	VARIABLES Y MOSTRAR LOS VALORES INTERCAMBIADOS.
*/

extern void exercise_3() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 3      **\n");
	printf("\t\t***************************\n\n");
	
	int a;
	int b;
	int aux;
	
	printf("Ingrese la variable a: ");
	scanf("%d", &a);
	printf("ngrese la variable b: ");
	scanf("%d", &b);
	printf("\nLa suma es: %d", a+b);
	printf("\nLa resta es: %d", a-b);
	printf("\nLa multiplicacion es: %d", a*b);
	if(b == 0)
		printf("\nNo se puede dividir por cero.");
	else
		printf("\nLa division es: %f", (float)a/b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("\nLas variables intercambiadas son: ");
	printf("a: %d y b: %d", a, b);
}
