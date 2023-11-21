#include <stdio.h>
#include <stdlib.h>

/*
	Consigna 2

	Se desea realizar una aplicación que permita realizar las siguientes 
	opciones:
	
	1.-	Realizar la carga de los códigos de 6 productos del área de informática
		y el precio unitario de cada uno de ellos.
	
	2.-	Mostrar por pantalla el código de cada producto y el precio.
	
	3.-	Crear un archivo llamado productos.txt y guardar en él todos los datos 
		de los productos existentes, cuyos campos deberán ser Código_producto y 
		precio.
	
	4.- Salir del programa.
	
	Se deben codificar las siguientes funciones:
	
	1.- Menú: incluir todas las opciones mencionadas anteriormente.
	
	2.- Muestra de productos: esta función mostrará por pantalla todos los datos
		de los productos informáticos (Código y Precio) que fueron ingresados.
*/

int mostrarMenu();
void mostrarProductos(int codigos[], float precios[]);
void cargarProductos(int codigos[], float precios[]);
int guardarProductos(int codigos[], float precios[]);

int main(int argc, char *argv[]) {
	int opcion;
	int codigos[6] = {0};
	float precios[6] = {0};
	
	opcion = mostrarMenu();
	
	while(opcion != 4){
		switch(opcion){
			case 1:
				cargarProductos(codigos, precios);
				break;
			case 2:
				mostrarProductos(codigos, precios);
				break;
			case 3:
				guardarProductos(codigos, precios);
				break;
			default:
				printf("\nOpcion ingresada invalida.\n");
				break;
		}
		
		opcion = mostrarMenu();		
	}
	
	printf("\nSaliendo del programa...\n");
	
	return 0;
}

int mostrarMenu(){
	int opcion;
	
	printf("\n");
	printf("1. Cargar productos\n");
	printf("2. Mostrar productos\n");
	printf("3. Crear archivo\n");
	printf("4. Salir del programa\n");
	printf("\nSeleccione una opcion: ");
	scanf("%d", &opcion);
	
	return opcion;
}

void mostrarProductos(int codigos[], float precios[]){
	int i;
	
	printf("\nCodigo\tPrecio\n");
	printf("--------------\n");
	for(i = 0; i < 6; i++){
		printf("%d\t$%.2f\n", codigos[i], precios[i]);
	}
}

void cargarProductos(int codigos[], float precios[]){
	int i;
	printf("\nIngrese codigo y precio de los 6 procutos:\n");
	for(i = 0; i < 6; i++){
		printf("\nCodigo: ");
		scanf("%d", &codigos[i]);
		printf("Precio: ");
		scanf("%f", &precios[i]);
	}
}

int guardarProductos(int codigos[], float precios[]){
	FILE *archivo = fopen("productos.txt", "w");
	int i;
	
	if(archivo == NULL){
		printf("Error al crear el archivo productos.txt");
		return 1;
	}
	
	printf("\nCreando archivo productos.txt...\n");
	
	fprintf(archivo, "Codigo_producto\tPrecio\n");
	for(i = 0; i < 6; i++){
		fprintf(archivo, "%d\t\t\t\t%.2f\n", codigos[i], precios[i]);
	}
	
	fclose(archivo);
}

