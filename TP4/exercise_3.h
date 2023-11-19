#include <stdio.h>
#include <stdlib.h>

/* 
	HALLAR EL ÁREA DE LA SIGUIENTE FIGURA Y MOSTRARLA POR PANTALLA. HACER EL 
	MISMO EJERCICIO CON LAS FUNCIONES AREA1, AREA2, ÁREA, MOSTRAR. 
	
	   3 mts
	 --------
	|		|3 mts
	|		|
	|		|      4mts
	|		|____________
	|					| 
	|					| 2mts
	--------------------|
	
*/
int calculateRectangleArea(int, int);
int area1();
int area2();
int area();
void showArea();


extern void exercise_3() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 3      **\n");
	printf("\t\t***************************\n\n");
	
	showArea();
}

int calculateRectangleArea(int side1, int side2){
	return side1 * side2;
}

int area1(){
	return calculateRectangleArea(3, 3);
}

int area2(){
	return calculateRectangleArea(3 + 4, 2);
}

int area(){
	return area1() + area2();
}

void showArea(){
	printf("El area total de la figura es: %d m2", area());
}
