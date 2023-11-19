#include <stdio.h>
#include <stdlib.h>
#define QUANTITY 30
#define UNIT_PRICE 11500

/* 
	MOSTRAR LOS NÚMEROS DEL 5 AL 60 INCREMENTANDO  DE 5 EN 5.	
*/

extern void exercise_15() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 15     **\n");
	printf("\t\t***************************\n\n");
	
	int i;
	
	for(i = 5; i <= 60; i +=5)
		printf("%d ", i);
}
