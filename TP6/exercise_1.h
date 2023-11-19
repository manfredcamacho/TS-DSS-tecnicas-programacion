#include <stdio.h>
#include <stdlib.h>

/* 
	Crear un programa que abra un archivo llamado "prueba.txt" (previamente 
	creado con el block de notas y guardado en la misma carpeta donde este el 
	programa) y que muestre el contenido del mismo por pantalla carácter a 
	carácter

*/

void exercise_1() {
	printf("\t\t***************************\n");
	printf("\t\t**      EJERCICIO 1      **\n");
	printf("\t\t***************************\n\n");
	
	FILE * archivo;
    char linea[50];

    archivo = fopen("prueba.txt", "r");

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
    
	while (getline(
       	printf("%s\n", linea);
   	}
   	fclose(archivo);
}
