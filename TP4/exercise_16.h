#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UNA FUNCIÓN "ESCRIBIRTABLAMULTIPLICAR", QUE RECIBA COMO PARÁMETRO UN 
	NÚMERO ENTERO, Y ESCRIBA LA TABLA DE MULTIPLICAR DE ESE NÚMERO (POR EJEMPLO,
	PARA EL 3 DEBERÁ LLEGAR DESDE 3X0=0 HASTA 3X10=30). 
*/

void writeMultiplicationTable(int);

extern void exercise_16() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 16     **\n");
	printf("\t\t***************************\n\n");
	
	int number;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &number);
	
	writeMultiplicationTable(number);
}

void writeMultiplicationTable(int number){
	int i;
	
	for(i = 0; i <= 10; i++)
		printf("\n%d x %d = %d", number, i, number * i);
}
