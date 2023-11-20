#include <stdio.h>
#include <stdlib.h>

/* 
	Crear un programa para gestionar una agenda de clientes, para una empresa, 
	con los campos: "nombre (50 caracteres)", "dirección (100 caracteres)", 
	"teléfono (entero)", "estado_pagos (float)". El estado de pagos será un 
	número negativo indicando la cantidad de dinero que debe el cliente. 
	
	El programa debe presentar al usuario un menú con las siguientes opciones: 
	1) Agregar cliente. 
	2) Ver datos de todos los clientes. 
	
	El programa trabajará con un archivo (clientes.mio por ejemplo) que debe 
	crear la primera vez que se ejecute el programa. 

*/

int mostrarMenu();
int agregarCliente(char *, char *, int *, float);
int mostrarClientes();
void cargarDatos(char *, char *, int *, float *);

void exercise_2() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 2      **\n");
	printf("\t\t***************************\n\n");
	
	char nombre[50];
	char direccion[100];
	int telefono[11];
	float estadoCuenta;
	
	int opcion = mostrarMenu();
	
	while(opcion != 0){

				
		switch(opcion){
			case 1:				
				cargarDatos(nombre, direccion, telefono, &estadoCuenta);				
				agregarCliente(nombre, direccion, telefono, estadoCuenta);
				break;
			case 2:
				mostrarClientes();
				break;
		}
		
		opcion = mostrarMenu();
	}
	
}

int mostrarMenu(){
	int opcion;
	
	printf("\n\n1. Agregar cliente");
	printf("\n2. Ver clientes");
	printf("\n\nSeleccione una opcion: (0 para salir): ");
	scanf("%d", &opcion);
	
	return opcion;	
}

void cargarDatos(char *nombre, char *direccion, int *telefono, float *estadoCuenta){
	getchar();
	printf("\nIngrese su nombre: ");
	scanf("%50[^\n]", nombre);
	getchar();
	printf("Ingrese su direccion: ");
	scanf("%100[^\n]", direccion);
	printf("Ingrese su telefono: ");
	scanf("%d", telefono);
	printf("Ingrese su estado de cuenta: ");
	scanf("%f", estadoCuenta);
}

int agregarCliente(char *nombre, char *direccion, int *telefono, float estadoCuenta){
	FILE *archivo = fopen("clientes.txt", "a");
	
	if(archivo == NULL){
		printf("No se pudo abrir el archivo clientes.txt");
		return 1;
	}
	
	fprintf(archivo, "%s;%s;%d;%.2f\n", nombre, direccion, telefono, estadoCuenta);
	
	fclose(archivo);	
}

int mostrarClientes(){
	FILE *archivo = fopen("clientes.txt", "r");
	
	if(archivo == NULL){
		printf("\nNo se econtro el archivo clientes.txt");
		return 1;
	}
	
	char nombre[50];
	char direccion[100];
	int telefono[11];
	float estadoCuenta;	
	
	while(fscanf(archivo, "%49[^;];%49[^;];%d;%f\n", nombre, direccion, &telefono, &estadoCuenta) == 4){
		printf("\nNombre:\t\t%s", nombre);
		printf("\nDireccion\t%s", direccion);
		printf("\nTelefono;\t%d", telefono);
		printf("\nEstado Cuenta:\t%.2f", estadoCuenta);
		printf("\n------------------------------------");
	}
	
	fclose(archivo);
	return 0;
}
