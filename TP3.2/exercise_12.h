#include <stdio.h>
#include <stdlib.h>

/* 
	ESCRIBIR UN PROGRAMA QUE IMPRIMA POR PANTALLA 30 LÍNEAS DE ASTERISCOS. 

*/

extern void exercise_12() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 12     **\n");
	printf("\t\t***************************\n\n");
	
	int i;
	
	for(i = 0; i < 30; i++ ){
		printf("\n*");
	}
}
