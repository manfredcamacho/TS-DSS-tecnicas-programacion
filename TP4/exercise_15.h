#include <stdio.h>
#include <stdlib.h>
#define QUANTITY 30
#define UNIT_PRICE 11500

/* 
	CREAR UNA FUNCIÓN QUE RECIBA UN NÚMERO Y MUESTRE EN PANTALLA EL PERÍMETRO Y 
	LA SUPERFICIE DE UN CUADRADO QUE TENGA COMO LADO EL NÚMERO QUE SE HA 
	INDICADO COMO PARÁMETRO.
*/

int calculateSquareArea(int);
int calculateSquarePerimeter(int);

extern void exercise_15() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 15     **\n");
	printf("\t\t***************************\n\n");
	
	int side, area, perimeter;
	
	printf("Ingrese el lado del cuadrado: ");
	scanf("%d", &side);
	
	area = calculateSquareArea(side);
	perimeter = calculateSquarePerimeter(side);
	
	printf("\nEl perimetro del cuadrado es: %d", perimeter);
	printf("\nEl area del cuadrado es: %d", area);
	
	
}

int calculateSquareArea(int side){
	return side * side;
}

int calculateSquarePerimeter(int side){
	return 4 * side;
}
