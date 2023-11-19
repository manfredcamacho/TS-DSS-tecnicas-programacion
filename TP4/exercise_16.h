#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UNA FUNCI�N "ESCRIBIRTABLAMULTIPLICAR", QUE RECIBA COMO PAR�METRO UN 
	N�MERO ENTERO, Y ESCRIBA LA TABLA DE MULTIPLICAR DE ESE N�MERO (POR EJEMPLO,
	PARA EL 3 DEBER� LLEGAR DESDE 3X0=0 HASTA 3X10=30). 
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
