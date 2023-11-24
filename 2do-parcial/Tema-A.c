#include <stdio.h>
#include <stdlib.h>

/*
	Consigna 2

	Crear un programa en C que permita al usuario registrar productos y sus
	precios en un área específica, como elctrónica. El programa debe ofrecer las
	siguientes opciones:
	
	1) Ingresar el nombre de 5 productos y su respectivo precio.
	2) Mostrar por pantalla los nombres de los productos y sus precios.
	3) Crear un archivo llamado "productos_electronica.txt" y guardar en él 
		todos los datos de los productos registrados, donde los campos sean 
		Nombre_producto y precio.
	4) Salir del programa.
	
	Deben implementarselas siguientes funciones:
	
	1) Menú: Debe incluir todas las opciones mencionadas anteriormente.
	2) Muestra de productos: Esta función msotrará por pantalla todos los datos
		de los productos registrados (Nombre y precio).
*/

int mostrarMenu();
void mostrarProductos(char nombres[][20], float precios[]);
void cargarProductos(char nombres[][20], float precios[]);
void guardarProductos(char nombres[][20], float precios[]);

int main(int argc, char *argv[]) {
	int opcion;
	char nombres[5][20] = {""}; //Vector de 5 productos con un nombre de 20 caracteres
	float precios[5] = {0};
	
	opcion = mostrarMenu();
	
	while(opcion != 4){
		switch(opcion){
			case 1:
				cargarProductos(nombres, precios);
				break;
			case 2:
				mostrarProductos(nombres, precios);
				break;
			case 3:
				guardarProductos(nombres, precios);
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

void cargarProductos(char nombres[][20], float precios[]){
	int i;
	
	printf("\nIngrese el Nombre y Precio de los 5 productos:\n");
	
	for(i = 0; i < 6; i++){
		printf("\nPRODUCTO #%d\n", i + 1);
		printf("Nombre: ");
		scanf("%s", &nombres[i]);
		printf("Precio: ");
		scanf("%f", &precios[i]);
	}
}


void mostrarProductos(char nombres[][20], float precios[]){
	int i;
	
	printf("\nNombre\tPrecio\n");
	printf("--------------\n");
	
	for(i = 0; i < 5; i++){
		printf("%s\t$%.2f\n", nombres[i], precios[i]);
	}
}

void guardarProductos(char nombres[][20], float precios[]){
	FILE *archivo = fopen("productos_electronica.txt", "w");
	
	if(archivo == NULL){
		printf("Error al crear el archivo productos_electronica.txt");
	}else {
		printf("\nCreando archivo productos_electronica.txt...\n");
		
		//Genero el archivo con los valores separados por ;
		fprintf(archivo, "Nombre_producto;Precio\n");
		
		int i;
		
		for(i = 0; i < 6; i++){
			fprintf(archivo, "%s;%.2f\n", nombres[i], precios[i]);
		}
		
		fclose(archivo);
	}
	

}

