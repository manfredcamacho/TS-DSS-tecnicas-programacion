#include <stdio.h>
#include <stdlib.h>

/*
	Consigna 1

	Se desea realizar una aplicación que pueda controlar los precios de una 
	playa de estacionamiento.
	Cada vez que un cliente desea un estacionamiento se ingresan los siguientes
	datos:
	
	DNI, Tipo tarifa, cantidad de horas.
	
	Tipo de tarifa:
	(1) Auto 50$ la hora.
	(2) Moto 25$ la hora.
	
	Se deberá realizar una función a la cual se le pasen los datos 
	mencionados anteriormente, el programa deberá calcular el total a pagar,
	informarlo y luego guardar en un archivo los siguientes datos: 
	
	Dni, tipo 
	
	La carga de datos finaliza cuando se ingresa un DNI = 0.
*/
float calcularTotal(int tipoTarifa, int horas);

int main(int argc, char *argv[]) {
	
	int dni, tipoTarifa, horas;
	float total;
	
	printf("DNI (0 para Salir): ");
	scanf("%d", &dni);
	
	while(dni != 0){
		printf("Tipo de tarifa (1. Auto | 2. Moto): ");
		scanf("%d", &tipoTarifa);
		printf("Cantidad horas: ");
		scanf("%d", &horas);
		
		total = calcularTotal(tipoTarifa, horas);
		
		printf("\nEL total a pagar es $%.2f\n", total);
		
		guardarDatos(dni, tipoTarifa);
		
		printf("\nDNI (0 para Salir): ");
		scanf("%d", &dni);
	}
	
	return 0;
}

float calcularTotal(int tipoTarifa, int horas){
	if(tipoTarifa == 1)
		return 50 * horas;
	else
		return 25 * horas;
}

int guardarDatos(int dni, int tipoTarifa){
	FILE *archivo = fopen("estacionamiento.txt", "a");
	
	if(archivo == NULL){
		printf("No se pudo abrir el archivo estacionamiento.txt");
		return 1;
	}
	
	if(tipoTarifa == 1)
		fprintf(archivo, "%d\tAuto\n", dni);
	else
		fprintf(archivo, "%d\tMoto\n", dni);
		
	fclose(archivo);
}

