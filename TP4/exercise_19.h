#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UN PROGRAMA EN C QUE PIDA POR PANTALLA UN NÚMERO DEL 1 AL 10 Y 
	MEDIANTE UNA FUNCIÓN MUESTRE POR PANTALLA EL NÚMERO ESCRITO EN LETRAS. 
*/

char * numberToText(int);

extern void exercise_19() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 19     **\n");
	printf("\t\t***************************\n\n");
	
	int number;
	
	printf("Ingrese un numero entre el 1 y 10: ");
	scanf("%d", &number);
	
	printf("\nEl numero %d escrito en letras es: %s", number, numberToText(number));
}

char * numberToText(int number){
	switch(number) {
	    case 1:
	        return "Uno";
	    case 2:
	        return "Dos";
	    case 3:
	        return "Tres";
	    case 4:
	        return "Cuatro";
	    case 5:
	        return "Cinco";
	    case 6:
	        return "Seis";
	    case 7:
	        return "Siete";
	    case 8:
	        return "Ocho";
	    case 9:
	        return "Nueve";
	    case 10:
	        return "Diez";
	    default:
	        return "Numero no reconocido";
    }
}
