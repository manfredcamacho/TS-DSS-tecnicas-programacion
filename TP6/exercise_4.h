#include <stdio.h>
#include <stdlib.h>

/* 
	Realizar un programa que permita la carga de dos archivos y que genere un 
	tercer archivo con la combinación de los datos de los archivos anteriores.

	Archivo 1 (datos ingresados por teclado): nombre, DNI, teléfono.
	Archivo 2 (datos ingresados por teclado): DNI, localidad, provincia.
	Archivo 3 (datos obtenidos por el programa): DNI, nombre, localidad, 
		provincia.
	
	La carga de los dos primeros archivos finaliza con DNI=0.
*/

int cargarArchivos();
int combinarArchivos();

void exercise_4() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 4      **\n");
	printf("\t\t***************************\n\n");
		
	cargarArchivos();
	combinarArchivos();
	leerArchivoGenerado();
}

int cargarArchivos(){
	int dni, telefono;
	char nombre[25], provincia[25], localidad[25];
	
	FILE *archivo1 = fopen("archivo1.txt", "w");
	FILE *archivo2 = fopen("archivo2.txt", "w");
	
	if(archivo1 == NULL || archivo2 == NULL) {
		printf("No se pudieron crear los archivo.");
		return 1;
	}
	
	printf("Cargando datos a los archivos 1 y 2...\n\n");
	
	printf("Ingrese los siguientes datos:\n");
	printf("DNI (0 para salir): ");
	scanf("%d", &dni);
	
	while(dni != 0){
		printf("Nombre: ");
		scanf("%s", nombre);
		printf("Telefono: ");
		scanf("%d", &telefono);
		printf("Localidad: ");
		scanf("%s", localidad);
		printf("Provincia: ");
		scanf("%s", provincia);
		
		fprintf(archivo1, "%d %s %d\n", dni, nombre, telefono);
		fprintf(archivo2, "%d %s %s\n", dni, localidad, provincia);
		
		printf("\nIngrese los siguientes datos:\n");
		printf("DNI (0 para salir): ");
		scanf("%d", &dni);
	}
	
	fclose(archivo1);
	fclose(archivo2);
}

int combinarArchivos(){
	int dni, telefono;
	char nombre[25], provincia[25], localidad[25];
	
	FILE *archivo1 = fopen("archivo1.txt", "r");
	FILE *archivo2 = fopen("archivo2.txt", "r");
	FILE *archivo3 = fopen("archivo3.txt", "w");
	
	if(archivo1 == NULL || archivo2 == NULL || archivo3 == NULL) {
		printf("No se pudieron abrir los archivos.");
		return 1;
	}
	
	printf("\nCombinando archivos 1 y 2...\n");
	
	while(fscanf(archivo1, "%d %s %d", &dni, nombre, &telefono) == 3 &&
		fscanf(archivo2, "%d %s %s", &dni, localidad, provincia) == 3){
		
		fprintf(archivo3, "%d %s %s\n", dni, nombre, localidad);
	}
	
	fclose(archivo1);
	fclose(archivo2);
	fclose(archivo3);
}

int leerArchivoGenerado(){
	int dni;
	char nombre[25], localidad[25];
	
	FILE *archivo = fopen("archivo3.txt", "r");
	
	if(archivo == NULL){
		printf("Error al abrir el archivo.");
		return 1;
	}
	
	printf("\nLeyendo archivo 3...\n\n");
	
	printf("DNI\tNOMBRE\tLocalidad\n");
	while(fscanf(archivo, "%d %s %s", &dni, nombre, localidad) == 3){
		printf("%d\t%s\t%s\n", dni, nombre, localidad);
	}
	
	fclose(archivo);
}
