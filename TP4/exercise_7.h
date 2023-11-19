#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UNA FUNCIÓN LLAMADA "EDADES" QUE RECIBA 2 EDADES Y DECIR CUÁL DE 
	ELLAS ES LA MAYOR Y CUANTO LE FALTA A LA MENOR PARA LLEGAR A LA EDAD MAYOR.
*/

void edades(int , int);

extern void exercise_7() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 7      **\n");
	printf("\t\t***************************\n\n");
	
	int age1, age2;
	
	printf("Ingrese la primer edad: ");
	scanf("%d", &age1);
	printf("Ingrese la segunda edad: ");
	scanf("%d", &age2);
	
	edades(age1, age2);

}

void edades(int age1, int age2){
	int olderAge, difference;
	
	if(age1 > age2){
		olderAge = age1;
		difference = age1 - age2;
	}
	else{
		olderAge = age2;
		difference = age2 - age1;
	}
	
	if(age1 == age2)
		printf("\nLas edades son iguales");
	else
		printf("\nLa edad mayor es %d y a la menor le faltan %d anios para llegar a la edad mayor", olderAge, difference);
}
