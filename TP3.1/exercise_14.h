#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLE UN ALGORITMO PARA CALCULAR EL IMPORTE DE UNA VENTA EN UN 
	SUPERMERCADO. 
	EL USUARIO DEBE INGRESAR:
		EL NOMBRE DEL PRODUCTO, 
		EL PRECIO POR UNIDAD Y 
		EL NÚMERO DE UNIDADES. 
	EL PROGRAMA MOSTRARÁ POR PANTALLA 
		EL NOMBRE DEL PRODUCTO, 
		EL NÚMERO DE UNIDADES VENDIDAS Y 
		EL PRECIO TOTAL.
*/

extern void exercise_14() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 14      **\n");
	printf("\t\t***************************\n\n");
	
	char productName[30];
	float price;
	int units;
	char temp;
	
	printf("Ingrese el nombre del producto: ");
	scanf("%c", &temp); // just for clear the buffer and avoid read \n
	scanf("%[^\n]", &productName); // allows strings with white space
	printf("Ingrese el precio del producto: ");
	scanf("%f", &price);
	printf("Ingrese la cantidad de unidades: ");
	scanf("%d", &units);
	
	printf("\n\nPRODUCTO:\t\t%s", productName);
	printf("\nUNIDADES:\t\t%d", units);
	printf("\nPRECIO U.:\t\t%.2f", price);
	printf("\n-------------------------------");
	printf("\nTOTAL:\t\t\t%.2f", units * price);
	
	
	
}
