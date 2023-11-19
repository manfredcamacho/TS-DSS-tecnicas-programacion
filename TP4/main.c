#include <stdio.h>
#include <stdlib.h>
#include "exercise_1.h"
#include "exercise_2.h"
#include "exercise_3.h"
#include "exercise_4.h"
#include "exercise_5.h"
#include "exercise_6.h"
#include "exercise_7.h"
#include "exercise_8.h"
#include "exercise_9.h"
#include "exercise_10.h"
#include "exercise_11.h"
#include "exercise_12.h"
#include "exercise_13.h"
#include "exercise_14.h"
#include "exercise_15.h"
#include "exercise_16.h"
#include "exercise_17.h"
#include "exercise_18.h"
#include "exercise_19.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int option;
	printf("Ingrese el numero de ejercicio [1-20] (0 para salir): ");
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
		case 7:
			exercise_7();
			break;
		case 8:
			exercise_8();
			break;
		case 9:
			exercise_9();
			break;
		case 10:
			exercise_10();
			break;
		case 11:
			exercise_11();
			break;
		case 12:
			exercise_12();
			break;
		case 13:
			exercise_13();
			break;
		case 14:
			exercise_14();
			break;
		case 15:
			exercise_15();
			break;
		case 16:
			exercise_16();
			break;
		case 17:
			exercise_17();
			break;
		case 18:
			exercise_18();
			break;
		case 19:
			exercise_19();
			break;
		default:
			printf("Invalid option, try again with valid exercise number!");
	};	
		
		printf("\n\n------------------------------------------------------");
		printf("\nIngrese el numero de ejercicio [1-15] (0 para salir): ");
		scanf("%d", &option);
	}
	
	return 0;
}
