#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
	Se pide una aplicación que cargue dos vectores de 10 posiciones 
	num1[10], num2[10].
	
	Se pide hacer la multiplicación y la suma de los 2 vectores y guardar en un 
	archivo RESULTADO con los siguientes campos:

	_________________________________________________
	Numero 1	Numero 2	Suma	Multi	Mayor
	_________________________________________________
	5			4			9		20		multi
	_________________________________________________

	El campo MAYOR debe llenarse con la leyenda de la operación mayor. 
	Suma y Multi pueden ser iguales, es ese caso Leyenda = iguales.
*/

void cargarVector(int vector[]);
int generarArchivo(int num1[], int num2[]);
int mostrarArchivo();

void exercise_3() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 3      **\n");
	printf("\t\t***************************\n\n");
	
	int num1[10], num2[10];
	
	cargarVector(num1);
	cargarVector(num2);
	generarArchivo(num1, num2);
	mostrarArchivo();
}

void cargarVector(int vector[]){
	printf("\nIngrese 10 numeros enteros\n");

	int i;
	
	for(i = 0; i < 10; i++){
		printf("(%d/10): ", i + 1);
		scanf("%d", &vector[i]);
	}
}


int generarArchivo(int num1[], int num2[]){
	printf("Generando archivo...");

	FILE *archivo = fopen("sumaMultiplicacionMatrices.txt", "w");
	
	if(archivo == NULL){
		printf("No se pudo crear el archivo");
		return 1;
	}
	
	int i, sum, mul;
	char mayor[7];
	
	fprintf(archivo, "\n_______________________________________________________\n");
	fprintf(archivo, "Numero 1\tNumero 2\tSuma\tMulti\tMayor\n");
	fprintf(archivo, "_______________________________________________________\n");
	
	for(i = 0; i < 10; i++)	{
		sum = num1[i] + num2[i];
		mul = num1[i] * num2[i];
		
		if(sum > mul)
			strcpy(mayor,"Suma");
		else if (mul > sum)
			strcpy(mayor, "Multi");
		else 
			strcpy(mayor, "Iguales");
		
		fprintf(archivo, "%d\t\t%d\t\t%d\t%d\t%s\n", num1[i], num2[i], sum, mul, mayor);
	}
	
	fprintf(archivo, "_______________________________________________________");
	
	fclose(archivo);

}

int mostrarArchivo(){
	FILE *archivo = fopen("sumaMultiplicacionMatrices.txt", "r");
	
	if(archivo == NULL){
		printf("Error al leer el archivo");
		return 1;
	}
	
	char linea[100];
	
	while(fgets(linea, 100, archivo) != NULL){
		printf("%s", linea);
	}
	
	fclose(archivo);
}
