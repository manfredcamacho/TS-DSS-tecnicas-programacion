#include <stdio.h>
#include <stdlib.h>

/* 
	DESARROLLAR UN DIAGRAMA DE FLUJO PARA QUE SE INGRESE UNA TEMPERATURA EN 
	GRADOS CENTÍGRADOS Y LUEGO PASARLA A GRADOS KELVIN Y A GRADOS FAHRENHEIT. 
*/

extern void exercise_11() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 11     **\n");
	printf("\t\t***************************\n\n");
	
	float degree;
	
	printf("Ingrese la temperatura en grados Celsius: ");
	scanf("%f", &degree);
	
	printf("\nLa temperatura en grados Kelvin es: %.2f", degree * 1.8 +32);
	printf("\nLa temperatura en grados Fahrenheit es: %.2f", degree + 273.15);
}
