#include <stdio.h>
#include <stdlib.h>

/* 
	Crear un programa para gestionar una agenda de clientes, para una empresa, 
	con los campos: "nombre (50 caracteres)", "direcci�n (100 caracteres)", 
	"tel�fono (entero)", "estado_pagos (float)". El estado de pagos ser� un 
	n�mero negativo indicando la cantidad de dinero que debe el cliente. 
	
	El programa debe presentar al usuario un men� con las siguientes opciones: 
	1) Agregar cliente. 
	2) Ver datos de todos los clientes. 
	
	El programa trabajar� con un archivo (clientes.mio por ejemplo) que debe 
	crear la primera vez que se ejecute el programa. 

*/

int mostrarMenu();


void exercise_2() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	mostrarMenu();
	
}

int mostrarMenu(){
	int opcion;
	
	printf("\nSeleccione una opcion");
	printf("\n  1.- Agregar cliente");
	printf("\n  2.- Ver clientes");
	scanf("%d", &opcion);
	
	return opcion;	
}
