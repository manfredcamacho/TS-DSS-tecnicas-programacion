#include <stdio.h>
#include <stdlib.h>

/* 
	CREAR UNA FUNCIÓN "ESPRIMO", QUE RECIBA UN NÚMERO Y DEVUELVA EL VALOR 1 SI 
	ES UN NÚMERO PRIMO O 0 EN CASO CONTRARIO.
*/

int isPrime(int);

extern void exercise_17() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 17     **\n");
	printf("\t\t***************************\n\n");	

	int number;
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &number);
	
	if(isPrime(number))
		printf("\n%d Es un numero primo", number);
	else
		printf("\n%d No es un numero primo", number);
}

int isPrime(int number){
	int i;
	
	if(number <= 1)
		return 0;
	
	for(i = 2; i < number; i++){
		if(number % i == 0)
			return 0;
	}
	
	return 1;
}
