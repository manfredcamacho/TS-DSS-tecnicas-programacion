#include <stdio.h>
#include <stdlib.h>
#include "exercise_1.h"
#include "exercise_2.h"
#include "exercise_3.h"
#include "exercise_4.h"
#include "exercise_5.h"
#include "exercise_6.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int option;
	printf("Ingrese el numero de ejercicio [1-6] (0 para salir): ");
	scanf("%d", &option);
	
	while(option != 0){
		system("cls");
	
		switch(option){
		case 1:
			exercise_1();
			break;
		case 2:
			exercise_2();
			break;
		case 3:
			exercise_3();
			break;
		case 4:
			exercise_4();
			break;
		case 5:
			exercise_5();
			break;
		case 6:
			exercise_6();
			break;
		default:
			printf("Invalid option, try again with valid exercise number!");
	};	
		
		printf("\n\n------------------------------------------------------");
		printf("\nIngrese el numero de ejercicio [1-6] (0 para salir): ");
		scanf("%d", &option);
	}
	
	return 0;
}
